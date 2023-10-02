#include<stdio.h>
void main(){
	float r;
	const float Pi=3.14;
	printf("Enter radius of circle to get area : \n");
	scanf("%f",&r);
	printf("area of circle with %f radius : %.2f",r,Pi*r*r);
	}