#include "SignUp.h"
#include "Member.h"

SignUp::SignUp(UserCollection* user_collection)
    : user_collection_(user_collection) {}

void SignUp::addNewMember(const std::string& id,
                          const std::string& password,
                          const std::string& phone_number) {
  user_collection_->addMember(id, password, phone_number);
}
