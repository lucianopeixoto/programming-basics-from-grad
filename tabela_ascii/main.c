#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n = 0;
  while (n < 256)
  	{
		printf ("%d: %c\n", n, n);
		n++;
		}
  system("PAUSE");	
  return 0;
}
