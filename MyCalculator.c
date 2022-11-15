#include <stdio.h>
#include <math.h>
int main ()
{
 float valueOne,valueTwo;
 char op; //+,-,*,/,^,s,
 float answer;
 printf("Enter three numbers\n");
 scanf("%f%c%f",&valueOne,&op,&valueTwo);
 
 if(op=='+'){
 	answer=valueOne+valueTwo;
 	printf("%f%c%f=%f",valueOne,op,valueTwo,answer);
 	
 }
 else if(op=='-'){
 	answer=valueOne- valueTwo;
 	printf("%f%c%f=%f",valueOne,op,valueTwo,answer);
 }
 else if(op=='*'){
 	answer=valueOne* valueTwo;
 	printf("%f%c%f=%f",valueOne,op,valueTwo,answer);
 }
 else if(op=='/'){
 	answer=valueOne/valueTwo;
 	printf("%f%c%f=%f",valueOne,op,valueTwo,answer);
 }
 else if(op=='^')
 {
 	answer=pow(valueOne,valueTwo);
 	printf("%f%c%f=%f",valueOne,op,valueTwo,answer);
 }
 else if(op=='s')
 { 
    answer=sqrt(valueOne);
    printf("sqrt of %f is %f ",valueOne,answer);
 }
 
return 0;

}
