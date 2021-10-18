#include <iostream>
#include <cstdlib>
#include "set.h"

using namespace std;

int main() 
{
	
	List l1;
	Set s1;
	
	int choice, insertnum ,removenum, setlist;
	
	cout << "Would you like to use a List, which allows repeated numbers, or a Set, which does not?" << endl;
	cout << "Enter 1 for a List, or 2 for a Set: ";
	
	while(!(cin >> setlist) || cin.peek() != '\n' || setlist != 1 && setlist != 2)
	{
   		cout << "\nPlease enter 1 or 2: ";
    	cin.clear();
    	cin.ignore(30000, '\n');  
   	}
	
	do
	{
		cout << "Please enter the number of your desired action.\n" << endl;
		cout << "1. Insert nonzero number to list\n2. Remove first occurrence of number from list\n3. Print list\n4. Quit" << endl;
		cout << "\nNumber: ";
	
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
		    
		    if(setlist == 1)
		    	l1.insert(insertnum); 
		    	
		    else if(setlist == 2)
		    	s1.setinsert(insertnum);
   			
   			cout << endl;
   		}
   		
   		else if(choice == 2)
		{
		   
   			cout<<"\nPlease enter the nonzero number you would like to remove: ";
   			
   			while(!(cin >> removenum) || cin.peek() != '\n' || removenum == 0)
			{
   				cout << "\nPlease enter an integer that is not zero: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
			}
			
			if(setlist == 1)
				l1.remove(removenum); 
			
			else if(setlist == 2)
				s1.remove(removenum);
			
			cout << endl;
   		}
   		
   		else if(choice == 3)
		{
			cout << endl;
			
			if(setlist == 1)
   				l1.display(); 
   				
   			else if(setlist == 2)
   				s1.display();
   		}
   		
   		else if(choice == 4)
		{
   			cout << "\nExiting..." << endl << endl;
		}
		
	}while(choice != 4);
	
	return 0;
}
