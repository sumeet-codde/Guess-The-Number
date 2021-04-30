#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess,nguess=1;
    srand(time(0));
    number = rand() % 1000 + 1; //generates a random numberbetween 1 and 100
    // printf("the random number is %d\n", number);

    //keep running the loop until the number is guessed
    do
    {
        printf("guess the number between 1 and 1000\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number){
            printf("Upper number please\n");
        }
        else{
            printf("you have guessed the corrrect number in %d attempts\n",nguess);
        }
        nguess++;
    } while (guess!=number);

    return 0;
}