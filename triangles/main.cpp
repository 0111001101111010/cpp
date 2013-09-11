#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv){

int a1= 0, a2= 0, a3= 0, b1= 0, b2= 0, b3= 0, c1= 0, c2= 0, c3=0;
double x=0, y=0, z=0; 
bool continue = false, triangle = false; 
//enter three points or take from input
	//no input detected 
	cout << "please enter first coordinates in ' X Y Z 'format \n" ;
	cin >> a1 >> a2 >> a3;
	cout << "please enter second coordinates in ' X Y Z 'format \n" ;
	cin >> a1 >> a2 >> a3;
	cout << "please enter third coordinate in ' X Y Z 'format \n" ;
	cin >> a1 >> a2 >> a3;
	//operate on these points A,B,C
		//figure out length of A->B, B->C, C->A

	//calculating A->B
	x = sqrt(pow(a1-b1,2)+ pow(a2-b2,2) + pow(a3-b3,2));  
	y = sqrt(pow(b1-c1,2)+ pow(b2-c2,2) + pow(b3-c3,2));
	z = sqrt(pow(c1-a1,2)+ pow(c2,a2,2) = pow(c3-a3,2));	
		//rule of lines
		//determine if colinear
		//determine type of triangle
			//iscosoles
			//scalene
			//equalateral

	
}
