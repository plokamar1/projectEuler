#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime(unsigned long long n);
void pFac(unsigned long long n);

int main(int argc, char *argv[]){

  unsigned long long j = 2, i = 2, n = 600851475143;

    pFac(n);
    exit(0);
}

bool prime(unsigned long long n){

  unsigned long long i = 1, c = 0;
  if(n < i)
    return false;
  for(i=1; i<n; i++){
    if((n%i) == 0)
    c++;
  }

  if(c < 2)
    return true;
  else
    return false;
}

void pFac(unsigned long long n){
  unsigned long long j = 2,i = 0;
  for(j=2; j <= n; j++){
    if(prime(j)){
      if((n%j) == 0){
          if(prime(n/j)){
            printf("%llu\n",n/j);
          //  printf("%llu\n",j);
            break;
          }
          else{
            pFac(n/j);
            break;
          }
      }
    }
  }

}
