#include "SignUpUI.h"

SignUpUI::SignUpUI(std::ifstream& in_fp,
                   std::ofstream& out_fp,
                   SignUp* sign_up)
    : in_fp_(in_fp), out_fp_(out_fp), sign_up_(sign_up) {}

void SignUpUI::signUp() {
  std::string id, password, phone_number;

  // 입력 형식: ID, Password, 전화번호를 파일로부터 읽음
  in_fp_ >> id >> password >> phone_number;

  // 실제 회원 추가
  sign_up_->addNewMember(id, password, phone_number);

  // 출력 형식
  out_fp_ << "1.1. 회원가입\n";
  out_fp_ << "> " << id << " " << password << " " << phone_number << "\n";
  out_fp_ << "\n";
}
