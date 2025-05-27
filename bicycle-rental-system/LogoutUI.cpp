#include "LogoutUI.h"

LogoutUI::LogoutUI(std::ifstream& in_fp, std::ofstream& out_fp,
                   Logout* logout, Login* login)
    : in_fp_(in_fp), out_fp_(out_fp), logout_(logout), login_(login) {}

void LogoutUI::logout() {
  // 현재 로그인되어 있는 사용자 조회
  User* user = login_->getCurrentUser();

  // 로그아웃
  logout_->logoutUser();

  // 출력 형식
  if (user != nullptr) {
    out_fp_ << "2.2. 로그아웃\n";
    out_fp_ << "> " << user->getId() << "\n";
    out_fp_ << "\n";
  }
}
