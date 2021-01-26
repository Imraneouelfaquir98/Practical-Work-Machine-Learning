#ifndef GRADIENTDESCENT_H
#define GRADIENTDESCENT_H

#include <vector>
#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

class GradientDescent
{
public:
    vector<double> X;
    vector<double> Y;

    GradientDescent(vector<double> x, vector<double> y);
    double f       (vector<double> x);
    double phi     (double alpha, vector<double> xk, vector<double> dk);
    double deff_phi(double alpha, vector<double> xk, vector<double> dk);
    double armijo  (vector<double> xk, vector<double> dk);
    double wolfe   (vector<double> xk, vector<double> dk);
    double norme   (vector<double> U);
    vector<double> grad_f(vector<double> x);
    vector<double> gradientMethod(double deta, vector<double> xk);
};

#endif // GRADIENTDESCENT_H
