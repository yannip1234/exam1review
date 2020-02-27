#include <iostream>
using namespace std;
#define DEBUG


int* mergeArray(int* a1, int* a2, int size1, int size2){	
int* array = new int[size1 + size2];
#ifdef DEBUG
	cout << "First Array" << endl;
#endif

	for(int i = 0; i < size1;i++){
#ifdef DEBUG
		cout << a1[i] << endl;
#endif
		array[i] = a1[i];	
	}

#ifdef DEBUG
	cout << "Second Array" << endl;
#endif

	int counter = 0;
	for(int i = size1; i < size1+ size2; i++){
#ifdef DEBUG
		cout << a2[counter] << endl;
#endif
		array[i] = a2[counter];
		counter++;
	}
#ifdef DEBUG
	cout << "Done" << endl;
#endif
	int temp;
	int j = 0;
	while(j < size1 + size2){
		for(int i = size1 + size2 -1; i > 0; i--){
			if(array[i] < array[i-1]){
				temp = array[i];
				array[i] = array[i-1];
				array[i-1] = temp;	
			}
		}
		j++;
	}
	return array;
}
