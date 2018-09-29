#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(void)
{
  int pid;
  pid = fork();

  if(pid != 0 ){
    if(fork() != 0 ){
      for(;;){printf(2, "OTHER SONNNNN\n", pid);}
    }
    for(;;){printf(2, "fork!! %d\n", pid);}
  }
  
 settickets(1000);
//  printf(2, "Tickest %d\n", tickets);
 for(;;){printf(2, "father!!\n", 1);}

  
}