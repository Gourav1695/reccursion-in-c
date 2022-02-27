#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int n;

    printf("Enter a number: ");
    scanf("%d", n);

    srand(time(0));
    number = rand() % 2 + 1;
    
    printf("The number is %d ", number);
    
   switch (number==n)
   {
   case 1:
       printf("you win");
       break;
   
   default:
       printf("You lost");
       break;
   }
    return 0;
}