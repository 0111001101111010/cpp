#include <iostream>
#include <cmath>
#include <iostream> 
#include <fstream>

using namespace std;

bool check(double , double , double );
int main(int argc, char **argv){

//argument parameters == 2

int a1= 2, a2= 2, a3= 6, 
	b1= 5, b2= 8, b3= 5, 
	c1= 10, c2= 8, c3=3;

double x=0, y=0, z=0; 
bool go = false, triangle = false; 
ifstream inFile("coordinate points .txt");
//enter three points or take from input
	//no input detected do coordinates 
	//infile 
	
//passed in input
//input file 
// coordinates
while (inFile.eof() || go == false){
	cout << "please enter first coordinates in ' X Y Z 'format \n" ;
	//cin >> a1 >> a2 >> a3;
	cout << "please enter second coordinates in ' X Y Z 'format \n" ;
	//cin >> a1 >> a2 >> a3;
	cout << "please enter third coordinate in ' X Y Z 'format \n" ;
	//cin >> a1 >> a2 >> a3;
	//operate on these points A,B,C
		//figure out length of A->B, B->C, C->A
	go = true;
}
	//calculating A->B
	x = sqrt((pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2)));  
	y = sqrt((pow((b1-c1),2)+ pow((b2-c2),2) + pow((b3-c3),2)));
	z = sqrt((pow((c1-a1),2)+ pow((c2-a2),2) + pow((c3-a3),2)));

	triangle = check(x,y,z);
	//is this a triangle?
	//are they colinear?
	//cerr << x << " " << y  << " "<< z;	
		//rule of lines
		//determine if colinear
		//determine type of triangle
			//iscosoles
			//scalene
			//equalateral
	if (triangle)
		cout << "this is a triangle and the points are NOT colinear";
	else 
		cout << "this is NOT a triangle and the points are colinear";

	return 0;
}
bool check(double a, double b, double c){

return (((a+b)>c)&&((a+c)>b)&&((b+c)>a));
}