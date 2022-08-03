#include <CodeWars/DirectionReduction.hpp>
bool DirReduction::isOpposite(std::string dir1, std::string dir2) {
  bool result = false;
  if ((dir1 == "NORTH" && dir2 == "SOUTH") ||
      (dir1 == "SOUTH" && dir2 == "NORTH")) {
    result = true;
  }
  if ((dir1 == "WEST" && dir2 == "EAST") ||
      (dir1 == "EAST" && dir2 == "WEST")) {
    result = true;
  }
  return result;
}

DirectionsArr DirReduction::dirReduction(DirectionsArr &arr) {
  if (arr.size() < 2) {
    return arr;
  }

  DirectionsArr::iterator it = arr.begin();
  while (it != arr.end()-1) {
    if (isOpposite(*it, *(it + 1))) {
      arr.erase(it, it + 2);
      return dirReduction(arr);
    }
    it++;
  }
  return arr;
}