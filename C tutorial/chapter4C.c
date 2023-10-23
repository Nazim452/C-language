// WHILE LOOP

/*#include<stdio.h>

int main(){
    int a;
    printf("enter the value");
    scanf("%d", &a);

    while (a<10){
        printf("%d \n", a);
        a++;
    }

    return 0;
}*/

// PRINT NUMBER 10 T0 20

/*#include<stdio.h>

int main(){
    int a = 0;

    while(a<=20){
        if(a>9)
        printf("%d \n",a);
        a++;
    }
    return 0;
}*/

// DO WHILE LOOP

/*#include<stdio.h>

int main(){
    int a = 0;

    do
    {
        printf("The value of a%d\n",a);
        a++;
    } while (a<10);

    return 0;
}*/

// PRINT n NATURAL NUMBER IN do - while loop

/*#include<stdio.h>

int main(){
    int i = 0;
    int n;

    printf("Enter the value \n");
    scanf("%d", &n);

    do
    {
        printf("the number is %d \n", i+1);
        i++;

    } while (i<n);



    return 0;
}*/

// FOR LOOP

/*#include<stdio.h>

int main(){
    for( int a =0; a<10; a++){
        printf("the value of a is %d \n",a);
    }
    return 0;
}*/

// NATURAL NUMBER IN FOR LOOP

/*#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter the value\n");
    scanf("%d", &n);

    for (i = 1; i<n; i++){
        printf("the value of i is %d \n", i);
    }

    return 0;
}*/

// PROGRAM FOR EREVERSE NATURAL NUMBER

/*#include<stdio.h>

int main(){
    int n;
    printf("Enter\n");
    scanf("%d" ,&n);

    for (int i =n; i ; i--){
        printf("The value of n is %d \n" ,i);

    }
    return 0;
}*/

// BREAK LOOP

/*#include<stdio.h>

int main(){
    int i =0;

    do
    {
        printf("The value of i is %d \n", i);
        if( i ==4){
            break;
        }

        i++;
    } while (i<10);



    return 0;
}*/

// CONTROL

/*#include <stdio.h>

int main()
{
    int i = 0;

    int skip = 5;

    while (i < 10)
    {

        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
       
    }

    return 0;
}
*/

// MULTIPLICATION TABLE


/*#include<stdio.h>

int main(){
    printf("Multiploication table of 10\n \n");

    for(int i=10; i ; i--){
        printf("10 X %d = %d\n" , i , 10*i);


    }
    return 0;
}*/




// SUM OF NATURAL NUMBER


/*#include<stdio.h>

int main(){
    int i , sum =0 ;

    for (i=0 ; i<=10; i++ ){
        sum = sum +i;
    }
    
    printf("The sum of first natural  10 number is %d \n", sum);
    
    return 0;
}*/



// FACTORIAL OF GIAVEN NUMER

/*#include<stdio.h>

int main(){
    int i =0 , factorail =1;

    for( i=1; i<=3 ; i++){
        factorail = factorail*i;
    }
    printf("Factorial of 3 is %d \n", factorail);

    
    return 0;
}*/

// CHECK NUMBER PRIME OR NOT


#include<stdio.h>

int main(){
    int n =2, prime =1;     // prime 1 means prime hai & prime 0 means prime n hai

    for(int i = 2 ; i<n ; i++){
        if( n%i ==0){
            prime = 0;
            break;
        }
       
    }
if (prime ==0 ){
    printf("your number is not prime");

}
else{
    printf("your number is prime");
}
    return 0;
}
















