
#include <iostream>
using namespace std;

int main(){
	
	{
		auto number = 1.5;
		cout << "from iostream: " << number << endl;
		printf("from printf: %g \n", (double)number);
	}
	
	{
		auto number = 1;
		cout << "from iostream: " << number << endl;
		printf("from printf: %g \n", (double)number);
	}
}
