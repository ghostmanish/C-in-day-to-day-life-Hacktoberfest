#include<stdio.h>
#include<conio.h>
int main()
{
	int num, count = 0 , temp, num_1; //Data type deceleration.
	/*
	num = user input number to check ether it is Armstrong Number or not.
	count = storing sum value.
	temp = Temporary variable for storing num value.
	num_1 = for storing remainder.
	*/
	printf("Enter any number");
	scanf("%d",&num);  // For user input.
	temp = num;        // temporary storing the value.
	while( temp > 0)   //Condition to stop the loop
	{
		num_1 = temp%10;  //remainder
		count += (num_1*num_1*num_1);  //power of that number and adding with count
		temp = temp/10;     // decreasing number
	}
	if(num == count)        //Checking condition for Armstrong Number
	{
		printf("%d is Armstrong Number",num);
	}
	else
	{
		printf("%d is not an Armstrong Number",num);
	}
	getch();
	return 0;
}