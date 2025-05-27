#include "BicycleCollection.h"

BicycleCollection::BicycleCollection() : num_bicycles_(0) {}

BicycleCollection::~BicycleCollection() {
  for (int i = 0; i < num_bicycles_; ++i) {
    delete bicycles_[i];
  }
}

void BicycleCollection::addBicycle(const std::string& id,
                                   const std::string& name) {
  if (num_bicycles_ < 10) {
    bicycles_[num_bicycles_++] = new Bicycle(id, name);
  }
}

Bicycle* BicycleCollection::findBicycleById(const std::string& id) const {
  for (int i = 0; i < num_bicycles_; ++i) {
    if (bicycles_[i]->getId() == id) {
      return bicycles_[i];
    }
  }
  return nullptr;
}

std::vector<Bicycle*> BicycleCollection::findBicyclesByRenterId(
    const std::string& renter_id) {
  std::vector<Bicycle*> results;
  for (int i = 0; i < num_bicycles_; ++i) {
    if (bicycles_[i]->getRenterId() == renter_id) {
      results.push_back(bicycles_[i]);
    }
  }
  return results;
}
