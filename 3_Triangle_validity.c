#include <stdio.h>
int main() 
{
  int side1, side2, side3;

  printf("Enter the lengths of the three sides of the triangle:\n");
  scanf("%d %d %d", &side1, &side2, &side3);

  
  if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) 
  {
    printf("The sides form a valid triangle.\n");
  } 
  else 
  {
    printf("The sides do not form a valid triangle.\n");
  }

  return 0;
}