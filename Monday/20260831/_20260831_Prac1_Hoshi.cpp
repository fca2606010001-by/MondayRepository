//添付しているファイルは銀行口座をクラス化したものです。
//こちらに日本語でコメントを追記してください。

//また、ヘッダーファイルとソースファイルに分けてください。

#include <iostream>
#include"_20260831_Prac1_Hoshi.h"
using namespace std;

// コンストラクタ
BankAccount::BankAccount(const string& holder, double initialBalance)
{
    accountHolder = holder;
    balance = initialBalance;
}

// お金を入金する
void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << "入金しました。\n";
    }
    else
    {
        cout << "入金できませんでした。\n";
    }
}

// お金を出金する
void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "出金しました。\n";
    }
    else
    {
        cout << "出金できませんでした。\n";
    }
}

// 現在の残高を取得する
double BankAccount::getBalance() const
{
    return balance;
}

// 口座情報を表示する
void BankAccount::displayAccountInfo() const
{
    cout << "口座名義人：" << accountHolder << "\n";
    cout << "現在の残高：" << balance << "円\n";
}

