#ifndef BINOMIAL_MODEL_H
#define BINOMIAL_MODEL_H

class BinomialModel {
public:
    static double callPrice(double S, double K, double T, double r, double sigma, int steps);
    static double putPrice(double S, double K, double T, double r, double sigma, int steps);
};

#endif // BINOMIAL_MODEL_H
