#include <stdio.h>
#include <stdlib.h>
#define t 100
#define f 0.02

void main() {
    int failed = 0;
	int i
    for (i = 0; i < t; i++)
	{  
        float rand_val = (float)rand() / RAND_MAX; 
		if (rand_val < f)
		{ 
            failed++;
        }
    }

    printf("Total failed recommendations: %d\n", failed);
}
