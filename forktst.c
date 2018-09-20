#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(void)
{
  int pid = fork();
  printf(2, "fork!! %d\n", pid);
}