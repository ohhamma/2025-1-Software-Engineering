#include "RentBicycle.h"

RentBicycle::RentBicycle(BicycleCollection* bicycle_collection)
    : bicycle_collection_(bicycle_collection) {}


Bicycle* RentBicycle::rentBicycle(const std::string& bicycle_id, User* user) {
  Bicycle* bicycle = bicycle_collection_->findBicycleById(bicycle_id);
  if (bicycle == nullptr) {
    return nullptr;  // 자전거를 찾지 못한 경우
  }

  bicycle->setRenterId(user->getId());
  return bicycle;
}
