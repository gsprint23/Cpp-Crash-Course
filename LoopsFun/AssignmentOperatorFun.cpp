#include <iostream>

using namespace std;

int main() {
	int x = 2;
	int i = 0, j = 0, k = 0;
	
	cout << x << endl;
	//x = x + 5;
	x += 5;
	cout << x << endl;
	
	// task: try out the shorthand assignment operators
	// -= *= /= %=
	
	cout << i << " " << j << " " << k << endl;
	i = 2;
	cout << i << " " << j << " " << k << endl;
	j = 3 + i++;
	cout << i << " " << j << " " << k << endl; 
	k = 3 + ++i;
	cout << i << " " << j << " " << k << endl; 
	i *= ++k + j--; // i = i * (++k + j--);
	cout << i << " " << j << " " << k << endl;
	i /= k-- + ++j; // i = i / (k-- + ++j);
	cout << i << " " << j << " " << k << endl;



	return 0;
}
