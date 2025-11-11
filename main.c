#include <stdio.h>  // for input/output functions (printf)
#include <stdlib.h> // for rand() and srand() functions
#include <time.h>   // for time() function used in random seeding

// Function to simulate rolling one die (returns a number between 1 to 6)
int roll_one_die()
{
    return (rand() % 6) + 1; // rand() % 6 gives 0–5, +1 makes it 1–6
}

int main()
{
    int count[13] = {0};       // Array to store count of sums (index 2–12 used)
    int die1, die2, sum;       // Variables for dice and their sum
    int total_rolls = 1000000; // Total number of rolls (1 million)

    srand(time(NULL)); // Seed random number generator with current time
                       // (so every time program runs, random numbers change)

    // Loop to simulate rolling dice 'total_rolls' times
    for (int i = 0; i < total_rolls; i++)
    {
        die1 = roll_one_die(); // roll first die
        die2 = roll_one_die(); // roll second die
        sum = die1 + die2;     // calculate sum of both dice
        count[sum]++;          // increase count of that sum by 1
    }

    // Print table header
    printf("Sum\tCount\tProbability(%%)\n");
    printf("--------------------------------\n");

    // Loop through all possible sums (2 to 12)
    for (int i = 2; i <= 12; i++)
    {
        // Calculate probability (count / total rolls * 100)
        float prob = (count[i] / (float)total_rolls) * 100;

        // Print the sum, how many times it appeared, and its probability
        printf("%d\t%d\t%.2f%%\n", i, count[i], prob);
    }

    return 0; // Successful program end
}
