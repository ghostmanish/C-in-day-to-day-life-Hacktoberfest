#include<stdio.h>
#include<conio.h>
int main()
{
	int num, newNumber = 0, temp , count;        //Data type deceleration.
	printf("Enter the number to check either it is Harshad Number or not");
	scanf("%d",&num);  //User input.
	temp = num ;
	while(temp > 0)   //For splitting the number in it's digit.
	{
		count = temp % 10;
		newNumber = newNumber + count;
		temp = temp / 10;
	}
	if (num%newNumber == 0)   //Condition for checking number is Harshad Number or not.
	{
		printf("%d is a Harshad Number ",num);
	}
	else
	{
		printf("%d is not a Harshad Number ",num);
	}
	getch();
	return 0;
}
