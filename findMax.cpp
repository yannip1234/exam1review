#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string date;
	string location;
	int temp;
	int highest_temp = 0;
	ifstream tempfile;
	tempfile.open("temperatures.txt");
	
	while(tempfile >> date >> location >> temp){
		if(temp >= highest_temp){
			highest_temp = temp;
		} 
	}
	cout << highest_temp << endl;
}
