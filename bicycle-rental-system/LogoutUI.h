#pragma once

#include <fstream>
#include "Login.h"
#include "Logout.h"

class LogoutUI {
 public:
  LogoutUI(std::ifstream& in_fp, std::ofstream& out_fp,
           Logout* logout, Login* login);

  void logout();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  Logout* logout_;
  Login* login_;
};
