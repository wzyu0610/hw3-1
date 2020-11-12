#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum status { CONTINUE, WON, LOST };
int rollDice(void);

int main(void)
{
	int sum;
	int myPoint;

	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;

	}

	while (gameStatus == CONTINUE)
	{
		sum = rollDice();

		if (sum == myPoint)
		{
			gameStatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			}
		}
	}
	if (gameStatus == WON)
	{
		printf("player wins\n");
	}
	else
	{
		printf("player loses\n");
	}

	system("pause");
	return 0;
}

int rollDice(void)
{
	int diel;
	int die2;
	int workSum;

	diel = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = diel + die2;
	printf("Player rolled %d + %d = %d\n", diel, die2, workSum);
	return workSum;

}

