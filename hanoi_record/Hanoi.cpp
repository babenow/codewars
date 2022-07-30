#include <CodeWars/HanoiRecord.hpp>
/**
 * @details
 * 1. Move tower (disks -1) from 1 to 3
 * 2. Move disk to 2
 * 3. Move tower (disks - 1) from 3 to 2
 * @brief
 *
 * @param disks
 * @return unsigned long long
 */

unsigned long long hanoi(unsigned disks) {
  unsigned long long result = 0;

  if (disks == 1) {
    return 1;
  }

  if (disks > 1) {
    unsigned movedTower = disks - 1;
    result += hanoi(movedTower);
    result++;
    result += hanoi(movedTower);
  }

  return result;
}