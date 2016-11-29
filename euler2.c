#include <stdio.h>
#include <stdlib.h>

#define MAXN 4000000

int fibo (int term);

int main(int argc, char *argv[]){

  unsigned long long i = 0, n1 = 0, n2 = 1, sum1 = 0, sum2 = 0;

  for(;;){
    sum1 = n1 + n2;
    n1 = n2;
    n2 = sum1;
    if(sum1>= MAXN)
      break;
    if((sum1%2) == 0)
      sum2 += sum1;
  }

  printf("%llu\n", sum2);
  exit(0);
}
