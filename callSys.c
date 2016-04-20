#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<sys/syscall.h>
#include<string.h>
#include<sys/signal.h>
#include<time.h>

#define smunch(arg, sig) syscall(329, arg, sig)
#define init_disksched() syscall(330)
#define get_disksched() syscall(331)

int main(int argc, char **argv){
  if(atoi(argv[1]) == 1){
    init_disksched();
  }
  else if(atoi(argv[1]) == 2){
    get_disksched();
  }
  else{
  printf("\n sizeof(time_t) = %d, long = %d, int = %d", sizeof(time_t), sizeof(long),sizeof(int));
  }
  return 0;
}

