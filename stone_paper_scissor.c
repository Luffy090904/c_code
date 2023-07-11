#include<stdio.h>
#include<time.h>

int GenrateRandomNum(int n) {
	srand(time(NULL));
	return rand() % n;
} 

int greater(computer,player) 
{
	if(computer==player) 
	{
		return -1;
	} 
	else if((computer='r') && (player='s')) 
	{
		return 1;
	} 
	else if((computer='s') && (player='r')) 
	{
		return 0;
	} 
	else if((computer='p') && (player='r')) 
	{
		return 1;
	} 
	else if((computer='r') && (player='p')) 
	{
		return 0;
	} 
	else if((computer='s') && (player='p')) 
	{
		return 1;
	} 
	else if((computer='p') && (player='s')) 
	{
		return 0;
	}
}

int main() {
	int playerScore=0,compScore=0,temp,i;
	char playerChar,compChar;
	char game[]= {'r','p','s'};

	printf("\t\tWELCOME TO THE GAME\n");
	printf("--------------------------------------------------\n\n");

	for(i=0; i<3; i++) {
		printf("Player's turn :  \n");
		printf("Choose 1 for Rock , 2 for Paper & 3 for scissor\n");
		scanf("%d",&temp);
		getchar();
		playerChar=game[temp-1];
		printf("you chose : %c\n",playerChar);

		printf("Computer's turn :  \n");
		printf("Choose 1 for Rock , 2 for Paper & 3 for scissor\n");
		temp = GenrateRandomNum(3)+1;
		compChar=game[temp-1];
		printf("Computer chose : %c\n",compChar);

		if(greater(compChar,playerChar) == 0) 
		{
			playerScore+=1;
			printf("you win\n");
		} 
		else if(greater(compChar,playerChar) == -1) 
		{
			compScore+=1;
			playerScore+=1;
			printf("draw\n");
		} 
		else if(greater(compChar,playerChar) == 1)
		{
			compScore+=1;
			printf("computer win\n");
		}

		printf("YOU : %d\nCOMPUTER : %d\n\n",playerScore,compScore);
	}

	printf("___________________________________\n");

	if(playerScore>compScore) {
	printf("          | YOU WIN! |\n");
	} else if(playerScore<compScore) {
	printf("         | YOU LOOSE! |\n");
	} else {
	printf("         | IT'S DRAW! |\n");
	}

	return 0;
}
