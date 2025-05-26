#pragma once

#include <string>
#include "UserCollection.h"

class Login {
 public:
  Login(UserCollection* user_collection);

  void loginUser(const std::string& id,
                  const std::string& password);

  User* getCurrentUser() const;
  
  void removeCurrentUser();

 private:
  UserCollection* user_collection_;
  User* current_user_;
};