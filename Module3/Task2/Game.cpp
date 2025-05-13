#include <cmath>
#include <iostream>

int GetNumberForPlayer(int Player)
{
	int start = 1;
	int end = 5;
	int random = ((rand() % (end - start + 1) + start) * (Player / fabs(Player))) * (-1);
	return random;
};


void InitiateGame(int turns)
{
    srand(time(0));
    int CountPlayer1 = 0;
    int CountPlayer2 = 0;
    int Player1 = 1;
    int Player2 = 1;

    if (turns <= 0)
    {
        std::cout << "Turn should be bigger then 0 "  << std::endl;
        return;
    }

    for (int i = 0; i < turns; i++)
    {
        Player1 = GetNumberForPlayer(Player1);
        Player2 = GetNumberForPlayer(Player2);
        CountPlayer1 += Player1;
        CountPlayer2 += Player2;
        std::cout << "Turn = " << i+1 << std::endl;
        std::cout << "Player 1 Count=" << CountPlayer1 << " Changed by " << Player1 << std::endl;
        std::cout << "Player 2 Count=" << CountPlayer2 << " Changed by " << Player2 << std::endl;

        if (CountPlayer1 >= 50)
        {
            std::cout << "Player 1 win" << std::endl;
            break;
        }
        else if (CountPlayer2 >= 50)
        {
            std::cout << "Player 2 win" << std::endl;
            break;
        }

        std::cout << std::endl;

        if (i == 99)
        {
            std::cout << "Draw" << std::endl;
        }
    }
    return;
};