#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
  int main()
  {
    int x=4;
    int *p;
    p=&x; 
    printf("Value at address pointed by p: %d \n",*p);
    printf("Value of x: %d \n",x);
    printf("Address of x: %d \n",&x);
    printf("Value of p: %d \n",p);
    printf("Address of p: %d \n",&p);
  return 0;
  }

