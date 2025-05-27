#include "User.h"

User::User(const std::string& id, const std::string& password)
    : id_(id), password_(password) {}

std::string User::getId() const {
  return id_;
}

bool User::checkPassword(const std::string& password) const {
  return password_ == password;
}