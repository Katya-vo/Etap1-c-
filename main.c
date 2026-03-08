#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include "stats.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s input_file\n", argv[0]);
        return 1;
    }

    int *numbers = NULL;
    int count = read_numbers(argv[1], &numbers);

    if (count <= 0)
    {
        printf("Error\n");
        return 1;
    }

    int min = minimum(numbers, count);
    int max = maximum(numbers, count);
    double avg = average(numbers, count);

    printf("Count: %d\n", count);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Average: %.2f\n", avg);

    free(numbers);

    return 0;
}
