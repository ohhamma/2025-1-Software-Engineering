#pragma once

#include <fstream>
#include <string>
#include "SignUp.h"

class SignUpUI {
 public:
  SignUpUI(std::ifstream& in_fp, std::ofstream& out_fp);
  ~SignUpUI();

  void signUp();

 private:
  std::ifstream& in_fp_;
  std::ofstream& out_fp_;
  SignUp* sign_up_;
};
