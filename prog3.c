#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char *argv[])
{

  settix(10);
  int iter = 0;
  int i,k;
  const int loop=43000;
  for(i=0;i<loop;i++)
  {
    asm("nop");
    for(k=0;k<loop;k++)
    {
      asm("nop");
    }

   if(i%4300 == 0)
    {
        printf(1,"prog3 %d iteration %d\n", gettix(),iter);
        iter++;
    }
  }
  printf(1, "prog3 %d\n", gettix());
  exit();
}
