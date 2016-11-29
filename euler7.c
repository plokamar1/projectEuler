#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime(long long n);

int main(int argc, char *argv[]){
    long long i = 0;
    int counter = 0;
    for(i=2;; i++){
      if(prime(i))
        counter++;
      if(counter == 10001){
        printf("%llu\n",i);
        exit(0);
      }
    }
}

bool prime(long long n){
  long long i = 1;
  int c = 0;

  if(n < i)
    return false;

  for(i=1; i<=n; i++){
    if((n%i) == 0)
    c++;
    if(i>1 && i<n && c >= 2){
      return false;
    }
  }
  
  if(c==2)
    return true;
}
