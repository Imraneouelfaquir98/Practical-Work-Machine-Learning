#include <iostream>
#include <vector>
#include "operators.hpp"


using namespace std;

typedef struct Point{
	vector<double> X;
	int y;
}Point;

vector<double> perceptron(vector<double> W0, vector<Point> S);
double Ls(vector<double> W, vector<Point> S);
int    signe(double value);
void   print(vector<double> V);

double Data[6][3] = {{-1, 0,-1},
				     {-1,-1,-1},
				     {-1, 1,-1},
				     { 1, 0, 1},
				     { 1, 1, 1},
				     { 1,-1, 1}};

int main(int argc, char const *argv[])
{
	vector<double> W ( 2, 0); //W[0] = 4;
	vector<Point> S; S.resize(6);

	for(int i=0; i<S.size(); i++){
		S[i].X.resize(2);
		for(int j=0; j<S[i].X.size(); j++){
			S[i].X[j] = Data[i][j];
		}
		S[i].y = Data[i][S[i].X.size()];
	}

	perceptron(W,S);


	return 0;
}

vector<double> perceptron(vector<double> W0, vector<Point> S){
	vector<double> W = W0;

	int t=0;

	for(int t=0; t<40; t++){
        for(int i=0; i<S.size(); i++){
            double e = S[i].y - W*S[i].X;
            if(e != 0){
                W = W + 2*e*S[i].X;
            }
        }
    }

    print(W);
    printf("Ls = %f\n",Ls(W,S));


	return W;
}

double Ls(vector<double> W, vector<Point> D){
	double ls = 0;
	for(int i=0; i<D.size(); i++)
	{
		if(W*D[i].X != D[i].y){
			ls++;
		}
	}
	return ls/D.size();
}



void print(vector<double> V){
	printf("W* = {");
	for(int k=0; k<V.size(); k++)
		printf(" %3.3f,",V[k]);
	printf("}\n");
}