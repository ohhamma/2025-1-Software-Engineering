#include "User.h"

User::User(const std::string& id, const std::string& password)
    : id_(id), password_(password) {}

std::string User::GetId() const {
  return id_;
}

bool User::CheckPassword(const std::string& password) const {
  return password_ == password;
}