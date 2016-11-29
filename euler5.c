#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i = 2521, j = 2;
  for(i=20;;i++){
    for(j=2; j<=20; j++){
      if((i%j) != 0)
        break;
      if(j == 20){
        printf("%d\n", i );
        exit(0);
      }
    }
  }

}
