#include <iostream>
using namespace std;
int h;
int n;
int i;
int width = 0;
int main()
{
 
	cin>>n>>h;
	for (int m = 1; m<=n; m++) {
		cin>>i;
		if (i > h) {
			width++;
		}
		width++;
 
	}
	cout << width << endl;
	return 0;
}
