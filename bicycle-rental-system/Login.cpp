#include "Login.h"
#include <iostream>

Login::Login(UserCollection* user_collection)
    : user_collection_(user_collection) {}

void Login::loginUser(const std::string& id,
                      const std::string& password) {
  User* user = user_collection_->findUserById(id);
  if (user != nullptr && user->checkPassword(password)) {
    current_user_ = user;
  } else {
    current_user_ = nullptr;  // 로그인 실패 시 nullptr로 초기화
  }
}

User* Login::getCurrentUser() const {
  return current_user_;
}

void Login::removeCurrentUser() {
  current_user_ = nullptr;
}
