#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
  int num = atoi(argv[1]);
  if(num == 1)
  {
    printf(1, "Number of running processes %d\n", info(num));
  }
  if(num ==2)
  {
    printf(1, "Number of system calls the current process is using: %d\n",info(num));
  }
  if(num == 3)
  {
    printf(1, "Number of memory pages the current process is using: %d\n", info(num));
  }
  exit();
}
