#include "Bicycle.h"

Bicycle::Bicycle(const std::string& id, const std::string& name)
    : id_(id), name_(name), renter_id_("") {}

std::string Bicycle::getId() const {
  return id_;
}

std::string Bicycle::getName() const {
  return name_;
}

std::string Bicycle::getRenterId() const {
  return renter_id_;
}

void Bicycle::setRenterId(const std::string& renter_id) {
  renter_id_ = renter_id;
}
