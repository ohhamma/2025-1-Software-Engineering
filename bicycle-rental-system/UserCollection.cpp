#include "UserCollection.h"
#include "Member.h"

UserCollection::UserCollection() : num_users_(0) {}

UserCollection::~UserCollection() {
  for (int i = 0; i < num_users_; ++i) {
    delete users_[i];
  }
}

void UserCollection::addMember(const std::string& id,
                               const std::string& password,
                               const std::string& phone) {
  if (num_users_ < 10) {
    users_[num_users_++] = new Member(id, password, phone);
  }
}

User* UserCollection::findUserById(const std::string& id) const {
  for (int i = 0; i < num_users_; ++i) {
    if (users_[i]->getId() == id) {
      return users_[i];
    }
  }
  return nullptr;
}
