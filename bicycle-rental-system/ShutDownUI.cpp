#include "ShutDownUI.h"

ShutDownUI::ShutDownUI(std::ifstream& in_fp,
                       std::ofstream& out_fp,
                       ShutDown* shut_down)
    : in_fp_(in_fp), out_fp_(out_fp), shut_down_(shut_down) {}

void ShutDownUI::shutDown() {
  // 시스템 종료
  shut_down_->shutDownSystem();

  // 출력 형식
  out_fp_ << "6.1. 종료\n";
}
