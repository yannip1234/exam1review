#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;
int main(){
	string date;
	string location;
	string userLocation;
	int temp;
	
	ifstream tempfile;
	tempfile.open("temperatures.txt");
	
	cout << "What city do you want to find the average temperature for: ";
	cin >> userLocation;
	
	float tempTotal = 0;
	int counter = 0;
	while(tempfile >> date >> location >> temp){
		if(location == userLocation){
			tempTotal += temp;
			counter++;
		}
	}
	if(counter == 0){
		return -1;
	}
	tempfile.close();
	cout << "The average temperature for " << userLocation << " is " << tempTotal/(float)counter << "." << endl;
	return 0;
}
