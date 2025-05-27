#pragma once

#include <string>
#include "User.h"

class Admin : public User {
 public:
  Admin();  // id, password를 고정값으로 설정
};