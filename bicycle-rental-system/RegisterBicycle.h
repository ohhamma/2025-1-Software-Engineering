#pragma once

#include <string>
#include "BicycleCollection.h"

class RegisterBicycle {
 public:
  RegisterBicycle(BicycleCollection* bicycle_collection);

  void addNewBicycle(const std::string& id, const std::string& name);

 private:
  BicycleCollection* bicycle_collection_;
};