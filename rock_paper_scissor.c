#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int userScore = 0;
int compScore = 0;
void checkOptions(int user,int comp)
{
	//1- scissors, 2- paper, 3- rock
	if(user == comp)
	{
		printf(" --------------------\n");
		printf("|    Its a tie       |\n");
		printf(" --------------------\n");
	}

	else if(user == 1)
	{
		if(comp == 2)
		{
			printf(" --------------------\n");
			printf("|      You Won :)    |\n");
			printf("| You : Scissor      |\n");
			printf("| Computer : Paper   |\n");
			printf(" --------------------\n");
			userScore++;
		}
		else 
		{
			printf(" --------------------\n");
			printf("|     You Lose :(    |\n");
			printf("| You : Scissor      |\n");
			printf("| Computer : Rock    |\n");
			printf(" --------------------\n");
			compScore++;
		}
	}

	else if(user == 2)
	{
		if(comp == 1)
		{
			printf(" --------------------\n");
			printf("|      You Lose :(   |\n");
			printf("| You : Paper        |\n");
			printf("| Computer : Scissor |\n");
			printf(" --------------------\n");
		    compScore++;
		}
		else 
		{
			printf(" --------------------\n");
			printf("|     You Won :)     |\n");
			printf("| You : Paper        |\n");
			printf("| Computer : Rock    |\n");
			printf(" --------------------\n");
			userScore++;
		}
	}

	else if(user == 3)
	{
		if(comp == 1)
		{
			printf(" --------------------\n");
			printf("|      You Won :)    |\n");
			printf("| You : Rock        |\n");
			printf("| Computer : Scissor |\n");
			printf(" --------------------\n");
			userScore++;
		}
		else 
		{
			printf(" --------------------\n");
			printf("|     You Lose :(    |\n");
			printf("| You : Rock         |\n");
			printf("| Computer : Paper    |\n");
			printf(" --------------------\n");
			compScore++;
		}
	}

	else if(user == 4)
	{
		printf(" --------------------\n");
		if(userScore > compScore)
		printf("|      You Won :)    |\n");
		else if (userScore < compScore)
		printf("|     You Lose :(    |\n");
		else 
		printf("|      Its a tie     |\n");

		printf("|     Final Score    |\n");
		printf("| You : %d            |\n",userScore);
		printf("| Computer: %d        |\n",compScore);
		printf(" --------------------\n");
		printf("\a");
	}

	else 
	{
		printf("\n Invalid Option");
	}

}
int main()
{
    int userChoice;
    int compChoice;

    char name[20];
    printf("Player Name: ");
    gets(name);
	
    srand(time(0));                      //take current time as seed value and generate different sequence of random nos. each time 

    printf("\t\t\t\t==========*Welcome to Rock, Paper & Scissors Game*==========");
    while(userChoice != 4)
	{
        printf("\nPlease select the option: ");
        printf("\n1.Scissor");
        printf("\n2.Paper");
        printf("\n3.Rock");
        printf("\n4.Quit\n");
        scanf("%d",&userChoice);

        compChoice = (rand() % 3) + 1;              //as compChoice can be from 1,2,3
        checkOptions(userChoice,compChoice);
    }
}


