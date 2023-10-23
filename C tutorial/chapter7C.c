// #include<stdio.h>

// int main(){
//      int marks [2];

//      printf("Enter the value of marks 1: -   \n");
//      scanf("%d " , &marks[0]);

//      printf("Enter the value of marks 2 : -  \n");
//      scanf("%d " , &marks[1]);

//      printf("The value of marks is %d %d" , marks[0], marks[1]); 
    

//     return 0;
// }


// ACCEPT  MARKS OF 5 STUDENT IN AN ARRAY USING FOR LOOP


// #include<stdio.h>

// int main(){
//     int marks[5];
   

//     for (int i = 0; i<5 ; i++)
//     {
//         printf("Enter the value of marks %d:- " , i+1);
//         scanf("%d " , &marks[i]);
//     }

//     for (int i = 0; i<5 ; i++)
//     {
//         printf("The valuue of marks  %d is %d \n ", i+1 , marks[i]);
//     }
    
//     return 0;
// }




// INITIALISATION OF ARRAY



// #include<stdio.h>

// int main(){
//     int a[] = { 24,56,77};

//     printf("The value of a[0] is %d \n" , a[0]);

//     printf("The value of a[1] is %d \n" , a[1]);

//     printf("The value of a[2] is %d \n" , a[2]);



//     return 0;
// }




// POINTER AIRTHMETIC




    // #include<stdio.h>

    // int main(){
    // int a = 3;
    // int *ptr = &a;

    // printf("The value of ptr is %u \n ", ptr);
    // ptr++;    // or ptr = ptr+1        int ka memory storage  4 bytes ka hota h
    // ptr++; 
    // //ptr=  ptr+2;                          // or ptr --
    // printf("The value of ptr is %u \n ", ptr);

    // return 0;
    // }



// chr 1 - byte ka GCC me




// ARRAY WITH POINTER


// #include<stdio.h>


// int main(){
//     int marks[4];

//     int *ptr = &marks[0];

    
//     for (int i  = 0; i<4 ; i++){
//         printf("Enter the value of marks %d \n",i+1);
//     scanf("%d ", ptr);
//     ptr ++;

//     }
    

    
//     for (int i  = 0; i<4 ; i++){
//         printf("The value of marks is  %d is %d \n", i+1, marks[i] );
    
//     }
    
    
//     return 0;
// }





//  PASSIING  ARRAY TO FUNCTION


// #include<stdio.h>
// void printArray( int *ptr, int n){
//     for (int i = 0; i<n; i++){
//         printf("The value of element  %d is %d \n", i+1 , *(ptr+i));

//     }
//     //ptr[2] =666666;
    
// }



// int main(){
//      int arr[] = {2,3,4,5,6,7,8};
//      printArray(arr , 7);
//      //printf("%d" , arr[2]);
    
//     return 0;
// }






// MULTIDIMENSIONAL ARRAY




// #include<stdio.h>


// int main(){
//     int  n_student = 3;
//     int n_subject = 5;

//     int marks[3][5];
    
//     for(int i =0; i<n_student ; i++){
//         for(int j= 0; j<n_subject; j++ ){
//             printf("Enter the value of marks of student %d in subject %d \n" , i+1 ,j+1);
//             scanf("%d", &marks[i][j]);
//         } 
//     }
   
//     for(int i =0; i<n_student ; i++){
//         for(int j= 0; j<n_subject; j++ ){
//             printf("The marks of stident %d in subject %d is %d \n" , i+1 ,j+1,marks[i][j]);
            
//         } 
//     }
   
//     return 0;
// }



// PRACTICE SET

// CREATE ARRAY OF 10 NUMBER. VERIFY USING POINTER AIRTHMETIC (PTR+2) POINTS TO THE THIRD ELEMENT
//WHERE PTR IS A POINTER POINTING TO THE FIRST ELELMENT OF THE ARRAY

// #include<stdio.h>

// int main(){
//     int arr[10];

//     int *ptr =&arr[0];
//     ptr = ptr+2;

    
//     if ( ptr ==&arr[2]){
//         printf("These point to the same location in memory");
//     }
//     else{
//         printf("Your point is not equal to same memory");
//     }

    
//     return 0;
// }




//  CREATE AN ARRAY OF 10 INT &STORE MULTIPLICATION TABLE OF 5


// #include<stdio.h>

// int main(){
//      int mul[10];

//      for (int i=0; i<10; i++ ){
//         mul[i] = 5*(i+1);
//      }
    
//     for (int i=0; i<10; i++ ){
//         printf("5 X %d = %d \n" , i+1, mul[i]);
//     }
//     return 0;
// }



// WRITE A PROGRAMME CONTAINING A FUNCTION WHICH REVERSE THE ARRAY  PASSED TO IT



// #include<stdio.h>
// void reverse( int *array , int n){
//     int temp;
//     for (int i =0; i<(n/2) ; i++){
//         temp = array[i];
//         array[i] = array[n-i-1];
//         array[n-i-1] = temp;

//     }
// }
// int main(){
//     int array[] = {1,2,3,4,5,6,7};
//     reverse(array , 7);
//     for (int i =0; i<7 ; i++){
//         printf("The value of %d is %d \n" , i+1 ,array[i]);
//     }

    
//     return 0;
// }



//CREATE AN ARRAY OF SIZE 3X10 CONTAINING MULTIPLICATION TABLE OF THE NUMBER 2,7,9 WITHOUT FUNCTION



// #include<stdio.h>

// int main(){
//     int mulTable[3][10];

//     for(int i=0; i<10 ;  i++){
//         mulTable[0][i] = 2*(i+1);
//     }
//     for(int i=0; i<10 ;  i++){
//         printf("2 X %d = %d \n" ,i+1 , mulTable[0][i]);
//     }
    
//     return 0;
// }




// CREATE AN ARRAY OF SIZE 3X10 CONTAINING MULTIPLICATION TABLE OF THE NUMBER 2,7,9 USING FUNCTION

// #include<stdio.h>
// void printTable( int *mulTable , int num , int n){
//     for (int i=0; i<n; i++){
//         mulTable[i] = num*(i+1);

//     }
//     for (int i=0; i<n; i++){
//         printf("%d X %d = %d \n" , num , i+1 , mulTable[i]);
//     }
// }

// int main(){
//     int mulTable[3][10];

//     printTable(mulTable[0] ,2,10);
//     printTable(mulTable[1] ,7,10);
//     printTable(mulTable[2] ,9,10);

    
//     return 0;
// }




// CREATE A THREE DIMENSIONAL ARRAY AND PRINT  ADRESS OF ITS ELEMENT IN INCREASING ORDER


#include<stdio.h>

int main(){
    int array[2][3][4];
    for(int i = 0; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
            for (int k =0; k<4 ; k++){
                printf("The adress of %d %d %d is %u \n" , i , j, k, &array[i][j][k]);
            }
        }
    }
    
    return 0;
}































