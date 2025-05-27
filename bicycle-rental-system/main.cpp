#include <iostream>
#include <fstream>
#include <string>

#include "UserCollection.h"
#include "BicycleCollection.h"

#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBicycle.h"

#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main() {
  // 파일 입출력을 위한 초기화
  std::ifstream in_fp(INPUT_FILE_NAME);
  std::ofstream out_fp(OUTPUT_FILE_NAME);

  // collection(entity) 객체 생성
  UserCollection user_collection;
  BicycleCollection bicycle_collection;

  // control 객체 생성
  SignUp sign_up(&user_collection);
  Login login(&user_collection);
  Logout logout(&login);
  RegisterBicycle register_bicycle(&bicycle_collection);

  // boundary 객체 생성
  SignUpUI sign_up_ui(in_fp, out_fp, &sign_up);
  LoginUI login_ui(in_fp, out_fp, &login);
  LogoutUI logout_ui(in_fp, out_fp, &login, &logout);
  RegisterBicycleUI register_bicycle_ui(in_fp, out_fp, &register_bicycle);

  // 메뉴 입력값 초기화
  int menu_level_1 = 0;
  int menu_level_2 = 0;
  bool is_program_exit = false;

  // 시스템 종료되기 전까지 실행
  while (!is_program_exit) {
    in_fp >> menu_level_1 >> menu_level_2;

    switch (menu_level_1) {
      case 1:
        switch (menu_level_2) {
          case 1:
            // 1.1. 회원가입
            sign_up_ui.signUp();
            break;
        }
        break;

      case 2:
        switch (menu_level_2) {
          case 1:
            // 2.1. 로그인
            login_ui.login();
            break;
          case 2:
            // 2.2. 로그아웃
            logout_ui.logout();
            break;
        }
        break;

      case 3:
        switch (menu_level_2) {
          case 1:
            // 3.1. 자전거 등록
            register_bicycle_ui.registerBicycle();
            break;
        }
        break;

      case 4:
        switch (menu_level_2) {
          case 1:
            // 4.1. 자전거 대여
            break;
        }
        break;

      case 5:
        switch (menu_level_2) {
          case 1:
            // 5.1. 자전거 대여 리스트
            break;
        }
        break;

      case 6:
        switch (menu_level_2) {
          case 1:
            // 6.1. 종료
            is_program_exit = true;
            break;
        }
        break;
    }
  }

  // 파일 닫기
  in_fp.close();
  out_fp.close();

  return 0;
}