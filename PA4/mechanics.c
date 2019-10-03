/*
	Author: Nathan Brown
	Created: 10/01/2019
	Modified:
	Description: Terminal version of the game Blackjack Dice for 2-5 players. Function definitions.
*/

#include "mechanics.h"

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
void display_menu(void)
{
	int option = 0;
	//Display menu until receiving valid input
	while (option < 1 || option > 4)
	{
		printf("\n~~~~~~ MAIN MENU ~~~~~~\n\n");
		printf("1. Display game rules.\n");
		printf("2. View and adjust starting funds.\n");
		printf("3. Begin game.\n");
		printf("4. Exit.\n");
		printf("Select an option by typing the corresponding number.\n");
		scanf("%d", &option);

		//Run process based on input
		switch (option)
		{
		case RULES:
			game_rules();
			break;
		case FUNDS:
			funds_menu();
			break;
		//Leave switch and while loop to begin playing game
		case PLAY:
			break;
		//Exit program
		case EXIT:
			exit(0);
			break;
		default:
			break;
		}

	}
}
void game_rules(void)
{
	printf("Displaying game rules.\n\n");
	display_menu();
}
void funds_menu(void)
{
	int option = 0;
	while (option < 1 || option > 4)
	{
		printf("\n~~~~~~ FUNDS MENU ~~~~~~\n\n");
		printf("1. View current player funds.\n");
		printf("2. Change default starting funds.\n");
		printf("3. Reset player funds.\n");
		printf("4. Return to main menu.\n");
		printf("Select an option by typing the corresponding number.\n");
		scanf("%d", &option);

		//Run process based on input
		switch (option)
		{
		case VIEW_FUNDS:
			funds_view();
			break;
		case EDIT_DEFAULT:
			funds_def();
			break;
		case RESET_FUNDS:
			funds_reset();
			break;
			//Return to main
		case MAIN:
			display_menu();
			break;
		default:
			break;
		}
	}
}
void funds_view(void)
{
	printf("Displaying individual player funds.\n");
	funds_menu();
}
void funds_reset(void)
{
	printf("Display current funds value and option to reset.\n");
	funds_menu();
}
void funds_def(void)
{
	printf("Display default funds value and option to edit.\n");
	funds_menu();
}
void funds_store(void)
{
	//Save values of current funds to file
	return;
}
void bet_initial(void);
void bet_sub(void);
void bet_check(void);
void turn_flow(int player_num);
int roll_die(void);
void old_money(void);
void bet_return(void);
void winnings(void);
