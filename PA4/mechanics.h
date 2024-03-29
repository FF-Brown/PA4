/*
	Author: Nathan Brown
	Created: 10/01/2019
	Modified:
	Description: Terminal version of the game Blackjack Dice for 2-5 players. Function declarations.
*/

#define RULES 1
#define FUNDS 2
#define PLAY 3
#define EXIT 4
#define VIEW_FUNDS 1
#define EDIT_DEFAULT 2
#define RESET_FUNDS 3
#define MAIN 4
#define DEFAULT_FUNDS 500
#define PLAYER1 1
#define PLAYER2 2
#define PLAYER3 3
#define PLAYER4 4
#define PLAYER5 5


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void display_menu(void);
void game_rules(void);
void funds_menu(void);
void funds_view(void);
void funds_reset(void);
void funds_def(void);
void funds_store(void);
int bet_initial(void);
int bet_sub(void);
bool bet_check(int current_bet, int player_funds);
void turn_flow(int player_number, int player_funds, int* bets, int* rolls, int* funds);
int roll_die(void);
void old_money(void);
double bet_return(int winning_bet);
int winnings(int winning_bet, double multiplier);
int game_intro(void);
int max_roll(int roll_sum1, int roll_sum2, int roll_sum3, int roll_sum4, int roll_sum5);
bool tie_finder(int roll_sum1, int roll_sum2, int roll_sum3, int roll_sum4, int roll_sum5);
