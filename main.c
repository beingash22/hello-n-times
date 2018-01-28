#include <stdio.h>

void main ()
{

  int num, i=0;
  scanf ("%d",&num);
  
  if (num>0)
  {
    for (i=0; i<num; i++)
      printf ("hello\n");
  }
  
  else
    printf ("invalid input");
    
}    
