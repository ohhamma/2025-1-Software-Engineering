#include "RegisterBicycle.h"

RegisterBicycle::RegisterBicycle(BicycleCollection* bicycle_collection)
    : bicycle_collection_(bicycle_collection) {}

void RegisterBicycle::addNewBicycle(const std::string& id,
                                    const std::string& name) {
  bicycle_collection_->addBicycle(id, name);
}