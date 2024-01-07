#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random float in the range [1, 5]
float randomFloatInRange(float min, float max)
{
    return ((float)rand() / RAND_MAX) * (max - min) + min;
}

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random float in the range [1, 5]
    float randomValue = randomFloatInRange(1.0f, 5.0f);

    // Display the generated random float
    printf("Random float in range [1, 5]: %.2f\n", randomValue);

    return 0;
}
