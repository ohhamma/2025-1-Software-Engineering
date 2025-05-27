#include <iostream>
#include <fstream>
#include <string>

#include "UserCollection.h"
#include "BicycleCollection.h"

#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBicycle.h"
#include "RentBicycle.h"
#include "ViewRentalInfo.h"
#include "ShutDown.h"

#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentBicycleUI.h"
#include "ViewRentalInfoUI.h"
#include "ShutDownUI.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

int main() {
  // 파일 입출력을 위한 초기화
  std::ifstream in_fp(INPUT_FILE_NAME);
  std::ofstream out_fp(OUTPUT_FILE_NAME);

  // collection(entity)
  UserCollection* user_collection = new UserCollection();
  BicycleCollection* bicycle_collection = new BicycleCollection();

  // control
  SignUp* sign_up = new SignUp(user_collection);
  Login* login = new Login(user_collection);
  Logout* logout = new Logout(login);
  RegisterBicycle* register_bicycle = new RegisterBicycle(bicycle_collection);
  RentBicycle* rent_bicycle = new RentBicycle(bicycle_collection);
  ViewRentalInfo* view_rental_info = new ViewRentalInfo(bicycle_collection);
  ShutDown* shut_down = new ShutDown();

  // boundary
  SignUpUI* sign_up_ui = new SignUpUI(in_fp, out_fp, sign_up);
  LoginUI* login_ui = new LoginUI(in_fp, out_fp, login);
  LogoutUI* logout_ui = new LogoutUI(in_fp, out_fp, logout, login);
  RegisterBicycleUI* register_bicycle_ui = new RegisterBicycleUI(in_fp, out_fp, register_bicycle);
  RentBicycleUI* rent_bicycle_ui = new RentBicycleUI(in_fp, out_fp, rent_bicycle, login);
  ViewRentalInfoUI* view_rental_info_ui = new ViewRentalInfoUI(in_fp, out_fp, view_rental_info, login);
  ShutDownUI* shut_down_ui = new ShutDownUI(in_fp, out_fp, shut_down);

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
            sign_up_ui->signUp();
            break;
        }
        break;

      case 2:
        switch (menu_level_2) {
          case 1:
            // 2.1. 로그인
            login_ui->login();
            break;
          case 2:
            // 2.2. 로그아웃
            logout_ui->logout();
            break;
        }
        break;

      case 3:
        switch (menu_level_2) {
          case 1:
            // 3.1. 자전거 등록
            register_bicycle_ui->registerBicycle();
            break;
        }
        break;

      case 4:
        switch (menu_level_2) {
          case 1:
            // 4.1. 자전거 대여
            rent_bicycle_ui->rentBicycle();
            break;
        }
        break;

      case 5:
        switch (menu_level_2) {
          case 1:
            // 5.1. 자전거 대여 리스트
            view_rental_info_ui->viewRentalInfo();
            break;
        }
        break;

      case 6:
        switch (menu_level_2) {
          case 1:
            // 6.1. 종료
            shut_down_ui->shutDown();
            is_program_exit = true;
            break;
        }
        break;
    }
  }


  // 파일 닫기
  in_fp.close();
  out_fp.close();

  // 메모리 해제
  delete sign_up_ui;
  delete login_ui;
  delete logout_ui;
  delete register_bicycle_ui;
  delete rent_bicycle_ui;
  delete view_rental_info_ui;
  delete shut_down_ui;

  delete sign_up;
  delete login;
  delete logout;
  delete register_bicycle;
  delete rent_bicycle;
  delete view_rental_info;
  delete shut_down;

  delete user_collection;
  delete bicycle_collection;

  return 0;
}