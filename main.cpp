#include <iostream>
#include <cstdlib>
#include "set.h"

using namespace std;

int main() {
	
	List l1;
	
	int choice;
	
	do
	{
		cout << "Please enter the number of your desired action.\n" << endl;
		cout << "1. Insert numbers to list\n2. Remove numbers from list\n3. Print list\n4. Quit" << endl;
		cout << "Number: ";
	
		while(!(cin >> choice) || cin.peek() != '\n' || choice < 1 || choice > 4)
   		{	
    		cout << "\nPlease enter an integer between one and four: ";
    		cin.clear();
    		cin.ignore(30000, '\n');            
   		}
   		
   		if(choice == 1)
   			l1.insert();
   			
   		else if(choice == 2)
   			l1.remove();
   			
   		else if(choice == 3)
   			l1.display();
   			
   		else if(choice == 4)
   			cout << "\nExiting..." << endl;
   			
   		cout << endl;
	}
	while(choice != 4);
	
	l1.~List();
	
	return 0;
}
