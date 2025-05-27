#pragma once

#include <string>
#include <vector>
#include "User.h"
#include "BicycleCollection.h"

class ViewRentalInfo {
 public:
  ViewRentalInfo(BicycleCollection* bicycle_collection);

  std::vector<Bicycle*> listRentedBicycles(User* user);

 private:
  BicycleCollection* bicycle_collection_;
};
