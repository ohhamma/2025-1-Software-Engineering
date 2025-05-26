#pragma once

#include <string>
#include "User.h"

class UserCollection {
 public:
  UserCollection();
  ~UserCollection();  // 동적 메모리 해제를 위한 소멸자

  void AddMember(const std::string& id,
                 const std::string& password,
                 const std::string& phone);

  User* FindUserById(const std::string& id) const;

 private:
  User* users_[10];
  int num_users_;
};