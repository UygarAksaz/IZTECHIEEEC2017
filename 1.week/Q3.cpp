#include<stdio.h>
int main(){
	int number1,number2,product,sum,subtraction;
	float division;
	
	printf("Your first number ");
	scanf("%d",&number1);
	printf("Your second number ");
	scanf("%d",&number2);
	
	product=number1*number2;
	printf("%d*%d=%d\n",number1,number2,product);
	sum=number1+number2;
	printf("%d+%d=%d\n",number1,number2,sum);
	subtraction=number1-number2;
	printf("%d-%d=%d\n",number1,number2,subtraction);
	if (number2!=0){
		division=number1/number2;
		printf("%d/%d=%0.2f\n",number1,number2,division);
		
	}
	else{
		printf("Division by zero error.\n");
	}
	
	return 0;
	
}
