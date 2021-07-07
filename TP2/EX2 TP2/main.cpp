#include <iostream>
#include <cmath>
#include "algorithm.h"
#include "operators.h"

using namespace std;

double sigmoid(double x){
	return 1/(1 + exp(-x));
}

int main(int argc, char const *argv[])
{
	Algorithm *g = new Algorithm("binary.csv");

	vector<double> w (4, 0), X(4,1);

 // w[0] = -0.125062; w[1] = 0.00181627; w[2] = -0.07534610;  w[3] = -0.599510;
 // w[0] = -0.168860; w[1] = 0.00183567; w[2] = -0.04320690;  w[3] = -0.633868;
 // w[0] = -0.213616; w[1] = 0.00178419; w[2] = -0.01399730;  w[3] = -0.644236; 
 // w[0] = -0.260135; w[1] = 0.00174130; w[2] =  0.00987589;  w[3] = -0.648057;	// Ls(W) = 0.584659
	// w[0] = -0.300135; w[1] = 0.00170130; w[2] =  0.01587589;  w[3] = -0.648057;
	w = g->gradientMethod(100,w);

	cout<<"\nW* = ["<<w[0]<<", "<<w[1]<<", "<<w[2]<<", "<<w[3]<<"]\n\n"<<endl;

	while(true)
	{
		for(int i=1; i<4; i++)
		{
			cout<<"X"<<i<<" = ";
			cin >> X[i];
		}
		if(sigmoid(w*X) >= 0.5){
			cout<<" y = 1; X*W = "<<X*w<<"; sigmoid(X*Beta) = "<<sigmoid(X*w)<<";\n\n"<<endl;
		}
		else{
			cout<<" y = 0; X*W = "<<X*w<<"; sigmoid(X*Beta) = "<<sigmoid(X*w)<<";\n\n"<<endl;
		}
		X[0] = 1; X[1] = 0; X[2] = 0; X[3] = 0;
	}

	return 0;
}

// g++ -c main.cpp operators.cpp algorithm.cpp
// g++ main.o operators.o algorithm.o -o exe


