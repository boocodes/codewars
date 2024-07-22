#include <cmath>
#include <string>

std::string seriesSum(int n)
{
    double result = 0;
    double under_line = 1.0;
    for(int i = 0; i < n; i++){
      result += (1/under_line);
      under_line += 3.0;
    }
    
    result = round (result * 100) / 100;
  return std::to_string(result).erase(4);
}