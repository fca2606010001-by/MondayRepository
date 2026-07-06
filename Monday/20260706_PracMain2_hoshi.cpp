#include "20260706_HeaderMain2_hoshi.h"
/*
ゲーム概要：

CPUとじゃんけんを行います。
じゃんけんに勝利すると経験値を獲得します。

経験値が一定値に達するとレベルアップします。

レベル5になるとゲームクリアです。

CPUとじゃんけんを行いましょう。

出す手の選択は、「ぐー：0」「ちょき：1」「ぱー：2」とします。

勝つと経験値が獲得でき、閾値を越えるとレベルが上がっていきます。

経験値は1〜15までランダムで取得できます。

閾値は20以上です。
*/

int main()
{
    srand((unsigned)time(NULL));

    int level = 1;
    int exp = 0;
    int player;
    int cpu;
    int result;

    string handName[3] = { "グー", "チョキ", "パー" };

    while (level < 5)
    {
        cout << "====================" << endl;
        cout << "Lv：" << level << endl;
        cout << "EXP：" << exp << endl;
        cout << "====================" << endl;

        // 入力チェック
        while (true)
        {
            cout << "0：グー 1：チョキ 2：パー" << endl;
            cout << "入力：";

            cin >> player;

            // 数字以外が入力された場合
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "数字を入力してください。" << endl;
                continue;
            }

            // 0～2以外
            if (player < 0 || player > 2)
            {
                cout << "0～2を入力してください。" << endl;
                continue;
            }

            break;
        }

        cpu = cpuHand();

        cout << "CPU：" << handName[cpu] << endl;

        result = judge(player, cpu);

        if (result == 1)
        {
            cout << "あなたの勝ち！" << endl;

            int addExp = getExp();

            cout << "経験値を" << addExp << "獲得しました！" << endl;

            exp += addExp;

            // レベルアップ処理
            while (exp >= 20 && level < 5)
            {
                exp -= 20;
                level++;

                if (level < 5)
                {
                    cout << "レベルアップ！ Lv" << level << "になりました！" << endl;
                }
            }

            if (level < 5)
            {
                cout << "現在EXP：" << exp << endl;
            }
        }
        else if (result == 0)
        {
            cout << "あいこです！" << endl;
        }
        else
        {
            cout << "あなたの負け！" << endl;
        }

        cout << endl;
    }

    cout << "====================" << endl;
    cout << "Lv5到達！" << endl;
    cout << "ゲームクリア！！" << endl;
    cout << "====================" << endl;

    return 0;
}