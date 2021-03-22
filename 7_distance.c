//Program to calculate euclidean distance between two points in a plane.
#include<stdio.h>//header file   
#include<math.h> //header file to include mathematical function. 
  
int main()  //main function  
{  
    float x1, y1, x2, y2, distance;  
  
    printf("Enter point 1 (x1, y1)\n");  
    scanf("%f%f", &x1, &y1);  //scanning the input 
  
    printf("Enter point 2 (x2, y2)\n");  
    scanf("%f%f", &x2, &y2);  //scanning the input 
  
    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ); // formula 
  
    printf("Distance between (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n", x1, y1, x2, y2, distance); //output  
  
    return 0;  
} 
