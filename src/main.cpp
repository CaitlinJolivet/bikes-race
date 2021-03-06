#include "Bike.h"
#include "Race.h"
#include "Road.h"

#include <vector>

int main() {
  Road road(150);

  // First student must give a name to bike
  Bike bike("Caitlin");

  // Second student must give a name to bike2
  Bike bike2("");

  // Third student (if any) must give a name to bike3
  Bike bike3("");

  Race race(road, std::vector<Bike>{bike, bike2, bike3});
  return 0;
}
