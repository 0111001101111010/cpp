/*If we list all the natural numbers below 10 that are multiples of 3 or 5
 we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.  */

#include <iostream> 

using namespace std;

int main(int argc, char** argv){
	
int three =1, five =1, check = 10000, test=100, temp =0, sum =0;

for (int i = 0; i <check; i++){
	if ((i%3==0) || (i%5==0))
		sum = sum+i;
}
cout << "all the values summed under 3 and 5 of" << check << endl; 
cout << "\nthe sum is " << sum<< endl;;
/*

Fail won't count off one
cerr << "before\n";
while (three<test){

three=three*3;
cout << three << " ";
sum = sum+three;
++temp;

}
cerr << "After\n";
cout << three << " " << sum;
*/
};