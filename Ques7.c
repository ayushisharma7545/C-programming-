 //Write a C program to check whether a character is alphabet or not.
    #include<stdio.h>
    int main()
{
    char c;
    printf("Enter a character"\n);
    scanf("%c",&c);
if( (c>='a'&& c<='z')!!
    (c>='A'&& c<='Z') )
{
    printf("%c is an alphabet\n" ,c);
}
else
{
   printf("%c is not an alphabet\n",c);
}
    return 0;
}



