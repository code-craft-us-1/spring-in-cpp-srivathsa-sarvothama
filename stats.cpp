#include "stats.h"
#include "numeric"
#include "algorithm"

Stats Statistics::ComputeStatistics(const std::vector<double>& inputValues)
{
     Stats stats;
	 if (!inputValues.empty())
	 {
	     stats.min = *std::min_element(inputValues.begin(), inputValues.end());
         stats.max = *std::max_element(inputValues.begin(), inputValues.end());
         stats.average = std::accumulate(inputValues.begin(), inputValues.end(), 0.0) / inputValues.size();
	 }
    return stats;
}
