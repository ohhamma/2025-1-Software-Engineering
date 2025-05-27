#include "Member.h"

Member::Member(const std::string& id, const std::string& password,
               const std::string& phone_number)
    : User(id, password), phone_number_(phone_number) {}