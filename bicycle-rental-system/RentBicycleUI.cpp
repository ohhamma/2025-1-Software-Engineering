#include "RentBicycleUI.h"

RentBicycleUI::RentBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp,
                             Login* login, RentBicycle* rent_bicycle)
    : in_fp_(in_fp), out_fp_(out_fp),
      login_(login), rent_bicycle_(rent_bicycle) {}

void RentBicycleUI::rentBicycle() {
  std::string id;

  // 입력 형식: 자전거 ID를 파일로부터 읽음
  in_fp_ >> id;

  // 현재 로그인되어 있는 사용자 조회
  User* current_user = login_->getCurrentUser();

  if (current_user != nullptr) {
    // 자전거 대여
    Bicycle *bicycle = rent_bicycle_->rentBicycle(id, current_user);

    // 출력 형식
    out_fp_ << "4.1. 자전거 대여\n";
    out_fp_ << "> " << bicycle->getId() << " " << bicycle->getName() << "\n";
    out_fp_ << "\n";
  }
}
