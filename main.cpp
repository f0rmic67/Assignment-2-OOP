#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;

int main() {
	
	list l1;
	
	int choice;
	int num1 ,removeNum;
	
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
   		
   		if(choice == 1){
		   
   			cout<<"Please input the number you would like to add. Please do not go over 3 digits."<< endl;
   			while(!(cin >> num1) || cin.peek() != '\n' || num1 < 1 || num1 > 1000){
   				cout << "\nPlease enter an integer between one and 999: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
			   }
   			l1.insert(num1); //calls insert function
   		}
   		
   		else if(choice == 2){
		   
   			cout<<"\nPlease enter the number you would like to remove: ";
   			while(!(cin >> removeNum) || cin.peek() != '\n' || removeNum < 1 || removeNum > 1000){
   				cout << "\nPlease enter an integer between one and 999: ";
    			cin.clear();
    			cin.ignore(30000, '\n');  
			   }
			   l1.remove(removeNum);
   	}
   		else if(choice == 3){
		   
   			l1.display();
   		}
   		else if(choice == 4){
		   
   			cout << "\nExiting..." << endl;
   			
   		cout << endl;
	}
}
	while(choice != 4);
	
	
	
	return 0;
}
