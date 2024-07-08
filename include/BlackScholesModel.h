#ifndef BLACK_SCHOLES_MODEL_H
#define BLACK_SCHOLES_MODEL_H

class BlackScholesModel {
public:
    static double callPrice(double S, double K, double T, double r, double sigma);
    static double putPrice(double S, double K, double T, double r, double sigma);

private:
    static double d1(double S, double K, double T, double r, double sigma);
    static double d2(double S, double K, double T, double r, double sigma);
};

#endif // BLACK_SCHOLES_MODEL_H
