#include "Login.h"
#include <iostream>

Login::Login(UserCollection* user_collection)
    : user_collection_(user_collection) {}

void Login::loginUser(const std::string& id,
                      const std::string& password) {
  User* user = user_collection_->findUserById(id);

  if (user == nullptr) {
    std::cout << "로그인 실패: 아이디가 존재하지 않습니다.\n";
    return;
  }

  if (!user->checkPassword(password)) {
    std::cout << "로그인 실패: 비밀번호가 틀렸습니다.\n";
    return;
  }
}
