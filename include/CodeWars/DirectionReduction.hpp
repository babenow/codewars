#ifndef CODEWARS_DIRECTIONREDUCTION_HPP_
#define CODEWARS_DIRECTIONREDUCTION_HPP_

#include <string>
#include <vector>

typedef std::vector<std::string> DirectionsArr;

class DirReduction {
public:
  static DirectionsArr dirReduction(DirectionsArr &arr);
  static bool isOpposite(std::string dir1, std::string dir2);
};

#endif // CODEWARS_DIRECTIONREDUCTION_HPP_