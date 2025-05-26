#include "SignUpUI.h"

SignUpUI::SignUpUI(std::ifstream& in_fp, std::ofstream& out_fp)
    : in_fp_(in_fp), out_fp_(out_fp) {
  sign_up_ = new SignUp();
}

SignUpUI::~SignUpUI() {
  delete sign_up_;
}

void SignUpUI::signUp() {
  std::string id, password, phone_number;

  // 입력 형식: ID, Password, 전화번호를 파일로부터 읽음
  in_fp_ >> id >> password >> phone_number;

  // 실제 회원 추가
  sign_up_->AddNewMember(id, password, phone_number);

  // 출력 형식
  out_fp_ << "1.1. 회원가입\n";
  out_fp_ << "> " << id << " " << password << " " << phone_number << "\n";
}
