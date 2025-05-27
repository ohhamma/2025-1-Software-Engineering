#include "Logout.h"

Logout::Logout(Login* login) : login_(login) {}

void Logout::logoutUser() {
  login_->removeCurrentUser();
}
