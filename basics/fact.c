#include <stdio.h> 
#include <string.h>

void FirstFactorial(int num) {
  
  // code goes here
  int x = 1;
  int i = 1;
  int z = 0;
  if (num == z)
  {
    printf("%d", x);
  }
  else
  {
    for (i = 1; i <= num; i++)
    {
      x = x * i;
    }
    printf("%d", x);
  }
}

int main(void)
{ 
   
  // keep this function call here
  int num;
  printf("enter a number: ");
  scanf("%d", &num);
  FirstFactorial(num);
  printf("\n");
  return 0;
    
}
