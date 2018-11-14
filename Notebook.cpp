#include "Notebook.h"
using namespace std;

int main(int argc, const char * argv[]) 
{
	Notebook One, Two, Tree;
	One.set("Green", 95, 45);
	One.get();
	Two.set("Yellow", 90, 40);
	Two.get();
	Tree.set("Blue", 85, 55);
	Tree.get();
	cin.get();
	return 0;
}

