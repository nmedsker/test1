#include <stdio.h>
#include <stdlib.h>
#define NUM 5

int horses[NUM] = { 0 };

void printRace(int[]);
int movement(int[]);
int main()
{
	int seed;
	int flag = 12;

	printf("Please eenter seed: ");
	
	scanf("%d", &seed);
	
	srand(seed);

	while (flag > 4) {
		flag = movement(horses);
		printRace(horses);
	}

	printf("Horse %d wins.\n\n", flag);


	system("pause");
	return 0;
}

int movement(int arr[]) {

	int i,flag;

	for (i = 0; i < NUM; i++) {
		if (rand() % 2) {
			(arr[i]++);
		}
	}

	for (i = 0; i < NUM; i++) {
		if (arr[i] == 15) {
			flag = i;
			return flag;
		}
	}

	return 10;
}

void printRace(int arr[]) {

	int i,j;

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < 15; j++) {
			if (j == arr[i])
				printf("%d", i);
			else
				printf(".");
		}
		printf("\n");
	}
	printf("\n\n");
}