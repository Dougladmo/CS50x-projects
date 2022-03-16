#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int height;

//loop for ask the question if the number is too small or too big.
    do
    {
        height = get_int("height: ");
    }
    while (1 > height || 8 < height);


//to make lines..
    for (int line = 0; line < height; line++)
    {
//to make Column.
        {

            for (int column = height - 1; column >= 0; column--)
            {
// conditional to build the stairs correctly by using like a Cartesian plane.
                if (line >= column)
                {
//print a "brick"
                    printf("#");

                }
                else
                {
//print a espace to aline the stairs
                    printf(" ");
                }

            }

        }
        printf("\n");
    }






}