#include <stdio.h>

int main(void) 
{
    int score,sum=0;

    do {
        scanf("%d", &score);
        if(score !=-1)
        sum += score;
    } while (score != -1);

    printf("%d\n",sum);

    return 0;
}