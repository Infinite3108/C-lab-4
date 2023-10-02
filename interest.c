#include<stdio.h>
void main(){
	float p,n,r;
	printf("Value of principle, time(in year) and rate to calculate simple interest : \n");
	scanf("%f %f %f",&p,&n,&r);
	printf("Simple interest : %.2f",p*n*r/100);
	}