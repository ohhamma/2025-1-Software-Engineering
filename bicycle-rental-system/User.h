#pragma once

#include <string>

class User {
 public:
  User(const std::string& id, const std::string& password);

  std::string getId() const;
  bool checkPassword(const std::string& password) const;

 private:
  std::string id_;
  std::string password_;
};