// program to simulate simple calculator
//date:8/06/2023

#include <stdio.h>
int main()
{
	int num1,num2,result;
	char op;
	
	printf("Enter an arithmetic operator :");
	scanf("%c",&op);
	
	printf("Enter two integers :");
	scanf("%d%d",&num1,&num2);
	
	if (op == '+')
	{
		result = num1 + num2;
	}
	
	else if (op == '-')
	{
		result = num1 - num2;
	}
	else if (op == '*')
	{
		result = num1 * num2;
	}
	else if (op == '/')
	{
		if (num2 == 0)
		{
			printf("zero division error");
		}
		else
		{
			result = num1 / num2;
		}
	}
	else if (op == '%')
	{
		if (num2 == 0)
		{
			printf("zero division error");
		}
		else
		{
			result = num1 % num2;
		}
	}
	else
	{
		printf("invalid operator");
		return 3;
	}
	printf("%d %c %d =%d",num1,op,num2,result);
	return 0;
}
	
