#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv){
  int fd, i=0, j=0;
  char nums;
  int arr1[50],sum[500] = {0};


  fd = open("euler13",O_RDONLY,0644);
  if(fd == -1){ perror("open"); return 0; }



  while( read(fd, &nums, sizeof(char)) > 0 ){
    if(nums != '\n'){
      arr1[i] = nums-'0';
      i++;
    }
    if(i == 50){
      for(i=49,j=499; i>=0; i--,j--){
        sum[j] += arr1[i];
      }
      i=0;
    }
  }
  j=0;
  for(j=499; j>=0; j--){
      sum[j-1]+= (int)(sum[j]/10);
      sum[j] = (sum[j]/10)%10;
  }

  for(i=0; i<500; i++){
      printf("%d",sum[i] );
  }
  printf("\n");
}
