#include <cmath>
#include <iostream>
using namespace std;
//#define db
unsigned long long int factorial(int n){
	unsigned long long int num = 1;
	for(int i = 2; i <= n; i++){
		num *= i;
	}
	if(n == 0){
		return 1;
	} else {
		return num;
	}
}
float cos(float x, int y){
	float num2 = 0;
	int power = 2;
	bool subtract = true;
	for(int i = 0; i < y; i++){
		if(subtract == true){
#ifdef db
	cout << "i: " << i << endl;
	cout << "power: " << power << endl;
	cout << "Power of x: " << pow(x,power) << endl;
	cout << "Factorial: " << factorial(power) << endl;
#endif		

	num2 -= pow(x,power)/(factorial(power));
			subtract = false;	
		} else if(subtract == false){
#ifdef db
	cout << "i: " << i << endl;
	cout << "power: " << power << endl;
	cout << "Power: " << pow(x,power) << endl;
	cout << "Factorial: " << factorial(power) << endl;
#endif	
			num2 += pow(x,power)/(factorial(power));
			subtract = true;
		}
		power += 2;
	}
	return 1+num2;
}
