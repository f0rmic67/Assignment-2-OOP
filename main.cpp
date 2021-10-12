#include <iostream>
#include <cstdlib>
#include "set.h"

using namespace std;

int main() 
{
	
	List l1;
	
	int choice, insertnum ,removeNum;
	
	do
	{
		cout << "Please enter the number of your desired action.\n" << endl;
		cout << "1. Insert nonzero number to list\n2. Remove first occurrence of number from list\n3. Print list\n4. Quit" << endl;
		cout << "Number: ";
	
		while(!(cin >> choice) || cin.peek() != '\n' || choice < 1 || choice > 4)
   		{	
    		cout << "\nPlease enter an integer between one and four: ";
    		cin.clear();
    		cin.ignore(30000, '\n');            
   		}
   		
   		if(choice == 1)
		{
		   
   			cout<<"\nPlease input the nonzero number you would like to add: ";
   			
   			while(!(cin >> insertnum) || cin.peek() != '\n' || insertnum == 0)
			{
   				cout << "\nPlease enter an integer that is not zero: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
		    }
		   
   			l1.insert(insertnum); 
   			
   			cout << endl;
   		}
   		
   		else if(choice == 2)
		{
		   
   			cout<<"\nPlease enter the nonzero number you would like to remove: ";
   			
   			while(!(cin >> removeNum) || cin.peek() != '\n' || removeNum == 0)
			{
   				cout << "\nPlease enter an integer that is not zero: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
			}
			
			l1.remove(removeNum); 
			
			cout << endl;
   		}
   		
   		else if(choice == 3)
		{
			cout << endl;
			
   			l1.display(); 
   		}
   		
   		else if(choice == 4)
		{
   			cout << "\nExiting..." << endl << endl;
		}
		
	}while(choice != 4);
	
	return 0;
}
