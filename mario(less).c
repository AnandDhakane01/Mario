#include <cs50.h>
#include <stdio.h>

int main(void)
{
   printf("#");
   //Getting height from the user
   int n;
   do
   {
      n = get_int("Height: ");
   }
   while (n < 1 || n > 8);
   
   //making the pyramid

   for(int i = 0; i < n; i++)
   {
      //spaces
      for(int k = 1; k < n-i; k++)
      {
         printf(" ");
      }
      
      //blocks
      for (int j = 0; j < i+1; j++)
      {
         printf("#");
      }
      printf("\n");
   }
   return 0;
}
