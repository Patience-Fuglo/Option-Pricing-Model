#include "NormalDistribution.h"
#include <cmath>

double NormalDistribution::cumulative(double x) {
    return 0.5 * std::erfc(-x * M_SQRT1_2);
}
