#include <stdio.h>
#include <stdlib.h>
/**
 */
int main(int argc, char *argv[])
{
        int cents = 0, money;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        money = atoi(argv[1]);
                                                                              if (money <= 0)
        {
                printf("0\n");
                return (0);
        }

        while (money > 0)
        {
                if (money >= 25)                                                              money -= 25;
                else if (money < 25 && money >= 10)
                        money -= 10;
                else if (money < 10 && money >= 5)
                        money -= 5;
                else if (money < 2 && money >= 1)
                        money -= 2;
                else if (money == 1)
                        money -= 1;
                cents++;
	}
	printf("%d\n", cents);
	return (0);
}