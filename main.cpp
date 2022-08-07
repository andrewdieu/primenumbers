#include <iostream>

using namespace std;

int main() {
   int inp;
   cin >> inp;
	for (int i = 0; i <= inp; i++)
	{ 
	   if (i == 1) // 1 is not prime
	   continue;
	   else if (i == 2 || i == 3 || i==5 || i==7) // 2,3,5,7 are prime numbers
	   cout << i <<  " ";
	   else if ((i % 2 == 1) && (i % 3 != 0) && (i % 5 != 0) && (i%7!=0)) // make sure it's not div by prime #
	   cout << i << " ";
	}

	/* Type your code here */

	return 0;
}