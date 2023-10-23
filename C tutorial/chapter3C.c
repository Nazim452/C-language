// even or odd number
/*#include<stdio.h>

int main(){
    int a;
    printf("Enter the value\n");
    scanf("%d" , &a);

    if(a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("%d is odd",a);
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int vippass = 0;
    vippass=1;
    int age ;
    printf("Enter the value  of age\n");
    scanf("%d",&age);

    if ((age<90 && age>18) || vippass ==1){
        printf("Your are  eligible for drive\n");

    }
    else{
        printf("you are not eligible for drive\n");
    }
    
    

    return 0;
}
*/



/*#include<stdio.h>

int main(){
    int main();
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);

    if (num==1){
        printf("your number is equal to 1 \n");
    }
    else if (num==2){
        printf("your number is wqual to 2\n");
    

    }
    else{
        printf("your number is not equal to 1,2\n");
    }
    return 0;
}*/



// one liner if else statement

/*#include<stdio.h>

int main(){
    int main();
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    (n>5) ? printf("your number is greater than 5"):printf("your number is less than 5");
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int rating;
    printf("Enter the number 1-3 for rating");
    scanf("%d", &rating);

    switch (rating){
        case 1:
            printf("your raring is 1");
            break;
        case 2:
            printf("your rating is 2");
            break;
        case 3:
            printf("your ratring is 3");
            break;
        default:
            printf("Invalid rating");
    }
    

    return 0;
}
*/


/*#include<stdio.h>

int main(){
    int a= 10;
    if (a==11)
    printf("i am  equal  to 11");

    else
    printf("I am  not equal to 11");
    return 0;
}
*/

//program to find percentage &pass or fail 

/*#include<stdio.h>

int main(){
    int physics ,chemistry, math;
    float total;

    printf("Enter physics marks\n");
    scanf("%d",&physics);

    printf("Enter chemistry marks\n");
    scanf("%d",&chemistry);


    printf("Enter math marks\n");
    scanf("%d",&math);

    total = (physics+ chemistry +math)/3;
    if ((total<40 )|| physics<33 || chemistry<33 || math<33){
        printf("Your total percentage is %f \n you are failed", total);

    }
    else{
        printf("Your total percentage is %f \n you are passed", total);
    }

    return 0;
}*/



// CALCULATE INCOME TAX BY IMPLOY


/*
#include<stdio.h>

int main(){
    float tax , income;
    printf("Enter the amount for calculate  tax\n");
    scanf("%f", &income);

    if (income>=250000 && income<=500000){
        tax = tax+0.05* (income - 250000);

    }

    if (income>=500000 && income<=1000000){
        tax = tax+0.20*(income- 500000);
    }

    if( income>1000000 ){
        tax = tax+0.30*(income - 1000000);
    }

    printf("Tax is paid by you is %f\n" ,tax);



    return 0;
}

*/


// TAKE USER INPUT DETERMINE NUMBER IS GREATER



/*
#include<stdio.h>

int main(){
    
    int a,b,c;

    printf("Enter  the 1st value\n");
    scanf("%d",&a);


     printf("Enter  the 2nd value\n");
    scanf("%d",&b);

     printf("Enter  the 3rd value\n");
    scanf("%d",&c);

    if (a>b){
        printf("1st number is greater\n", a);
    }

    if  (b>c){
        printf("2nd number is greater\n", b);

    }

    else{
        printf("3rd number is greater\n",c);
    }
    return 0;
}*/



// FIND CHARACTER IN LOWERCASSE OR UPPERCAE



/*#include<stdio.h>

int main(){
    
    // 97 - 122  --- lowercase

    char ch;
    printf("Enter the character");
    scanf("%c" ,&ch);

    if (ch >=97 && ch  <=122){
        printf("Your letter in lowercase");
    
    }
    else{
        printf("Your letter is not lower case");
    }


    return 0;
}*/















































































































