#include"20260706_HeaderMain2_hoshi.h"

// CPU‚Ìè‚ğŒˆ’è
int cpuHand()
{
    return rand() % 3;
}

// Ÿ”s”»’è
// 1:Ÿ‚¿ 0:‚ ‚¢‚± -1:•‰‚¯
int judge(int player, int cpu)
{
    if (player == cpu)
    {
        return 0;
    }

	if (player - cpu == 1 || player - cpu == -2)
    {
        return -1;
    }

    return 1;
}

// ŒoŒ±’læ“¾
int getExp()
{
    return rand() % 15 + 1;
}