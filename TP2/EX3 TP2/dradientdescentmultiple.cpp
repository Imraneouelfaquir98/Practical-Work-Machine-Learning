#include "dradientdescentmultiple.h"
#include "operators.h"

DradientDescentMultiple::DradientDescentMultiple(string filename)
{
    vector<pair<string, vector<double>>> dataPop = read_csv(filename);
    vector<double> XLINE (4,0);
    for(int i=0; i<dataPop[0].second.size(); i++)
    {
        for(int j=0; j<dataPop.size()-1; j++)
        {
             XLINE[j] = dataPop[j].second[i];
        }
        X.push_back(XLINE);
        Y.push_back(dataPop[4].second[i]);
    }
}


double DradientDescentMultiple::f(vector<double> W)
{
    double Ls = 0, produit = 0;
    for(int i=0; i<(int)X.size(); i++)
    {
    	produit = 0;
        for(int j=0; j<(int)X[i].size(); j++)
        {
            produit +=X[i][j]*W[j];
        }
        produit += W[X[i].size()];
        Ls += pow(Y[i] - produit,2);
    }

    return Ls/X.size();
}

double DradientDescentMultiple::armijo(vector<double> W, vector<double> dk)
{
    double alpha = 1;
    double X = 0.25*alpha*grad_f(W)*dk;
    while(f(W + alpha*dk) - f(W) > X){
        alpha = alpha/2;
        X = 0.25*alpha*grad_f(W)*dk;
    }
    return alpha;
}

double DradientDescentMultiple::norme(vector<double> U)
{
    double N=0;
    for (int i = 0; i <(int)U.size(); i++)
        N = N + U[i]*U[i];
    return sqrt(N);
}

vector<double> DradientDescentMultiple::grad_f(vector<double> W)
{
    vector<double> grad(W.size() , 0);

    vector<double> Wk;
    double h = 1e-10;
    for(int i=0; i<(int)W.size(); i++){
        Wk       = W;
        Wk  [i] += h;
        grad[i]  = (f(Wk)-f(W))/h;
    }
    return grad;
}

vector<double> DradientDescentMultiple::gradientMethod(double deta, vector<double> Wk)
{
    vector<double> gk = grad_f(Wk);
    double alpha;
    int k=0;
    while(norme(gk)>deta && k<1000)
    {
        cout<<k<<"- Ls(W) = "<<f(Wk)<<""<<endl;
        alpha = armijo(Wk,-1*gk);
        Wk = Wk - alpha*gk;
        gk = grad_f(Wk);
        k++;
    }
    return Wk;
}

vector<pair<string, vector<double>>> DradientDescentMultiple::read_csv(string filename)
{
    vector<pair<string, vector<double>>> result;
    ifstream myFile(filename);

    if(!myFile.is_open())
        throw runtime_error("Could not open file");

    string line, colname;
    int val;

    if(myFile.good())
    {
        getline(myFile, line);
        stringstream ss(line);
        while(getline(ss, colname, ',')){
            result.push_back({colname, vector<double> {}});
        }
    }

    while(getline(myFile, line))
    {
        stringstream ss(line);
        int colIdx = 0;
        while(ss >> val){
            result.at(colIdx).second.push_back(val);
            if(ss.peek() == ',') ss.ignore();
            colIdx++;
        }
    }
    myFile.close();
    return result;
}