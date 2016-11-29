#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){
  int sumSq = 0, sum = 0, i = 1, total;
  for(i=1; i<=100; i++){
    sumSq += pow(i, 2);
    sum += i;
  }
  sum = pow(sum,2);
  total = sum - sumSq;
  printf("%d\n", total );
  exit(0);
}
