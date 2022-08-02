#include <CodeWars/TakeTenMinutesWalk.hpp>

struct coords {
  int x, y;

  coords() : x(0), y(0) {}

  void move(const char dir) {
    if (dir == 'n')
      y++;
    if (dir == 's')
      y--;
    if (dir == 'e')
      x++;
    if (dir == 'w')
      x--;
  }

  bool isZero() { return x == 0 && y == 0; }
};

bool isValidWalk(std::vector<char> walk) {
  if (walk.size() != 10) {
    return false;
  }

  coords point;
  for (auto i : walk) {
    point.move(i);
  }

  return point.isZero();
}
