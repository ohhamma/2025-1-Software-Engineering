#pragma once

#include "Login.h"

class Logout {
 public:
  Logout(Login* login);

  void logoutUser();

 private:
  Login* login_;
};
