/*
	Author: Nathan Brown
	Created: 10/01/2019
	Modified:
	Description: Terminal version of the game Blackjack Dice for 2-5 players.
*/

#include "mechanics.h"

int main(void)
{
	int player_count = 0;
	int die_roll = 0;
	int bet_p1 = 0, bet_p2 = 0, bet_p3 = 0, bet_p4 = 0, bet_p5 = 0;
	char cont = 'y';
	int funds[5] = { DEFAULT_FUNDS, DEFAULT_FUNDS, DEFAULT_FUNDS, DEFAULT_FUNDS, DEFAULT_FUNDS };
	int bets[5] = { 0, 0, 0, 0, 0 };
	int rolls[5] = { 0, 0, 0, 0, 0 };
	int winner[5] = { 0, 0, 0, 0, 0 };
	int winners = 0;
	double multiplier[5] = { 0, 0, 0, 0, 0 };
	int max = 0;

	srand(time(NULL));
	display_menu();
	player_count = game_intro();

	for (int i = PLAYER1; i <= player_count; i++)
	{
		turn_flow(i, funds[i - 1], &bets[i - 1], &rolls[i - 1], &funds[i - 1]);
	}

	//At this point, game is over.

	//Find max value rolled by any player
	max = max_roll(rolls); 
	//Assign bet multipliers according to whether the player rolled the highest number (not concerned with ties here)
	for (int i = 0; i < 5; i++)
	{
		if (rolls[i] != max)
			multiplier[i] = 0;
		else if (rolls[i] == 21)
		{
			multiplier[i] = 2;
			winners++;
		}
		else if (rolls[i] == max)
		{
			multiplier[i] = 1.5;
			winners++;
		}
	}

	//If tie, change multipliers of winners to 1
	if (winners > 1)
	{
		for (int i = 0; i < 5; i++)
		{
			if (multiplier[i] > 0)
				multiplier[i] = 1;
		}
	}
	//printf("Player 1 bet total: %d\n", bets[0]);
	//printf("Player 1 roll sum: %d\n", rolls[0]);
	//printf("Player 1 funds: %d\n\n", funds[0]);

	//printf("Player 2 bet total: %d\n", bets[1]);
	//printf("Player 2 roll sum: %d\n", rolls[1]);
	//printf("Player 2 funds: %d\n\n", funds[1]);

	return 0;
}