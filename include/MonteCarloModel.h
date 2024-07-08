#ifndef MONTE_CARLO_MODEL_H
#define MONTE_CARLO_MODEL_H

class MonteCarloModel {
public:
    static double callPrice(double S, double K, double T, double r, double sigma, int numSimulations);
    static double putPrice(double S, double K, double T, double r, double sigma, int numSimulations);
};

#endif // MONTE_CARLO_MODEL_H
