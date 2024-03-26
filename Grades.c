// Project3.c
//  : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	printf("Enter points in a range 0-100");
	int points;
	scanf("%d", & points);
	switch (points/10) {
	case 10:
	case 9:
		printf("Your grade is A.");
		break;
	case 8:
		printf("Your grade is B.");
		break;
	case 7:
		printf("Your grade is C.");
		break;
	case 6:
		printf("Your grade is D.");
		break;
	case 5:
		printf("Your grade is F.");
		break;
	default:
		printf("Your grade is F.");
		break;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
