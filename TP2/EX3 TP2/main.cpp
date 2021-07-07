#include <iostream>
#include "dradientdescentmultiple.h"
#include "operators.h"

using namespace std;

int main(int argc, char const *argv[])
{
	DradientDescentMultiple *g = new DradientDescentMultiple("pop.csv");
// f(W) = 1991.05
// W = [-2.32185, -0.199523, 0.037631, 13.223, 13.048]

	vector<double> W(5,0);
	W[0] = -2.32185;
	W[1] = -0.199523;
	W[2] = 0.037631;
	W[3] = 13.223;
	W[4] = 13.048;

	W = g->gradientMethod(0.001,W);

	cout<<"W = [";
	for(int i=0; i<(int)W.size()-1; i++)
		cout<<W[i]<<", ";
	cout<<W[4]<<"]\n\n"<<endl;

	double Y=0, val = 0;
	vector<double> x(4,0);
	while(true){
		Y=0;
		for(int i=0; i<4; i++)
		{
			cout<<"X"<<i+1<<" = ";
			cin>>x[i];
		}

		for(int i=0; i<4; i++)
			Y += x[i]*W[i];
		Y += W[4];

		cout<<"Y = "<<Y<<"\n\n"<<endl;
	}

	return 0;
}


	// for(int i=0; i<(int)W.size(); i++)
	// 	cout<<W[i]<<"   ";
	// cout<<""<<endl;