/*
	Author: Nathan Brown
	Created: 10/01/2019
	Modified:
	Description: Terminal version of the game Blackjack Dice for 2-5 players. Fuction declarations.
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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
	Function: display_menu()
	Date Created: 10/01/2019
	Last Modified:
	Description: Displays game menu. Redisplays until receiving valid input. Calls other functions based on input. May remove switch and place in main. Haven't decided yet.
	Input parameters: None
	Returns: None
	Preconditions: None
	Postconditions: Secondary menu displayed, playing game, or exited program.
*/
void display_menu(void);
void game_rules(void);
void funds_menu(void);
void funds_view(void);
void funds_reset(void);
void funds_def(void);
void funds_store(void);
void bet_initial(void);
void bet_sub(void);
void bet_check(void);
void turn_flow(int player_num);
int roll_die(void);
void old_money(void);
void bet_return(void);
void winnings(void);
