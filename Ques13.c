// Write a C program to input week number and print week day.
     #include<stdio.h>
     main()
{
    int n;
printf("Enter week number");
scanf("%d",&n);
if(n==1)
{
   printf("Sunday.");
 }
elseif(n==2)
{
   printf("Monday.");
  }
elseif(n==3)
{
   printf("Tuesday.");
  }
elseif(n==4)
{
   printf("Wednesday.");
   }
elseif(n==5)
{
    printf("Thrusday".);
   }
elseif(n==6)
{
  printf("Friday".);
  }
elseif(n==7)
{
  printf("Saturday".);
 }
elseif(n==o||n<o||n>7)
{
   printf("Invalid input!");
 }
}
  

