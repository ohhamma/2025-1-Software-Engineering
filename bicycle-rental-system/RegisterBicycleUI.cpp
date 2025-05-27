#include "RegisterBicycleUI.h"

RegisterBicycleUI::RegisterBicycleUI(std::ifstream& in_fp, std::ofstream& out_fp,
                                     RegisterBicycle* register_bicycle)
    : in_fp_(in_fp), out_fp_(out_fp), register_bicycle_(register_bicycle) {}

void RegisterBicycleUI::registerBicycle() {
  std::string id, name;

  // 입력 형식: 자전거 ID, 자전거 제품명을 파일로부터 읽음
  in_fp_ >> id >> name;

  // 로직 호출
  register_bicycle_->addNewBicycle(id, name);

  // 출력 형식
  out_fp_ << "3.1. 자전거 등록\n";
  out_fp_ << "> " << id << " " << name << "\n";
  out_fp_ << "\n";
}
