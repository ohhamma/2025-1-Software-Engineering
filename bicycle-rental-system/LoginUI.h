#pragma once

#include <fstream>
#include <string>
#include "Login.h"

class LoginUI {
 public:
  LoginUI(std::ifstream& in_fp, std::ofstream& out_fp, Login* login);

  void login();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  Login* login_;
};
