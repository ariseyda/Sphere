#include<stdio.h>
#include<math.h>
#define PI 3.14

//A computer program receives two inputs. First input is circle’s radius. 
//Second input is operation selection; circumference or area of circle. 
//If selection input is ‘c’ or ‘C’, circumference of the circle is computed and displayed. 
//Else if selection input is ‘a’ or ‘A’, area of the circle is computed and displayed. 
//Else if selection input is ‘v’ or ‘V’, volume of sphere is computed and displayed. Else a message that says “invalid selection.” Is displayed.

int main(){
	
	float radius;
	char n;
	float area;
	float volume;
	float circumference;
	
	
	
	
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	
	printf("Enter your choice:(a,A,v,V,c,C)\n");
	scanf(" %c",&n);
	
	if(n=='a'|| n=='A'){
		
		area=4.0*PI*(radius*radius);
		
		printf("Area of sphere:%f",area);
				
	}
	
	else if(n=='v'|| n=='V'){
		
		volume=(4.0/3)*PI*(radius*radius*radius);
		printf("Volume of sphere:%f",volume);
		
	}
	
	else if(n=='c'|| n=='C'){
		
		circumference=(2.0*PI*radius);
		printf("Circumference of sphere:%f",circumference);
		
		
	}
	
	else
	   printf("Please enter a valid option.");
	
	
	
	return 0;
}

