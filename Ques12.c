#include<stdio.h>
void main()
{
    int i,mn;
    printf("Enter month number: ");
    scanf("%d", &mn);
    if(mn==4||mn==6||mn==9||mn==11)
    {
        printf("No. of days: 30");
    }
    else if(mn==2)
    {
        printf("No. of days: 28");
    }
    else
    {
        printf("No. of days: 31");
    }
}