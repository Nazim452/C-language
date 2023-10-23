#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number , guess , nguess = 1 ;
    srand(time(0));
    number = rand()%100+1;                 // random number btw 1 - 100 
    printf("The number is %d", number); 

    do {
        printf("Guess nnumber between 1 to 100\n");
        scanf("%d" ,&guess);
        if (guess> number){
            printf("Please enter lower number\n");

        }
        else if(guess<number){
            printf("Please enter higher  number\n");

        }
        else{
            printf("your number is guessed on %d attemped\n" , nguess);
        }
        nguess ++;
        
        
    }while (guess!=number );       
    return 0;
}


