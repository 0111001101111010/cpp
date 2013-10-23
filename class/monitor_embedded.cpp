#include <cstdlib> 
#include <time>
#include 'monitor.c'

using namespace std;

monitor bounded_buffer 
{
int items[MAX_ITEMS];
int numItems = 0;
condition full, empty;
void produce(int v) 
{ while (numItems == MAX_ITEMS)
full.wait();
items[numItems++] = v;
empty.signal();
}
int consume() 
{ int retVal;
while (numItems == 0)
empty.wait();
retVal = items[--numItems];
full.signal();
return retVal;
}
}

int main(int argc, char* argv[]){

//begin the loop
bounded_buffer();
//pass it in.

}