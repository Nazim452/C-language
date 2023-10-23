/*#include<stdio.h>

int main(){
    int i = 34;
    int*j = &i;

    printf("The value of i is %d \n", i);
    printf("The value of i %d \n" ,*j);

    printf("The adress of i is %u \n " ,&i);
    printf("The adress of i is %u \n" , j);

    printf("The adress of j is %u \n" ,&j);

    printf("The value of j is %u \n" ,*(&j));
    
    return 0;
}*/


// CALL BY VALUE & PASS

/*#include<stdio.h>
void wrong_swap( int a, int b);
void swap( int *a , int *b);


int main(){
    int x = 3 , y = 4;
    printf("The value of a before swap is %d and %d \n", x ,y);

    //wrong_swap( x ,y);  // not work due to call by value
    swap( &x , &y);

    printf("The value of a after swap is %d and %d \n", x ,y);

    return 0;
}

void wrong_swap( int a , int b){
    int temp;
    temp =a ;
    a =b;
    b= temp;
}
void swap(int *a , int *b){
    int temp;
    temp =*a ;
    *a =*b;
    *b= temp;
    
}*/



// find adress of any variable uding pointer




// #include<stdio.h>

// int main(){
//     int a =6;
//     int *ptr = &a;    
    
//     printf("The adress of a is %u \n" , &a);
//     printf("The value  of a is %d \n", *ptr);

    
//     return 0;
// }




/*#include<stdio.h>
void adress( int a){
    printf("The adress of a is %u \n " , &a);    //  adress of a (4) is different

}


int main(){
    int i =4;
    printf("The value of i is %d \n" , i);

    adress(i);
    printf("The adress of i is %u \n ", &i);   // adreass of i (4) is differet

    
    return 0;
}*/



// USING POINTER  CALCULATE SUM & AVERAGE IN MAIN



// #include<stdio.h>
// void sumAndAvg( int a , int b , int*sum, float*avg){
//     *sum = a+b;
//     *avg = (float)(*sum)/2;

// }

// int main(){
//     int i, j,sum;
//     float avg;
//     i = 3;
//     j = 6;
//     sumAndAvg(i, j ,&sum, &avg );

//     printf("The value of sum is %d \n", sum);

//     printf("The value of average ia %f \n ", avg);


    
//     return 0;
// }



// PRINT VALUE OF a BY POINTER  TO  POINTER



// #include<stdio.h>

// int main(){
//     int a = 10;
//     int  *ptr = &a;

//     int  **ptr_ptr = &ptr;

//     printf("The value of a is %d \n  ", **ptr_ptr);
    
//     return 0;
// }























