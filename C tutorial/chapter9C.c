// STRUCTURE

// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };

// int main(){
    
//     struct employee e1;
//     e1.code =100;
//     e1.salary  = 4566.78;
//     // e1.name = "Nazim"; --> not work --char pointer n h , char array h isliye 
//     strcpy(e1.name , "Nazim");

//     printf("%d\n" ,e1.code);
//     printf("%f\n" ,e1.salary);
//     printf("%s\n" ,e1.name);

//     return 0;
// }





// STORE THE DETAILS OF 3 EMPLOYEE FROM USER DEFINED FUNCTION


// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10];   
// };

// int main(){
//     struct employee e1 , e2;
//     printf("Enter the val of code \n");
//     scanf("%d" ,&e1.code);

//     printf("Enter the val of salary \n");
//     scanf("%f" ,&e1.salary);

//     printf("Enter the val of name \n");
//     scanf("%s" ,e1.name);

//      printf("Enter the val of code \n");
//     scanf("%d" ,&e2.code);

//     printf("Enter the val of salary \n");
//     scanf("%f" ,&e2.salary);

//     printf("Enter the val of name \n");
//     scanf("%s" ,e2.name);






    
//     return 0;
// }




// POPINTER TO STRUCTURE

// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10]; 
// };
// int main(){
//     struct employee e1;
//     struct employee *ptr;

//     ptr = &e1;
//     (*ptr).code = 101;  // or ptr->code = 101;


//     printf("%d", e1.code);
    
//     return 0;
// }


// FUNCTION IN STRUCTURE


// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[10]; 

// };
// void show(struct employee  emp){
//     printf("The  code of this employee is %d \n",  emp.code);
//     printf("The  code of this employee is %f\n",  emp.salary);
//     printf("The  code of this employee is %s\n" , emp.name);
// }



// int main(){
//     struct employee e1;
//     struct employee *ptr;

//     ptr = &e1;
//     (*ptr).code = 101;   // or ptr->code = 101;
//     (*ptr).salary = 101.67;
//     strcpy((*ptr).name , "Nazim");

//     show(e1);
//     //printf("The  code of employee is %d ", e1.code);
    
//     return 0;
// }


// CREATE A  TWO DIMENSIONAL VECTOR USING STRUCTURE IN C



// #include<stdio.h>
// struct vector{
//     int x ;
//     int  y;
// };

// int main(){
//     struct vector v1,v2;
//     v1.x = 45;
//     v1.y = 456;
//     printf("X dimension is %d , Y dimension is %d \n" ,v1.x, v1.y);

//     v2.x = 45;
//     v2.y = 456;
//     printf("X dimension is %d , Y dimension is %d \n" ,v2.x, v2.y);
    
//     return 0;
// }





// WRITE A FUNCTION SUMVECTOR WHICH RETURNS THE SUM OF TWO VECTIOR PAASEED TO IT
// VECTOR MUST BE IN TWO DIM 






// #include<stdio.h>
// struct vector{
//     int x ;
//     int  y;
// };

// struct  vector sumvector( struct vector v1 ,struct vector v2 ){
//     struct vector result;
//     result.x = v1.x+v1.y;
//     result.y = v2.x+v2.y;
// }

// int main(){
//     struct vector v1,v2 ,sum;
//     v1.x = 45;
//     v1.y = 45;
//     printf("X dimension is %d , Y dimension is %d \n" ,v1.x, v1.y);

//     v2.x = 45;
//     v2.y = 60;
//     printf("X dimension is %d , Y dimension is %d \n" ,v2.x, v2.y);
//     sum = sumvector(v1, v2);
//     printf(" X dim result is %d , Y dim result is %d" , sum.x , sum.y);
    
    
//     return 0;
// }




// CREATE AN ARRAY OF 5 COMPLEX NO CREATED IN PROB 5 & DISPLAY THEN
// WITH THE HELP OF DISPLAY FUN. VAL TAKEN BY USER


// #include<stdio.h>
// typedef struct complex{
//     int real;
//     int complex;

// } comp;

// void display(comp c){
//     printf("The value of real no is %d \n ", c.real);
//     printf("The value of complex no is %d \n ", c.complex);
// } 

// int main(){
//     comp cnum[5];
//     for(int i=0; i<5 ;i++){
//         printf("Enter the value of real number %d \n" ,i+1);
//         scanf("%d" , &cnum[i].real);

//     }
//     for(int i=0; i<5 ;i++){
//         printf("Enter the value of complex number %d \n" ,i+1);
//         scanf("%d" , &cnum[i].complex);

    
//     }

//     for(int i=0; i<5 ;i++){
//         display(cnum[i]);
//     }


    
//     return 0;
// }




// WRITE A STRUCTURE CAPABLE OF STORING DATE , WRITE A FUNCTION  TO COMPARE OF THOSE DATE

// #include<stdio.h>
// typedef struct date{
//     int day ;
//     int month ;
//     int year;

// }date;
// void display(date c){
//     printf("Date is %d/%d/%d \n" , c.day , c.month , c.year);
// }


// int datecomp(date c1, date c2){
//     if(c1.year>c2.year){
//         return 1;
//     }

//      if(c1.year<c2.year){
//         return -1;
//     }
//     return 0;
// }



// int main(){
//     date c1={ 23, 3, 2023};
//     display(c1);

//     date c2={ 23, 3, 2024};
//     display(c2);

//     int a  = datecomp(c1, c2);
//     printf("%d \n" , a);
    
    
//     return 0;
// }






















