#pragma once

#include <string>

class Bicycle {
 public:
  Bicycle(const std::string& id, const std::string& name);

  std::string getId() const;
  std::string getName() const;
  std::string getRenterId() const;
  void setRenterId(const std::string& renter_id);

 private:
  std::string id_;
  std::string name_;
  std::string renter_id_;
};
