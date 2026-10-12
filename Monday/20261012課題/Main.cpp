#include<iostream>
#include"Character.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("ほし");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}