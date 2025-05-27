#include "UserCollection.h"
#include "Member.h"
#include "Admin.h"

UserCollection::UserCollection() : num_users_(0) {
  users_[num_users_++] = new Admin();  // 기본 관리자 계정 추가
}

UserCollection::~UserCollection() {
  for (int i = 0; i < num_users_; ++i) {
    delete users_[i];
  }
}

void UserCollection::addMember(const std::string& id,
                               const std::string& password,
                               const std::string& phone_number) {
  if (num_users_ < 10) {
    users_[num_users_++] = new Member(id, password, phone_number);
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
