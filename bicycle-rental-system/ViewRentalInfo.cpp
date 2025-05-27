#include "ViewRentalInfo.h"

ViewRentalInfo::ViewRentalInfo(BicycleCollection* bicycle_collection)
    : bicycle_collection_(bicycle_collection) {}

std::vector<Bicycle*> ViewRentalInfo::listRentedBicycles(User* user) {
  std::string renter_id = user->getId();
  return bicycle_collection_->findBicyclesByRenterId(renter_id);
}
