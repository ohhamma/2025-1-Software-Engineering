#include "Logout.h"

Logout::Logout(Login* login) : login_(login) {}

void Logout::logoutUser() {
  if (login_->getCurrentUser() != nullptr) {
    login_->removeCurrentUser();
  }
}
