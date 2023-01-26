#include <stdio.h>

int main() {
  int a;
  // a =0;
  printf("value is : ");
  scanf("%d", &a);

  while (a < 20) {
    if (a >= 10) {
      printf("value is : %d\n", ++a);
    } else {
      printf("Enter a valid number\n"); // else part is very dangerous!!!!!!!!!!!!!!! (infinite)
    } 
  }
  
  return 0;
}