#include "Enemy.h"
#include<iostream>

//コンストラクタ
Enemy::Enemy() 
{
	std::cout  << "出現しました。\n";
}

//デストラクタ
Enemy::~Enemy()
{
	std::cout  << "破棄しました。。\n";
}

//HPを取得
int Enemy::GetHp() const
{
	return hp;
}

void Enemy::Draw() const
{
	std::cout << "HP:" << hp << std::endl;
}