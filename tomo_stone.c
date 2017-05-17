/*fizz-buzz*/

#include<stdio.h>

int main(void)
{
    for(int a=1;a<=100;a++)
    {
      printf("%d ",a);
      if(a%3==0)
      {
          printf("fizz");
      }
      
      if(a%5==0)
      {
          printf("buzz");
      }

      printf("\n");
    }

    return(0);
}