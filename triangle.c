#include<stdio.h>
void main(){
	float b,h;
	printf("Enter height and base of triangle to get area : \n");
	scanf("%f %f",&h,&b);
	printf("area of triangle with %.2f height and %.2f width : %.2f",h,b,h*b*0.5);
	}