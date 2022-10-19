#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
       int start;
       do
       {
        start = get_int("Starting population:\n");
       }
       while(start<9);
    // TODO: Prompt for end size
       int end;
       do
       {
        end = get_int("Ending population:\n");
       }
       while(start>end);
    // TODO: Calculate number of years until we reach threshold
       // n = n+ (n/3)- (n/4)
       int year=0;
       while (start<end)
       {
         start = start + (start/3) - (start/4);
         year++;
       }
    // TODO: Print number of years
     printf("Year%i\n",year);
}
