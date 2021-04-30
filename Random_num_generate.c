# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int main(){
    int number;
    srand(time(0));
    number=rand()%100+1;//generates a random numberbetween 1 and 100
    printf("the random number is %d",number);
    return 0;
}