#pragma once

#include <string>
#include "User.h"
#include "BicycleCollection.h"

class RentBicycle {
 public:
  RentBicycle(BicycleCollection* bicycle_collection);

  Bicycle* rentBicycle(const std::string& bicycle_id, User* user);

 private:
  BicycleCollection* bicycle_collection_;
};
