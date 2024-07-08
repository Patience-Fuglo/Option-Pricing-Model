#include "BinomialModel.h"
#include <cmath>
#include <vector>
#include <algorithm>

double BinomialModel::callPrice(double S, double K, double T, double r, double sigma, int steps) {
    double dt = T / steps;
    double u = exp(sigma * sqrt(dt));
    double d = 1 / u;
    double p = (exp(r * dt) - d) / (u - d);

    std::vector<double> prices(steps + 1);
    for (int i = 0; i <= steps; ++i) {
        prices[i] = S * pow(u, steps - i) * pow(d, i);
    }

    std::vector<double> callValues(steps + 1);
    for (int i = 0; i <= steps; ++i) {
        callValues[i] = std::max(0.0, prices[i] - K);
    }

    for (int step = steps - 1; step >= 0; --step) {
        for (int i = 0; i <= step; ++i) {
            callValues[i] = exp(-r * dt) * (p * callValues[i] + (1 - p) * callValues[i + 1]);
        }
    }

    return callValues[0];
}

double BinomialModel::putPrice(double S, double K, double T, double r, double sigma, int steps) {
    double dt = T / steps;
    double u = exp(sigma * sqrt(dt));
    double d = 1 / u;
    double p = (exp(r * dt) - d) / (u - d);

    std::vector<double> prices(steps + 1);
    for (int i = 0; i <= steps; ++i) {
        prices[i] = S * pow(u, steps - i) * pow(d, i);
    }

    std::vector<double> putValues(steps + 1);
    for (int i = 0; i <= steps; ++i) {
        putValues[i] = std::max(0.0, K - prices[i]);
    }

    for (int step = steps - 1; step >= 0; --step) {
        for (int i = 0; i <= step; ++i) {
            putValues[i] = exp(-r * dt) * (p * putValues[i] + (1 - p) * putValues[i + 1]);
        }
    }

    return putValues[0];
}
