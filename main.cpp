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
	
	while(!(cin >> setlist) || cin.peek() != '\n' || setlist != 1 && setlist != 2)    //allows user to work with the Set or List array
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
	
		while(!(cin >> choice) || cin.peek() != '\n' || choice < 1 || choice > 4)    //allows user to make a choice for the menu
   		{	
    		cout << "\nPlease enter an integer between one and four: ";
    		cin.clear();
    		cin.ignore(30000, '\n');            
   		}
   		
   		if(choice == 1)
		{
		   
   			cout<<"\nPlease input the nonzero number you would like to add: ";
   			
   			while(!(cin >> insertnum) || cin.peek() != '\n' || insertnum == 0)    //allows user to insert a number
			{
   				cout << "\nPlease enter an integer that is not zero: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
		    }
		    
		    if(setlist == 1)
		    	l1.insert(insertnum);    //if working with a list, the number is inserted
		    	
		    else if(setlist == 2)
		    	s1.insert(insertnum);    //if working with a set, the number is inserted only if not already in the array
   			
   			cout << endl;
   		}
   		
   		else if(choice == 2)
		{
		   
   			cout<<"\nPlease enter the nonzero number you would like to remove: ";
   			
   			while(!(cin >> removenum) || cin.peek() != '\n' || removenum == 0)    //allows user to remove a number
			{
   				cout << "\nPlease enter an integer that is not zero: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
			}
			
			if(setlist == 1)
				l1.remove(removenum);    //removes the first appearance of the number
			
			else if(setlist == 2)
				s1.remove(removenum);    //removes the number
			
			cout << endl;
   		}
   		
   		else if(choice == 3)    //allows user to display their List or Set
		{
			cout << endl;
			
			if(setlist == 1)
   				l1.display(); 
   				
   			else if(setlist == 2)
   				s1.display();
   		}
   		
   		else if(choice == 4)    //allows user to exit the program by ending the do-while loop
		{
   			cout << "\nExiting..." << endl << endl;
		}
		
	}while(choice != 4);
	
	return 0;
}
