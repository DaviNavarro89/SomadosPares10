#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int c;
  scanf("%d", &c);
  int sum = 0;
  for (int b = 0; b < c;){
    b = b + 10;
    for(int j = 0; j < b + 1; j++){
      if(j%2 == 0 || j == 0){
      sum = sum + j;
     }
    }
  }
  printf("%d\n", sum);

  
  return 0;
}
