

#include <iostream>
#include <cmath>
#include <iostream> 
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv){

/*!

Quickstart 
================
Briefing
-------------------
From the lecture: 
Allow the user to enter from the keyboard three points in 3D space. or have the option of generating randomly from -100 and +100 in each direction


Usage
---------------
Is the input points (X,Y) or is it (X,Y,Z) Input as a coordinate point..

Run with an input file
--------------------------
argument parameters == 2
ex: usage ./triangle inputFile

Run manually
------------------
otherwise if argument parameters ==1 
ex usage ./triangle 
*/
/*!
Variable initialize
======================
*/

/*!
Initalizing Integers
--------------------------        
 *
 * There are initalizations of all the vector points
 * In testing all point are of type INTEGERS
 */
int a1= 0, a2= 0, a3= 0, 
	b1= 0, b2= 0, b3= 0, 
	c1= 0, c2= 0, c3=-0;

double x=0, y=0, z=0; 
/* 
Initalize Doubles X, Y, Z
---------------------------
/*! 	Hold triangle length size based off points inputted 
*/ 

bool go = true, triangle = false; 

/*
Initalize  Bools 
-----------------------
* 	Bool Go is a control flag for the while loop
*   Bool Triangle is the determination if it is a triangle  
*/

ifstream inFile;
inFile.open(argv[1]);

/*! 
Initalize  Input Stream
=================
*	Defining input from external file inFile 
*	opening the second file hopefully in a format of input
Input.txt
----------------
	2 3 4

	3 4 5

	6 3 5


Inputting Logic
===================
enter three points or take from manual kebyoard
----------------------------------

	no input detected do coordinates 		
	input the file through the keyboard by prompting the user	
	calculate triangle lengths		
	make determinations about triangle or NOT 	
	after the user is finished ask them if they want to go again		  

![passed in](../../Images/manual.png)
passed in input
-----------------

	input file from second argument parameter
	calculate triangle lengths	
	make determinations about triangle or not 	
	after the user is finished ask them if they want to go again	  

![passed](../../Images/input.png)
Randomally
---------------		

	generate an array of size 201 containing range of -100 to 100			
	to form coordinates, pull 3 random numbers in the array				
	calculate triangle lengths				
	make determinations about triangle or not 				
	after the user is finished ask them if they want to go again	

![Random](../../Images/random.png)

After finished
------------------------
Would you like to try out another set of coordinates?: 
	Enter 1 for YES 
	Enter 0 for NO or CTR+C to end the program:
*/

std::vector<int> myInts;
for (int i = -100; i < 100; ++i)	
	myInts.push_back(i); // Sets myInts to [-100 ... 100]

random_shuffle(myInts.begin(), myInts.end());

cout << "Welcome to Pointy's Triangle determiner \n\n"; 
while (inFile.eof() || go == true){
bool test = (argv[1]!=NULL);
if (test){
	inFile >> a1 >> a2>> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3; 
	cout << "FIRST  coordinates in ' X Y Z 'format: " << a1 << " "<< a2 << " "<< a3 << "\n";
	cout << "SECOND  coordinates in ' X Y Z 'format: " << b1 << " "<< b2 << " "<< b3 << "\n";
	cout << "THIRD  coordinates in ' X Y Z 'format: "  << c1 << " "<< c2 << " "<< c3 << "\n";
}
else{
int random;
cout << "Did you want to randomally generate a set?\nEnter a seed integer greater than 1 FOR RANDOM\nEnter 0 for Manual\n";
cin >> random;
if (random>0){
	cout << "\n\n\n\n\n\n";
	random = random %200;
	a1 = myInts[random];
	a2 = myInts[random+1];
	a3 = myInts[random+2];
	b1 = myInts[random+3];
	b2 = myInts[random+4];
	b3 = myInts[random+5];
	c1 = myInts[random+6];
	c2 = myInts[random+7];
	c3 = myInts[random+8];
	cout << "FIRST  coordinates in ' X Y Z 'format: " << a1<< " " << a2<< " " << a3<< " " << "\n";
	cout << "SECOND  coordinates in ' X Y Z 'format: " << b1<< " " << b2<< " " << b3 << " "<< "\n";
	cout << "THIRD  coordinates in ' X Y Z 'format: "  << c1 << " "<< c2<< " " << c3 << " "<< "\n";
}
else{
	cout << "please enter first  coordinates in ' X Y Z 'format \n" ;
	cin >> a1 >> a2>> a3; 
	cout << "\nplease enter second coordinate in  ' X Y Z 'format \n" ;
	cin >> b1 >> b2 >> b3;
	cout << "\nplease enter third  coordinate in  ' X Y Z 'format \n" ;
	cin>>  c1 >> c2 >> c3; 
}
} 

/*!
Calculating the length between coordinates: 
=================================================
*/
/*!
*	X= calculating A->B
*	Y= calculating B->C
*	Z= calculating C->A	
*
Testing it
============
*  Run these short tests to make sure the correct output is expected 	

double test = (pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2));	
cerr << test << "\n";	
*/	
	x = sqrt((pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2)));  
	y = sqrt((pow((b1-c1),2)+ pow((b2-c2),2) + pow((b3-c3),2)));
	z = sqrt((pow((c1-a1),2)+ pow((c2-a2),2) + pow((c3-a3),2)));
	cout << "\nYour coordinate lengths returned are (in X Y Z format): \n" << "X:" << x << " " << "Y:" << y <<  " " << "Z:" << z  << "\n\n";
/*!
*
*Calculating the length between coordinates 
------------------------------------------
*	calculating A->B  	
*	calculating B->C 	
*	calculating C->A 		
*/

	triangle = (((x+y)>z)&&((x+z)>y)&&((y+z)>x));
/*!
*is this a triangle?
*are they colinear?
*cerr << x << " " << y  << " "<< z;	i
*	rule of lines
*	determine if colinear
-------------------------------
compare using the rule of lines. Is triangle if 
A + B > C
B + C > A
A + C > B
*	determine type of triangle
------------------------------------
*		iscosoles
*		scalene
*		equalateral
*	other attributes such as angle size
----------------------------------------
*		Acute
*		Right 
*		Obtuse
*		
*/

/*! \brief Determines if its a triangle and of what type
* Equalateral if X == Y == Z 
*/
	if (triangle){
		cout << "this is a triangle and the points are NOT colinear \n";

		//!Equalateral
		if ((x==y)&& (y==z))
			cout << "the triangle is equalateral and cannot be a right riangle\n";
		else if  ((x==y) || ( y==z) || (x==z)) 
			cout << "the triangle is iscosoles and could be a right triangle\n";
		else 
			cout << "triangle is scalene and could be a right triangle \n";

	cout << "\n\n\n\n\n\n";
	}
	else 
		cout << "this is NOT a triangle and the points are colinear\n\n\n\n\n";

	cout << "Would you like to try out another set of coordinates?\nEnter 1 for YES \nEnter 0 for NO or CTR+C to end the program:\n";
	cin >> go; 
	cout << "\n\n\n\n\n\n";

}
	return 0;
}

