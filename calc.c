#include<stdio.h>

int main(int argc, char const *argv[])
{
	int s,a,b,c=0;
	printf("Enter your Choice:\n");
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");
	printf("Anything Else to Exit\n");
	scanf("%d\n",&s);
	scanf("Enter the two numbers\n%d %d\n",&a,&b);
	switch(s)
		{
			case 1:
			c = a + b;
			break;
			case 2:
			c = a - b;
			break;
			case 3:
			c = a * b;
			break;
			case 4:
			c = a / b;
			break;
			default:
			exit(0);
		}
	printf("The output is %d\n",c);
	return 0;