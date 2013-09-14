/*! \brief Brief description.
 *         
 *
 *  Detailed description starts here.
 */

#include <iostream>
#include <cmath>
#include <iostream> 
#include <fstream>

using namespace std;

int main(int argc, char **argv){


/*!
argument parameters == 2
ex: usage ./triangle inputFile

otherwise if argument parameters ==1 
ex usage ./triangle 

*/

/*! \Brief Initalizing variables
 *         
 *
 * There are initalizations of all the vector points
 * In testing all point are of type INTEGERS 
 */
int a1= 0, a2= 0, a3= 0, 
	b1= 100, b2= 100, b3= 100, 
	c1= -1000,c2= -1000, c3=-1000;

double x=0, y=0, z=0; 
/*! Initalize Doubles X, Y, Z
* 	Hold triangle length size based off points inputted 
*/ 


/*! Initalize  Bools
* 	Bool Go is a control flag for the while loop
*   Bool Triangle is the determination if it is a triangle  
*/
bool go = false, triangle = false; 
ifstream inFile;
inFile.open(argv[1]);
/*!
enter three points or take from input
	no input detected do coordinates 
	infile 
passed in input
	input file 
	coordinates
*/

/*
while (inFile.eof() || go == false){
	cout << "please enter first coordinates in ' X Y Z 'format \n" ;
	cout << "please enter second coordinates in ' X Y Z 'format \n" ;
	cout << "please enter third coordinate in ' X Y Z 'format \n" ;
	go = true;
}
/*!
Calculating the length between coordinates:  
	X= calculating A->B
	Y= calculating B->C
	Z= calculating C->A	

Testing it 
double test = (pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2));
	cerr << test << "\n";

*/	
	x = sqrt((pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2)));  
	y = sqrt((pow((b1-c1),2)+ pow((b2-c2),2) + pow((b3-c3),2)));
	z = sqrt((pow((c1-a1),2)+ pow((c2-a2),2) + pow((c3-a3),2)));
	cout << "Your coordinate lengths returned are (in X Y Z format): \n\n" << x << " " << y <<  " " << z  << "\n\n";
/*!
*
*Calculating the length between coordinates 
*	calculating A->B
*	calculating B->C
*	calculating C->A	
*/

	triangle = (((x+y)>z)&&((x+z)>y)&&((y+z)>x));
/*!
is this a triangle?
are they colinear?
cerr << x << " " << y  << " "<< z;	
	rule of lines
	determine if colinear
	determine type of triangle
		iscosoles
		scalene
		equalateral
	other attributes such as angle size
		Acute
		Right Obtuse
		Angeled
*/

/*!
 Determines if its a triangle
*/
	if (triangle)
		cout << "this is a triangle and the points are NOT colinear";
	else 
		cout << "this is NOT a triangle and the points are colinear";

	return 0;
}

