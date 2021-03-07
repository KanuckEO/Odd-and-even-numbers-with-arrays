#include <stdio.h>

int a[5] = {10, 21, 35, 24, 52};
int odd = 0;
int even = 0;
int counter = 0;

int main(void) {
  for(int i = 0; i < 5; i++){
    
    if(a[i] % 2 ==0)
    {
      counter++;
      even++;
      printf("\n Even number %d",a[i] );
    }
    else
    {
     counter++;
     odd++;
     printf("\n odd number %d",a[i] );
    }
  }
  printf("\n Toatal Even Numbers = %d", even);
  printf("\n Toatal odd Numbers = %d", odd);
  printf("\n total elemenets in an array is = %d " , counter);
}

