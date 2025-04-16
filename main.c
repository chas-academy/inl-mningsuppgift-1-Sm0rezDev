#include <stdio.h>
#include <stdlib.h>

#define MAX_ROLLS 100

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    unsigned int dice_rolls[MAX_ROLLS];

    for (int i = 0; i < MAX_ROLLS; ++i) {
        int dice = (rand()%6) + 1;
        printf("%d\n", dice);
    }

    return 0;
}
