#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess, guesses, ans;

    srand(time(0)); //uses current time as a seed

    //generate random num between MAX and MIN
    ans = (rand() % MAX) + MIN;

    do{
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if (guess > ans)
        {
            printf("Too High!\n");
        }
        else if (guess < ans)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Correct!\n");
        }
        guesses++;
    }while(guess != ans);

    printf("*********************\n");
    printf("answer: %d\n", ans);
    printf("guesses: %d\n", guesses );
    printf("*********************\n");

    return 0;
}