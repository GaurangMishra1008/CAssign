#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num%4==0 || num%400==0 || num%100==0)
        printf("Year is leap");
    else
        printf("Year Not Leap");
	return 0;
}





