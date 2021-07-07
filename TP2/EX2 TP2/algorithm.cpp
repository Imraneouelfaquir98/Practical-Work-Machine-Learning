#include "algorithm.h"
#include "operators.h"

Algorithm::Algorithm(string filename)
{
    vector<pair<string, vector<double>>> dataPop = read_csv(filename);
    vector<double> XLINE ((int)dataPop.size(), 1);
    for(int i=0; i<dataPop[0].second.size(); i++)
    {
        Y.push_back(dataPop[0].second[i]);
        for(int j=0; j<dataPop.size()-1; j++)
        {
             XLINE[j+1] = dataPop[j+1].second[i];
        }
        X.push_back(XLINE);
    }
}

long double Algorithm::sigmoid(long double x){
    return 1/(1 + exp((long double)-x));
}

double Algorithm::f(vector<double> W)
{
    double Ls = 0;
    for(int i=0; i<(int)X.size(); i++){
    	Ls += log(1 + exp(-(2*Y[i]-1)*W*X[i]));
    }
    return Ls/(int)X.size();
}

double Algorithm::armijo(vector<double> W, vector<double> dk)
{
    double alpha = 1;
    double X = 0.25*alpha*grad_f(W)*dk;
    while(f(W + alpha*dk) - f(W) > X){
        alpha = alpha/2;
        X = 0.25*alpha*grad_f(W)*dk;
    }
    return alpha;
}

double Algorithm::norme(vector<double> U)
{
    double N=0;
    for (int i = 0; i <(int)U.size(); i++)
        N = N + U[i]*U[i];
    return sqrt(N);
}

vector<double> Algorithm::grad_f(vector<double> W)
{
    vector<double> grad(W.size() , 0);

    for(int i=0; i<(int)X.size(); i++){
        grad = grad + (sigmoid(W*X[i]) - Y[i])*X[i];
    }
    return grad/(int)X.size();
}

vector<double> Algorithm::gradientMethod(int time, vector<double> Wk)
{
    vector<double> gk = grad_f(Wk);
    double alpha;
    int k=0;
    while(k<time)
    {
        cout<<k<<"- Ls(W) = "<<f(Wk)<<endl;
        alpha = armijo(Wk,-1*gk);
        Wk = Wk - alpha*gk;
        gk = grad_f(Wk);
        k++;
    }
    return Wk;
}
vector<pair<string, vector<double>>> Algorithm::read_csv(string filename)
{
    vector<pair<string, vector<double>>> result;
    ifstream myFile(filename);

    if(!myFile.is_open())
        throw runtime_error("Could not open file");

    string line, colname;
    double val;

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