#include "LoginUI.h"

LoginUI::LoginUI(std::ifstream& in_fp, std::ofstream& out_fp, Login* login)
    : in_fp_(in_fp), out_fp_(out_fp), login_(login) {}

void LoginUI::login() {
  std::string id, password;

  // 입력 형식: ID와 Password를 파일로부터 읽음
  in_fp_ >> id >> password;

  // 로그인 시도
  login_->loginUser(id, password);

  // 출력 형식
  if (login_->getCurrentUser() != nullptr) {
    out_fp_ << "2.1. 로그인\n";
    out_fp_ << "> " << id << " " << password << "\n";
    out_fp_ << "\n";
  }
}
