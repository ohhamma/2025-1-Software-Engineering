#pragma once

#include <string>
#include "User.h"

class Member : public User {
 public:
  Member(const std::string& id, const std::string& password,
         const std::string& phone_number);

 private:
  std::string phone_number_;
};