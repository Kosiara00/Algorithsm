#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#define ile 10

using namespace std;

int main() {
	double t[ile], min, max;

	srand(time(NULL));
for (int i = 0; i < ile; i++)
	{
		t[i] = (rand() % 100) + 1;
		cout << t[i] << endl;
	}
  
	min = max = t[0];
for (int i = 1; i < ile; i++) 
	{
		if (t[i] < min) min = t[i];
		if (t[i] > max) max = t[i];	
	}
cout << "\nThe lowest table element has the value: " << min
		 << "\nThe largest element in the table has the value: " << max;
return 0;
}
