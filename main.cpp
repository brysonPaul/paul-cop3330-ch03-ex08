#include "std_lib_facilities.h"
#include <iostream>

int main() {
  int input;
	cin >> input;
	String evenOrOdd;

	if(input % 2 == 0){
		cout<<"the value "<< input << " is an even number";
	}
	else{
		cout<<"the value "<< input << " is an odd number";
	}

} 