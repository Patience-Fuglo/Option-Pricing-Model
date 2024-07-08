#include "BlackScholesModel.h"
#include "BinomialModel.h"
#include "MonteCarloModel.h"
#include <iostream>

int main() {
    // Parameters
    double S = 100.0;    // Current stock price
    double K = 100.0;    // Strike price
    double T = 1.0;      // Time to expiration (1 year)
    double r = 0.05;     // Risk-free interest rate (5%)
    double sigma = 0.2;  // Volatility (20%)
    int steps = 100;     // Steps for Binomial model
    int numSimulations = 100000; // Simulations for Monte Carlo model

    // Calculate call and put prices using Black-Scholes model
    double bsCallPrice = BlackScholesModel::callPrice(S, K, T, r, sigma);
    double bsPutPrice = BlackScholesModel::putPrice(S, K, T, r, sigma);

    // Calculate call and put prices using Binomial model
    double binCallPrice = BinomialModel::callPrice(S, K, T, r, sigma, steps);
    double binPutPrice = BinomialModel::putPrice(S, K, T, r, sigma, steps);

    // Calculate call and put prices using Monte Carlo model
    double mcCallPrice = MonteCarloModel::callPrice(S, K, T, r, sigma, numSimulations);
    double mcPutPrice = MonteCarloModel::putPrice(S, K, T, r, sigma, numSimulations);

    // Output the results
    std::cout << "Black-Scholes Call Price: " << bsCallPrice << std::endl;
    std::cout << "Black-Scholes Put Price: " << bsPutPrice << std::endl;
    std::cout << "Binomial Call Price: " << binCallPrice << std::endl;
    std::cout << "Binomial Put Price: " << binPutPrice << std::endl;
    std::cout << "Monte Carlo Call Price: " << mcCallPrice << std::endl;
    std::cout << "Monte Carlo Put Price: " << mcPutPrice << std::endl;

    return 0;
}
