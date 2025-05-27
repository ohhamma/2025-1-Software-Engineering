#include "ViewRentalInfoUI.h"

ViewRentalInfoUI::ViewRentalInfoUI(std::ifstream& in_fp,
                                   std::ofstream& out_fp,
                                   ViewRentalInfo* view_rental_info,
                                   Login* login)
    : in_fp_(in_fp),
      out_fp_(out_fp),
      view_rental_info_(view_rental_info),
      login_(login) {}

void ViewRentalInfoUI::viewRentalInfo() {
  // 현재 로그인되어 있는 사용자 조회
  User* current_user = login_->getCurrentUser();

  if (current_user != nullptr) {
    // 자전거 대여 정보 조회
    std::vector<Bicycle*> bicycles =
      view_rental_info_->listRentedBicycles(current_user);

    // 출력 형식
    out_fp_ << "5.1. 자전거 대여 리스트\n";
    for (const auto* bicycle : bicycles) {
      out_fp_ << "> " << bicycle->getId() << " " << bicycle->getName() << "\n";
    }
    out_fp_ << "\n";
  }
}
