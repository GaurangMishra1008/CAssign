#include<stdio.h>
int main()
{
	int h,e,m,s,c;
	printf("Enter the marks of 5 subjects :");
	scanf("%d %d %d %d %d",&h,&e,&m,&s,&c);
	if((h>=40) && (e>=40) && (m>=40) && (s>=40) && (c>=40))
    {
        printf("You are pass");
        int avg=(h+e+m+s+c)/5;
        printf("Your avg marks :%d",avg);
    }
    else
        printf("You are Fail");
	return 0;
}

