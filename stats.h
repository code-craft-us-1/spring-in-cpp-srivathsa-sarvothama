#include <vector>

struct Stats {
    double min = NAN;
    double max = NAN;
    double average = NAN;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& );
}
