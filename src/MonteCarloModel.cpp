#include "MonteCarloModel.h"
#include <cmath>
#include <random>
#include <algorithm>

double MonteCarloModel::callPrice(double S, double K, double T, double r, double sigma, int numSimulations) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<> d(0, 1);

    double sumPayoff = 0.0;
    for (int i = 0; i < numSimulations; ++i) {
        double ST = S * exp((r - 0.5 * sigma * sigma) * T + sigma * sqrt(T) * d(gen));
        sumPayoff += std::max(0.0, ST - K);
    }

    return (sumPayoff / numSimulations) * exp(-r * T);
}

double MonteCarloModel::putPrice(double S, double K, double T, double r, double sigma, int numSimulations) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::normal_distribution<> d(0, 1);

    double sumPayoff = 0.0;
    for (int i = 0; i < numSimulations; ++i) {
        double ST = S * exp((r - 0.5 * sigma * sigma) * T + sigma * sqrt(T) * d(gen));
        sumPayoff += std::max(0.0, K - ST);
    }

    return (sumPayoff / numSimulations) * exp(-r * T);
}
