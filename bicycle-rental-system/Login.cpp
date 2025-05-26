#include "Login.h"
#include <iostream>

Login::Login(UserCollection* user_collection)
    : user_collection_(user_collection) {}

User* Login::loginUser(const std::string& id,
                       const std::string& password) {
  User* user = user_collection_->findUserById(id);

  if (user == nullptr) {
    return nullptr;
  }

  if (!user->checkPassword(password)) {
    return nullptr;
  }

  return user;  // 로그인 성공
}
