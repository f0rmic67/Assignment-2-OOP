#include <iostream>
#include <string>
#include <cstdlib>
#include "list.h"

using namespace std;

List::list(){
	size = 2;
	point = new int[size];//makes point into an array where size is the maximum capacity
	for(int i = 0; i <size;i++){ // makes every value in point[] = 0
		point[i] = 0;
	}
}

void list::insert(const int value){
		
		if(point[size-1] != 0){
			cout<< "\nADDING SPACE\n";//adds two slots when array is filled
			size = size + 2;
		}
		for(int i = 0; i <size;i++){ 
		if(point[i] > 1000){ //makes the newly added slots in the array go to zero
			point[i] = 0;
		}
		}
		for(int i = 0; i <size;i++){
			if(point[i] == 0){
				point[i] = value;//sets the user input to the first array slot that is at zero.
				i = 1000;
			}
		}
}
	
}

void list::remove(const int value){
		for(int i = 0; i <size;i++){
			if(point[i] == value){
		
			}
		}
}

void list::display(void) const{
	cout <<"printing...\n";
	for(int i = 0; i <size;i++){ // prints every value of array
		cout << point[i];
		cout << "\n";
	}
}
