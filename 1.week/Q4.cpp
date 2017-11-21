#include<stdio.h>
int main(){
	float tl,euro,dolar,sterlin,e,d,s;
	
	
printf("Please enter amount of money:");
scanf("%f",&tl);

e=4.66;
d=3.96;
s=5.25;


euro= tl*e;
dolar= tl*d;
sterlin= tl*s;

printf("Your price %f TL = %f $ , %f €, %f £",tl,dolar,euro,sterlin);

return 0;

}

