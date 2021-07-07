#ifndef Algorithm_H
#define Algorithm_H

#include <vector>
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>
#include <fstream>
#include <utility>
#include <sstream>

using namespace std;

class Algorithm
{
public:
    vector<vector<double>> X;
    vector       <double>  Y;

    Algorithm(string dataFile);
    long double sigmoid  (long double x);
    double f             (vector<double> W );
    double armijo        (vector<double> xk, vector<double> dk);
    double norme         (vector<double> U );
    vector<double> grad_f(vector<double> x );
    vector<double> gradientMethod(int time, vector<double> xk);
    vector<pair<string, vector<double>>> read_csv(string filename);
};


#endif // Algorithm_H
