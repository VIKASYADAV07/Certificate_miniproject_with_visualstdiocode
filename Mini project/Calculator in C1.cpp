/*in this Program i have use multiple program using C programing language.
1.First Program is Calculator using if and else , switch case statement.
2.second program is calculating Compound interest , principle , rate and time.
3. Third program is Calculating Percentage for 5 subject.
4. Fourth area of the room*/

#include <stdio.h>
#include<math.h>  
int main()  
{  
    // declare local variables  
    char opt;  
    int n1, n2;   
    float res;
	 float p,r,t,ci;  // These varible for Compound  interest. 
	 int sub,marks,n,i,sum=0,tmp=0,arr[10],Percentage;   //for percentage
	 int side, area;  //for area of the room
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &opt); // take an operator  
    if (opt == '/' )  
    {  
        printf (" You have selected: Division");  
    }  
    else if (opt == '*')  
    {  
        printf (" You have selected: Multiplication");  
     }  
       
    else if (opt == '-')  
    {  
        printf (" You have selected: Subtraction");  
     }  
        else if (opt == '+')  
    {  
        printf (" You have selected: Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1); // take fist number  
    printf (" Enter the second number: ");  
    scanf (" %d", &n2); // take second number  
      
    switch(opt)  
    {  
        case '+':  
            res = n1 + n2; // add two numbers  
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1 - n2; // subtract two numbers  
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
            break;  
              
        case '*':  
            res = n1 * n2; // multiply two numbers  
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);  
            break;            
          
        case '/':  
            if (n2 == 0)   // if n2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2; // divide two numbers  
            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
            break;  
        default:  // use default to print default message if any condition is not satisfied */  
            printf (" Something is wrong!! Please check the options ");               
    }  
 
{     //  compund interest
        printf("Enter Principle, Rate and Time: ");  // We have to put the value 
    
	   scanf("%f%f%f",&p,&r,&t);   
            
			  ci=p*pow((1+r/100),t);   // Calculate compound interest

        printf("Bank Loans Compound Interest = %f%",ci); 
}       
        //percentage
   

      printf("\nEnter number of subject : \n");
   scanf("%d", &n);
   
   tmp=n*100;
   
   printf("\nEnter The Marks: \n");
   for(i=0;i<n;i++)
   {
    scanf("%d", &arr[i]);
   }

   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   } 
   
  {
    Percentage = ( sum * 100 ) / tmp;
   
   printf("\nPercentage Of Student : %d\n", Percentage);
}  
      // area of the room
  // int side, area;
 
   printf("\nEnter the Length of Side : ");
   scanf("%d", &side);
 
   area = side * side;
   printf("\nArea of Square : %d", area);
    return 0;  
}  
