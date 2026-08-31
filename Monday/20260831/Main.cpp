#include <iostream>
#include "_20260831_Prac1_Hoshi.h"
using namespace std;

int main(void)
{
    // コンストラクタ
    BankAccount account("Alice", 5000.0);

    // 口座情報を表示する
    account.displayAccountInfo();

    // 1000円を入金する
    account.deposit(1000.0);

    // 2000円を出金する
    account.withdraw(2000.0);

    // 残高を表示する
    cout << "残高：" << account.getBalance() << "円\n";

    // 5000円を出金する
    // 残高不足のため出金できない
    account.withdraw(5000.0);

    // 最後の残高を表示する
    cout << "最終残高：" << account.getBalance() << "円\n";

    return 0;
}


