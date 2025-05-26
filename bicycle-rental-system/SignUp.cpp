#include "SignUp.h"
#include "Member.h"

SignUp::SignUp() {
  user_collection_ = new UserCollection();
}

SignUp::~SignUp() {
  delete user_collection_;
}

void SignUp::addNewMember(const std::string& id,
                          const std::string& password,
                          const std::string& phone_number) {
  user_collection_->AddMember(id, password, phone_number);
}
