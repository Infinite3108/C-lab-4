#include<stdio.h>
void main(){
	float f,c;
	printf("Enter temperature in fahrenheit to get in celcius : \n");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("%f Fahrenheit = %f Celcius.",f,c);
	}