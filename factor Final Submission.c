/*C program by Abdullah MMohammad Mahi for Cs 1310, instructor Dr. Carol Redfield. 
*This program will calucate the factors, prime factors, Great Common Facotr and Least 
*Common Multiple by using your two given values.
          __  __ __  __ 
    /\   |  \/  |  \/  |
   /  \  | \  / | \  / |
  / /\ \ | |\/| | |\/| |
 / ____ \| |  | | |  | |
/_/    \_\_|  |_|_|  |_|

*/
#include<stdio.h>


int take_a_number(void) 

/* asking for a positive integer */
{
	int num; /* input value, must be >0 */
	
	 
    do{ /*runing the same program again and again for giving a value that is lower than 0*/
		printf("\nPlease type a positive integer value to proceed further: ");
		scanf ("%i", &num);
		printf("You entered %i.\n", num);		
	}while (num <= 0); /* condition for which the program will run again*/
	return num;
}



int factors_of_the_number(int num) 

/* calculating factors for a given positive integer*/
{   
    /* count is printing the factors for the number*/
 	int count; 
 	printf("\nThe factors of your given number %i are: ", num);
 	for (count=1; count <=num; count++) /*starting from 1 going to less than or equal to the given number*/  
 	{
  		if( num % count==0) /*checking divisibility of num for count*/
 			printf("%i ", count); /*if divisible print count*/
 	}	
}


int prime_factors (int num)  

/* calculating prime factors for a given positive integer*/
{ 
   int count=1;
   
   printf("\nThe prime factors of this number %i are: ", num); /*Used Professor Dr. Carol Redfield's Program*/
   while (count < num )                                      	
   		{count=count+1;		
   		 if (num % count==0)
    	  {
		    printf("%i ", count);	
  		 	num= num/count;
  		 	count= count-1;	   
		  }      
		}
}


/*calculating greatest common factors for two given positive integers*/
int Greatest_Common_Factor( int num1, int num2) 

{
    int i=1, gcd;  /*gcd storing the value of GCF*/
    
    while( i <= num1 && i <= num2 ) /*starting from 1 going while i is less than or equal num1 and num2*/
      {   
		i++;  /*incrementing eveytime*/
    	if(num1 %i==0 && num2%i==0)  /*checking divisibility for both given numbers*/     	
			gcd = i;  /*storing value in gcd when it is divisible*/ 
      } 
    printf("\n\nThe Greatest Common Factor of your first and second number is : %i \n", gcd);
	
}
  
  
/*calculating least common multiple for two given positive integers*/  
int Least_Common_Multiple( int num1, int num2)
{
	int alpha=1, lcm;
	lcm = (num1>num2) ?  num1 : num2;  /*ternary operation to check grater num and place it in lcm*/
	while(alpha) 
  	{
  		
  	/*checking the divisibility for both numbers for being lcm*/
	if (lcm%num1==0 && lcm%num2==0)
	{
		printf("The Least Common Multiple of your first and second number is : %i ", lcm);
		alpha=0;}	
        lcm++;   /*incrementing lcm and going to look for the highest value*/
 		}
}



void main(void)
{

	int var1, var2;
	char playAgain;
	
	printf("--------------------------Welcome to The Factoring Program!-------------------------- \n");	
	/*Welcoming message for the users at the entrance of the program*/

do{	var1=take_a_number();
	var2=take_a_number();

	factors_of_the_number (var1);    /*using the function and entering the value inside the function */
	factors_of_the_number (var2);
	
	prime_factors(var1);
	prime_factors(var2);
	
	Greatest_Common_Factor(var1, var2);
	Least_Common_Multiple (var1, var2);	
	
	printf("\n\nDo you want to play again? Enter 'Y' if yes and 'N' if no:");
    scanf(" %c", &playAgain);
    
}while(playAgain == 'Y');
	
printf("\n\n--------------------------Thank you for using The Factoring Program!--------------------------");
printf("\nRate Us 5 star (*****) in the Professor Dr. Carol Redfield's Classes\n\n");
}

