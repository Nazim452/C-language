/*#include<stdio.h>
void display();

int main(){
    int a ;
    printf("Function start\n");
    display();
    printf("Function end");
    

    
    return 0;
    
}
void display(){
    printf("This is display\n");
}*/

/*#include<stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();



int main(){
    GoodMorning();   // call function   tino ko direct bhi call kiya ja sakta h
       
    return 0;
}
void GoodMorning(){
    printf("Nazim , Good Morning\n");
    GoodAfternoon();              // indirect call
}

void GoodAfternoon(){
    printf("Nazim , Good Afternoon\n");
    GoodNight();

}

void GoodNight(){
    printf("NAzim , Good Nighr\n");

    return 0;

} */

/*#include<stdio.h>

int sum(int a, int b);

int main(){
    int c;
    c= sum(2,4);
    printf("The value of c is %d", c);
    return 0;
    
}
    
int sum(int a, int b){
    int result;    // or c                
    result = a+b;
    return result;  // or return c;
   
}*/


//  using libraray fun calculate area of square 

/*#include<stdio.h>

int main(){
    int side;

    printf("Enter the value of side\n");
    scanf("%d", &side);

    printf("The value of area is %f" , pow(side ,2));
    
    return 0;
}*/


//  RECURSION

/*#include<stdio.h>
int factorial( int x);


int main(){
    int n =5;
    printf("The value of factorial %d is %d", n , factorial(n));

    
    return 0;
}
int factorial( int x){
    if (x==1 || x== 0){
        return 1;
    }
    else{
        return(x *(factorial(x-1)));
    }
}*/

// AVERAGE  NUMBER 
/*#include<stdio.h>
float average( int a , int b , int c);


int main(){
    int a, b ,c;
    printf("Enter the value of a \n");
    scanf("%d", &a);

    printf("Enter the value of b \n");
    scanf("%d", &b);

    printf("Enter the value ofc \n");
    scanf("%d" ,&c);

    printf("The average og given number is %f\n", average(a,b,c));
    


    
    return 0;
}

float average( int a , int b , int c){
    float result ;
    result = (float)(a+b+c)/3 ;   // float - reason -- jab int value average output ho isliye
    return result;
}*/

// CELCISU TO FARENHITE

// GRAVITY FIND




/*#include<stdio.h>
float force(float mass);


int main(){
    float m;
    printf("Enter the value of mass is kg \n");
    scanf("%f" , &m);

    printf("The value of average  is %.2f \n" , force(m));

    
    return 0;
}
float force(float mass){
    float result = mass*9.8;
    return result;


}*/


//  FOR FIBNOACHHI FORMULA

// FIB (N ) =  fib(n-1) +fib (n-2)
// FIB(1) = 0
// FIB(2) = 1


//important note -  printf ke argument GCC me right to left 

//order of argument compiler to compiler depend karta h



// print following pattern
// *                 using recursion
// ***                         
// *****
// (2n -1) ---- formula

#include<stdio.h>
void pattern(n);


int main(){
    int  n =10;
    pattern(n);
    
    return 0;
}


void pattern ( int n){
    if (n==1){
        printf("* \n");
        return;

    }
    pattern(n-1);
    for (int i =0; i<(2*n-1); i++){
        printf("*");
        
    } 
    printf("\n");


}





















































