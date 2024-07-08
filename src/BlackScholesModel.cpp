#include "BlackScholesModel.h"
#include "NormalDistribution.h"
#include <cmath>

double BlackScholesModel::d1(double S, double K, double T, double r, double sigma) {
    return (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
}

double BlackScholesModel::d2(double S, double K, double T, double r, double sigma) {
    return d1(S, K, T, r, sigma) - sigma * sqrt(T);
}

double BlackScholesModel::callPrice(double S, double K, double T, double r, double sigma) {
    double D1 = d1(S, K, T, r, sigma);
    double D2 = d2(S, K, T, r, sigma);
    return S * NormalDistribution::cumulative(D1) - K * exp(-r * T) * NormalDistribution::cumulative(D2);
}

double BlackScholesModel::putPrice(double S, double K, double T, double r, double sigma) {
    double D1 = d1(S, K, T, r, sigma);
    double D2 = d2(S, K, T, r, sigma);
    return K * exp(-r * T) * NormalDistribution::cumulative(-D2) - S * NormalDistribution::cumulative(-D1);
}
