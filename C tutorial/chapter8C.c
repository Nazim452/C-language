// #include<stdio.h>

// int main(){
//     char str[] = "Nazim"; // or char str[] = {'n' , 'a', 'z' , 'i', 'm' \0}
//     char *ptr = &str;                                 // >-- \0 denote end of string
//     while (*ptr!='\0'){
//         printf("%c", *ptr);
//         ptr++;
//     }
    
//     return 0;
// }




// ONE LINE CODE FOR PRINT STRING


// #include<stdio.h>

//     int main(){
//     char ptr[] = "NAZIM KHAN";  // or   char *ptr = "NAZIM KHAN"; 
//     printf("%s", ptr);
    
//     return 0;
// }


//INPUTTING IN STRING USING ARRAY


// #include<stdio.h>

// int main(){
//     char s[30];
//     printf("Enter your name:-  ");
//     scanf("%s" ,s);

//     printf("Your name is %s",s);
    
//     return 0;
// }


// INPUT OF STRING THROUGH GETS -- BENEFIT - nazim khan able to print (space can do print)

// #include<stdio.h>

// int main(){
//     char s[30];
//     printf("Enter your name:-  ");
//     gets(s);
//     puts(s);    // benifis of puts - no need to writ --printf("Your name is %s",s);

//     //printf("Your name is %s",s);
    
//     return 0;
// }



// STRING DEFINED USING POINTER CAN BE REINITIALISED 

// #include<stdio.h>

// int main(){
//     char *ptr ="Nazim";  
    
//     ptr = "sengunthar"; 
//     printf("%s", ptr);
    
//     return 0;
// }


// STRLEN --- LENGTH OF STRING

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char *ptr ="Nazim";
//     int a = strlen(ptr);
//     printf("The length of string is %d" , a);
    
//     return 0;
// }




// STRCPY 


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char * st = "Nazim";
//     char st2[20];
//     strcpy(st2 , st);


//     printf("Now th st2 is %s " ,st2);
    
//     return 0;
// }


// STRCAT  - library add two string



// #include<stdio.h>
// #include<string.h>

// int main(){
//     char st[45] = "Nazim";
//     char * st2 = "Hero";
    
//     strcat(st , st2);


//     printf("Now the st1 is %s " ,st);
    
//     return 0;
// }



// STRCMP - library

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s1[30] = "Hello";
//     char *s2 = "Nazim";
//     int  val = strcmp(s1, s2) ;
//     printf("%d" , val);
    
//     return 0;
// }



 
// TAKE STRING AS INPUT FROM THE USER USING %C AND %S . CONFIRM THAT STRINGS ARE EQUAL



// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s1[34];
//     char s2[34];
//     char c;
//     int i =0;


//     printf("ENter  the value of string: ");
//     scanf("%s ", s1);
//     printf("Enter the value of string character by character \n");

//     while (c!='\n'){
//         fflush(stdin);
//         scanf("%c", &c);
//         s2[i] = c;
//         i++;
//     }
//     s2[i-1] = '\0';

//     printf("The value of s1 is %s \n",s1);
//     printf("The value of s2 is %s \n",s2);

//     printf("strcmp for these string return %d " , strcmp(s1,s2));

   
    
    
//     return 0;
// }





// WRITE OUR VERSION OF STRLEN FUNCTION FROM STRING





// #include<stdio.h>
// int strlen(char *st){
//     char *ptr = st;
//     int len = 0;
//     while (*ptr!='\0'){
//         len++;
//         ptr ++;
//     }
//     return len;
    
    
// }

// int main(){
//     char st[] = "Nazim";
//     int l = strlen(st);
//     printf("The value of length is %d",l);
    
//     return 0;
// }




// WRITE A FUNCTION TO   SLICE A STRING  


// #include<stdio.h>
// void slice(char *st ,int m ,int n){
//     int i=0;
//     while ((m+i)<n){
//         st[i] = st[i+m];
//         i++;
//     }
//     st[i] ='\0';
// }
// int main(){
//     char st[] = "NazimKhan";
//     slice(st, 1,5);
//     printf("%s" , st);
    
//     return 0;
// }


// WRITE A PROGRAM  TO INCRYPT STRING BY ADDING 1 TO THE ASCII VALUE OF ITS CHAR



// #include<stdio.h>
// void incrypt(char *st ){
//     char *ptr = st;
//     while(*ptr!= '\0'){
//         *ptr = *ptr +1;
//         ptr++;    }
// }

// int main(){
//     char st[] = "Nazim";
//     incrypt(st);
//     printf("Incrypted value is %s" ,st);
    
//     return 0;
// }





// FOR DECRYPT



// #include<stdio.h>
// void decrypt(char *st ){
//     char *ptr = st;
//     while(*ptr!= '\0'){
//         *ptr = *ptr -1;
//         ptr++;    }
// }

// int main(){
//     char st[] = "Ob{jn";
//     decrypt(st);
//     printf("Incrypted value is %s" ,st);
    
//     return 0;
// }



// COUNT TO THE OCCURANCE OF A GIVEN CHARACTER IN A STRUNG



// #include<stdio.h>
// int occurance(char *st , char c){
//     char *ptr = st;
//     int count =0;
//     while(*ptr!='\0'){
//         if (*ptr==c){
//             count++;
//         }
//         ptr++;
//     }
//     return count;

    
// }

// int main(){
//     char st[] = "NazimKhan";
//     int count = occurance(st, 'n');
//     printf("The occurance of given letter is %d" ,count);
    
    
//     return 0;
// }


































