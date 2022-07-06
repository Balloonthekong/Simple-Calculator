#include <cstdio>
#include <windows.h>

using namespace std;

//functions
int main_page();//Start Main_page
int addition();//Addition Calculate
int subtraction();//Subtraction Calculate
int multiplication();//Multiplication Calculate
int division();//Division Calculate

//variables
int key = 0;
long long a = 0;
long long b = 0;

int main()
{
	main_page();
	return 0;
}

int main_page()
{
	system("cls");
	printf(" _     _  _______  ___      _______  _______  __   __  _______ \n");
	printf("| | _ | ||       ||   |    |       ||       ||  |_|  ||       |\n");
	printf("| || || ||    ___||   |    |       ||   _   ||       ||    ___|\n");
	printf("|       ||   |___ |   |    |       ||  | |  ||       ||   |___ \n");
	printf("|       ||    ___||   |___ |      _||  |_|  ||       ||    ___|\n");
	printf("|   _   ||   |___ |       ||     |_ |       || ||_|| ||   |___ \n");
	printf("|__| |__||_______||_______||_______||_______||_|   |_||_______|\n");
	printf("\n\n\n");

	printf("[1]Addition\n");
	printf("[2]Subtraction\n");
	printf("[3]Multiplication\n");
	printf("[4]Division\n");
	printf("[5]Exit\n");

	printf("Enter the key: ");
	scanf_s("%d", &key);


	switch(key) 
	{
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			return 0;
	}
	return 0;
}

int addition()
{
	system("cls");
	printf("Enter 2 number:");
	scanf_s("%lld%lld", &a, &b);
	printf("\n\n%lld", a + b);
	Sleep(2000);
	main_page();
	return 0;
}

int subtraction()
{
	system("cls");
	printf("Enter 2 number:");
	scanf_s("%lld%lld", &a, &b);
	printf("\n\n%lld", a - b);
	Sleep(2000);
	main_page();
	return 0;
}

int multiplication()
{
	system("cls");
	printf("Enter 2 number:");
	scanf_s("%lld%lld", &a, &b);
	printf("\n\n%lld", a * b);
	Sleep(2000);
	main_page();
	return 0;
}

int division()
{
	system("cls");
	printf("Enter 2 number:");
	scanf_s("%lld%lld", &a, &b);
	printf("\n\n%lld and Remainder: %lld", a / b, a % b);
	Sleep(2000);
	main_page();
	return 0;
}