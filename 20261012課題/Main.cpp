#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"

using namespace std;
int main(void)
{
	//コンストラクタ
	//Character character("ほし");
	//cout << character.GetName() << endl;

	//character.Attack();
	string playerName;
	string enemyName;
	string bossName;
	cout << "名前を入力してください" << endl;
	cout << "勇者:" << endl;
	cin >> playerName;
	cout << "敵:" << endl;
	cin >> enemyName;
	cout << "ボス:" << endl;
	cin >> bossName;

	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	cout << "勇者の名前" << playerName <<endl;
	cout << "敵の名前" << enemyName <<endl;
	cout << "ボスの名前" << bossName <<endl;
	
	player.Attack();
	enemy.Attack();
	boss.Attack();

		return 0;
}