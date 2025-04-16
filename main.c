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
        dice_rolls[i] = dice;
    }

    int rolls[6] = {0}; // initialize array with zero.
    int sum = 0;
    float mean = 0.0f;
    

    for (int i = 0; i < MAX_ROLLS; ++i) {
        int dice_value = dice_rolls[i];
        (dice_rolls[i] == 1) ? rolls[dice_value - 1]++ : (void)0;
        (dice_rolls[i] == 2) ? rolls[dice_value - 1]++ : (void)0;
        (dice_rolls[i] == 3) ? rolls[dice_value - 1]++ : (void)0;
        (dice_rolls[i] == 4) ? rolls[dice_value - 1]++ : (void)0;
        (dice_rolls[i] == 5) ? rolls[dice_value - 1]++ : (void)0;
        (dice_rolls[i] == 6) ? rolls[dice_value - 1]++ : (void)0;
        sum += dice_value;
    }

    mean = sum / 100.0;

    for (int i = 0; i < (sizeof(rolls) / sizeof(int)); ++i) {
        printf("%d\n", rolls[i]);
    }
    printf("%d\n", sum);
    printf("%.1f\n", mean);

    return 0;
}
