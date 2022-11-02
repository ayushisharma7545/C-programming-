 5. // Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main(){
    int num;
     printf("Enter the number: ");
     scanf("%d", &num);
     if (num == 0){
        printf("The given number is Zero");
     }
     if (num%2==0 && num !=0){
        printf("The given number is Even ");
     }
     if (num%2 !=0){
        printf("The given number is Odd ");
     }
     

}



