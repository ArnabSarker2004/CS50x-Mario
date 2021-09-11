#include <stdio.h>
#include <cs50.h>

void pyrimad(char c, int height); //This void reduces the amount of lines needed to complete the goal, this line is here because the computer needs to be aware that this void exists before the main void.

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: "); //asks user for height of pyrimad
    }
    while (height < 1 || height > 8); // keeps asking for prompt if th height does not match requirements

    for (int r = 0; r < height; r++) // For loop initialization, condition, and update
    {
        pyrimad(' ', height - 1 - r); // formula for the number of spaces of right side of pyrimad
        pyrimad('#', r + 1); // formula for the number of "#" on right side of pyrimad
        pyrimad(' ', 2); // formula for the gap in between the two sections
        pyrimad('#', r + 1);// formula for the number of "#" on the left side of pyrimad


        printf("\n"); // used to make the output more ashetically pleasing
    }
}

void pyrimad(char c, int height)  //This function reduces the amount of lines needed to complete the goal, it takes parameters "c" and "height" tyo complete the function
{
     for (int r = 0; r < height; r++) // For loop initialization, condition, and update
     {
         printf("%c", c); // "printf" used with place holder because it is going to be used in the main void because a "printf" function can take a string and the number of times it will repeat that string.
     }
}


