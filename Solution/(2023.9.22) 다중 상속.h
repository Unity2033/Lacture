#pragma once
#include <iostream>
#include "Computer.h"
#include "Player.h"
#include "Bank.h"
using namespace std;


int main()
{
#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것입니다.

	/*
	Computer computer;
	computer.Use();
	*/
#pragma endregion

#pragma region Friend 
	// Friend로 선언된 클래스의 private 및 proetected 멤버에
	// 접근할 수 있도록 설정해주는 기능입니다.

	Player player;
	player.ShowInfo();

	Bank bank;
	bank.Withdrawal(player, 15000);

	bank.ShowInfo();
	player.ShowInfo();

#pragma endregion

	return 0;
}