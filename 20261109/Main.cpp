#include<iostream>
#include<memory>
#include"Enemy.h"

void ShowEnemy(const Enemy& enemy)
{
	std::cout << "ŠÖ”“à‚ÌEnemy‚ð•\Ž¦‚·‚é" << endl;
	enemy.Draw();
}

int main(void)
{
	//unique_ptr‚ÅEnemy‚ð¶¬
	std::unique_ptr<Enemy> enemy;

	std::cout << "¶¬‚µ‚½“G" << std::endl;

	enemy->Draw();

	ShowEnemy(*enemy);

	std::cout << "ŠÖ”‚ðŒÄ‚Ño‚µ‚½Œã" << std::endl;
	enemy->Draw();

	return 0;
}