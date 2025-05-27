#include "RentBicycle.h"

RentBicycle::RentBicycle(BicycleCollection* bicycle_collection)
    : bicycle_collection_(bicycle_collection) {}


void RentBicycle::rentBicycle(const std::string& id, User* user) {
  Bicycle* bicycle = bicycle_collection_->findBicycleById(id);
  
  if (bicycle != nullptr) {
    std::string renter_id = user->getId();
    bicycle->setRenterId(renter_id);
  }
}
