#ifndef DRADIENTDESCENTMULTIPLE_H
#define DRADIENTDESCENTMULTIPLE_H

#include <vector>
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>
#include <fstream>
#include <utility>
#include <sstream>

using namespace std;

class DradientDescentMultiple
{
public:
    vector<vector<double>> X;
    vector       <double>  Y;

    DradientDescentMultiple(string dataFile);
    double f       (vector<double> W);
    double armijo  (vector<double> xk, vector<double> dk);
    double norme   (vector<double> U);
    vector<double> grad_f(vector<double> x);
    vector<double> gradientMethod(double deta, vector<double> xk);
    vector<pair<string, vector<double>>> read_csv(string filename);
};

#endif // DRADIENTDESCENTMULTIPLE_H
