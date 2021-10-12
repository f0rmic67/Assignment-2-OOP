#include <iostream>
#include <cstdlib>
#include "set.h"

using namespace std;

List::List()
{
	size = 2;
	
	point = new int[size](); //dynamically allocates point array, with size as capacity and all indexes set to zero
}

List::~List()
{
	delete[] point; //destructor, deletes dynamic array point to prevent memory leaks
}

int List::getsize() const  //size get function
{
	return size;
}

void List::setsize(const int s)  //size set function
{
	if(s > 0)
		size = s;
}

void List::insert(const int ins)
{
	if(point[size - 1] != 0)
	{
		addtwo();  //adds two new indexes to point array that are set to zero when the array is full 
	}
		
		
	if(ins != 0)
	{
		for(int count = 0; count < size; count++) //looks for the first occurrence of zero and inserts the user-defined int to that index
		{
			if(point[count] == 0)
			{
				point[count] = ins;  
				break;        //ends the for loop after inserting the number
			}
		}
	}
}

void List::remove(const int rem)
{
	if(rem != 0)
	{
		for(int count = 0; count < size; count++) //searches for index with value to be removed
		{
			if(point[count] == rem)
			{
				point[count] = 0;  //sets index with value to be removed as zero
			
				for(int index = count; index < size - 1; index++)	//uses swap function to shift all numbers after the removed value
				{                                                   //over so zero is now at the end of the array
					swap(point[index], point[index + 1]); 
				}
			
				break;
			}
		
			else if(count == size - 1)
				cout << "\nThe number you entered is not in this list." << endl;
		}
	}
}

void List::addtwo()
{
	int* temp = new int[size + 2]();    //creates temporary array with +2 indexes
	
	for(int count = 0; count < size; count++)
	{
		temp[count] = point[count];   //copies point array into temporary
	}

	size = size + 2;  //sets new size for point array
	
	point = temp;   //inserts values back into newly allocated point array, eliminates any possible junk data
	
	delete[] temp;
}

void List::swap(int& num1, int& num2)
{
	int temp;
	
	temp = num1;    //swaps values of adjascent array indexes
	num1 = num2;
	num2 = temp;
}

void List::display() const
{
	for(int count = 0; count < size; count++)
	{
		if(point[count] != 0)
		{
			cout << point[count] << "\n";  //displays each index value in a new line
		}
	}
	
	cout << endl;
}
