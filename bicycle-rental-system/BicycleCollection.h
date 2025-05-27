#pragma once

#include <string>
#include <vector>
#include "Bicycle.h"

class BicycleCollection {
 public:
  BicycleCollection();
  ~BicycleCollection();  // 동적 메모리 해제를 위한 소멸자

  void addBicycle(const std::string& id, const std::string& name);
  Bicycle* findBicycleById(const std::string& id) const;
  std::vector<Bicycle*> findBicyclesByRenterId(const std::string& renter_id);

 private:
  Bicycle* bicycles_[10];
  int num_bicycles_;
};