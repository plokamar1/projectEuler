#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
  int n = 1, i = 1;

  for(n=1; ;n++){
    int t = 0, divs = 1;
    t = (n*(n+1))/2;

    for(i=2; i <= sqrt(t); i++){
      if((t % i) == 0){
        divs++;
        if(i != n/i) divs++;
      }
    }
    if(divs >= 500){
      printf("%d\n", t );
      exit (0);
    }
  }
}
