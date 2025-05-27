#pragma once

#include <string>
#include "UserCollection.h"

class SignUp {
 public:
  SignUp(UserCollection* user_collection);

  void addNewMember(const std::string& id,
                    const std::string& password,
                    const std::string& phone_number);

 private:
  UserCollection* user_collection_;
};