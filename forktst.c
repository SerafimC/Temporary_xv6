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
      settickets(20);
      for(;;){printf(2, "PROCESS 2\n");}
    }
    settickets(30);
    for(;;){printf(2, "PROCESS 3\n");}
  }
  
 settickets(10);
//  printf(2, "Tickest %d\n", tickets);
 for(;;){printf(2, "PROCESS 1\n", 1);}

  
}