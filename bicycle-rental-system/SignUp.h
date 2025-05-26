#pragma once

#include <string>
#include "UserCollection.h"

class SignUp {
 public:
  SignUp();
  ~SignUp();

  void AddNewMember(const std::string& id,
                    const std::string& password,
                    const std::string& phone_number);

 private:
  UserCollection* user_collection_;
};