#include <iostream>
#include "Q2.h"
using namespace std;

int main() {
	int a[5] = {1,3,4,5,7};
	int b[11] = {0,2,5,8,9,12,13,48,15,11,22};
	int* c = mergeArray(a,b,5,11);
	for(int i=0; i < (5+11); i++) {
		cout << c[i] << endl;
	}
	return 0;
}
