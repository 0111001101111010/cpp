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
	b1= 0, b2= 0, b3= 0, 
	c1= 0, c2= 0, c3=-0;

double x=0, y=0, z=0; 
/*! Initalize Doubles X, Y, Z
* 	Hold triangle length size based off points inputted 
*/ 

bool go = false, triangle = false; 

/*! Initalize  Bools
* 	Bool Go is a control flag for the while loop
*   Bool Triangle is the determination if it is a triangle  
*/

ifstream inFile;
inFile.open(argv[1]);

/*! Initalize  Bools
*	Defining input from external file inFile 
*	opening the second file hopefully in a format of 
*
*	input.txt 
*    2 3 3
*    5 5 6
*	 4 7 8 
*/


/*! /brief Inputting
*enter three points or take from input
*	no input detected do coordinates 
*	infile 
*passed in input
*	input file 
*	coordinates
*/


while (inFile.eof() || go == false){
bool test = (argv[1]!=NULL);
if (test){
	inFile >> a1 >> a2>> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3; 
	cout << "FIRST  coordinates in ' X Y Z 'format: " << a1 << a2 << a3 << "\n";
	cout << "SECOND  coordinates in ' X Y Z 'format: " << b1 << b2 << b3 << "\n";
	cout << "THIRD  coordinates in ' X Y Z 'format: "  << c1 << c2 << c3 << "\n";
}
else{
	cout << "please enter first  coordinates in ' X Y Z 'format \n" ;
	cin >> a1 >> a2>> a3; 
	cout << "\nplease enter second coordinate in  ' X Y Z 'format \n" ;
	cin >> b1 >> b2 >> b3;
	cout << "\nplease enter third  coordinate in  ' X Y Z 'format \n" ;
	cin>>  c1 >> c2 >> c3; 
} 

/*!
* \brief Calculating the length between coordinates:  
*	X= calculating A->B
*	Y= calculating B->C
*	Z= calculating C->A	
*
*Testing it 
*double test = (pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2));
*	cerr << test << "\n";
*/	
	x = sqrt((pow((a1-b1),2)+ pow((a2-b2),2) + pow((a3-b3),2)));  
	y = sqrt((pow((b1-c1),2)+ pow((b2-c2),2) + pow((b3-c3),2)));
	z = sqrt((pow((c1-a1),2)+ pow((c2-a2),2) + pow((c3-a3),2)));
	cout << "\n\nYour coordinate lengths returned are (in X Y Z format): \n" << "X:" << x << " " << "Y:" << y <<  " " << "Z:" << z  << "\n\n";
/*!
*
*Calculating the length between coordinates 
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
*	determine type of triangle
*		iscosoles
*		scalene
*		equalateral
*	other attributes such as angle size
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
			cout << "the triangle is equalateral\n";
		else if  ((x==y) || ( y==z) || (z==z)) 
			cout << "the triangle is iscosoles\n";
		else 
			cout << "triangle is scalene \n";
	}
	else 
		cout << "this is NOT a triangle and the points are colinear\n\n";
	go = true;

}
	return 0;
}

