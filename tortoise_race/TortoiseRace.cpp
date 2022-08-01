#include <CodeWars/TortoiseRace.hpp>

RaceVec Tortoise::race(int v1, int v2, int g) {
  RaceVec result = {-1, -1, -1};
  if (v1 < v2) {
    int tm = 3600 * g / (v2 - v1); // Время в секундах
    int h = tm / 3600;
    int m = tm / 60 % 60;
    int s = tm % 60;
    result = {h, m, s};
  }
  return result;
}
