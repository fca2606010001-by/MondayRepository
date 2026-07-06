#include<iostream>
#include"20260706_Header1_hoshi.h"

using namespace std;

int main()
{
    //関数
    int hp = 100;
    int select;
    cout << "現在のHP：" << hp << endl;
    cout << "回復しますか？" << endl;
    cout << "Yes：1  No：2" << endl;
    cin >> select;
    //入力チェック
    if (select == 1)
    {
        Heal(hp);
    }
    else if (select == 2)
    {
        cout << "回復しませんでした。" << endl;
    }
    else
    {
        cout << "無効な入力です。" << endl;
    }

    cout << "現在のHP：" << hp << endl;

    return 0;
}