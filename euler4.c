#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool check(int len, char str[]);

int main(int argc, char *argv[]){
  int i = 999, j = 999, x = 0, sum = 0, max = 0;
  bool flag;

  for(i=999; i>99; i--){
    for(j=999; j>99; j--){
      char str[7];
      sum = i*j;
      sprintf(str,"%d", sum );
      x = strlen(str);
      flag = check(x, str);
      if(flag){
        if(max<sum)
          max = sum;
      }

        //str = NULL;

    }
  }
  printf("%d\n",max);
}

bool check(int len, char str[]){
  //printf("%s",str);
  int i = (len / 2), j = 1, x=0, y=(len-1);
  for(j=1; j<=i; j++){
    if(str[x] != str[y])
      return false;
    x++;
    y--;
  }
  return true;
}
