// sizeof(int) ----> give  size of int


// DYNAMIC MEMORY USING     MALLOC




// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr= (int*)malloc(5 *sizeof(int));

//     for(int i=0;  i<5  ; i++){
//         printf("Enter the value of no %d \n" , i+1);
//         scanf("%d", &ptr[i]);
//     }
//      for(int i=0;  i<5  ; i++){
//         printf("The value  of %d is %d\n" , i+1, ptr[i]);
//      }
//     return 0;
// }




// DYNAMIC MEMORY USING     CALLOC

// calloc-- by defualt take 0 if we don't give any enter value


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr= (int*)calloc(5 ,sizeof(int));

//     // for(int i=0;  i<5  ; i++){
//     //     printf("Enter the value of no %d \n" , i+1);
//     //     scanf("%d", &ptr[i]);
//     // }
//      for(int i=0;  i<5  ; i++){
//         printf("The value  of %d is %d\n" , i+1, ptr[i]);
//      }
//     return 0;
// }



// TO CREATE AN ARRAY OF SIZE N USING COLLAC WHERE N IS AN INT ENTERNED BY USER


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     int n;
//     printf("How many no  do you want \n");
//     scanf("%d" , &n);
//     ptr = (int*) calloc(n, sizeof(int));

//     for(int i=0; i<n; i++){
//         printf("Enter the value of %d \n" , i);
//         scanf("%d" , &ptr[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("The  value of %d is %d \n" ,  i, ptr[i]);
//     }
    
//     return 0;
// }


//USE OF FREE FUN ---  SAVE OUR MEMORY



#include<stdio.h>
#include<stdlib.h>

int main(){
    //int *ptr1;
    int *ptr2;
    //ptr1 = (int*) malloc(6*sizeof(int));
    for(int  i=0; i<600;  i++){
        ptr2 = (int*) malloc(600*sizeof(int));
        printf("Enter the value of elemnt %d" , i+1);
        scanf("%d" , &ptr2[i]);
        free(ptr2);
    }
     for(int  i=0; i<600;  i++){
        printf("The value of %d id %d  \n" , i+1, ptr2[i]);
     }


   
    
    return 0;
}





// REALLOC FUN --- IF  DYNAMICAALY ALLOCATED MEMORY IS  INSUFFICIENT THEN  
//REALLOC  HELP TO ALLOCATE  NEW MORE  SIZE






// PROGRAM TO DYNAMICALLY CREATE , CAPABLE OF SORING 5 INT, NOE USE REALLOC
// SP THAT IT CAN STORE 10 INT



// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     ptr= (int*)malloc(5 *sizeof(int));

//     for(int i=0;  i<5  ; i++){
//         printf("Enter the value of no %d \n" , i+1);
//         scanf("%d", &ptr[i]);
//     }
//      for(int i=0;  i<5  ; i++){
//         printf("The value  of %d is %d\n" , i+1, ptr[i]);
//      }


//     ptr = realloc(ptr, 15*sizeof(int));
//     for(int i=0;  i<15  ; i++){
//         printf("Enter the value of no %d \n" , i+1);
//         scanf("%d", &ptr[i]);
//     }
//      for(int i=0;  i<15  ; i++){
//         printf("The value  of %d is %d\n" , i+1, ptr[i]);
//      }
//     return 0;
// }





// #include<stdio.h>
// #include<stdlib.h>


// int main(){
//     int *ptr;
//     ptr= (int *)malloc(10*sizeof(int));
//     for(int  i=0; i<10; i++){
//         ptr[i] = 7*(i+1);
//         printf("The value  of  7 X %d = %d\n" ,i+1, ptr[i]);
//     }
    
//     ptr = realloc( ptr,  15*sizeof(int));
//     printf("\n\n\nThe table after ralloc\n\n\n");

//     for(int  i=0; i<15; i++){
//         ptr[i] = 7*(i+1);
//         printf("The value  of  7 X %d = %d\n" ,i+1, ptr[i]);
       
//     }
    
//     return 0;
// }
































