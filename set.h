/*

CLASS PROVIDED: List

CONSTRUCTOR and DESTRUCTOR for the List class:
  List()
    Description:    Constructor will initialize List objects
    Preconditions:  None
    Postcondition:  Point dynamic array is created with size of 2
    
  ~List()
    Description:    Destructor will delete the point dynamic array
    Preconditions:  none
    Postcondition:  Point array is deleted
    
MODIFICATION MEMBER FUNCTIONS for List class
  void setsize(const int)
    Description:    sets the value of size
    Preconditions:  value is greater than zero
    Postcondition:  size of List dynamic array is set
  
  void insert(const int)
    Description:    inserts user input value to the dynamic array
    Preconditions:  value is not zero
    Postcondition:  value is added at the end of the array
  
  void remove(const int)
    Description:    first instance of user input value is removed from the array
    Preconditions:  value is not zero
    Postcondition:  value is removed from the array
  
  void addtwo()
    Description:    adds two indexes with value of zero to the end of the dynamic array
    Preconditions:  none
    Postcondition:  Array has two more index values
  
  void swap(int&, int&)
    Description:    swaps two index values in the dynamic array
    Preconditions:  parameters are valid index values
    Postcondition:  Index values are swapped
    
CONSTANT MEMBER FUNCTIONS for the List class
  int getsize() const
    Description:    returns the value of size
    Preconditions:  none
    Postcondition:  value of size is returned
  
  void display() const
    Description:    displays all dynamic array stored values other than zero
    Preconditions:  none
    Postcondition:  All array values other than zero are printed
  
CLASS PROVIDED: Set

MODIFICATION MEMBER FUNCTIONS for Set class
  void setinsert(const int)
    Description:    inserts user input value to the dynamic array
    Preconditions:  value is not already in the array
    Postcondition:  value is added to the end of the array
*/

#ifndef SET_H
#define SET_H

class List
{
	public:
		//CONSTRUCTOR
		List();
		
		//DESTRUCTOR
		~List();
		
		//MODIFICATION MEMBER FUNCTIONS
		void setsize(const int);
		void insert(const int);
		void remove(const int);
		void addtwo();
		void swap(int&, int&);
		
		//CONSTANT MEMBER FUNCTIONS
		int getsize() const;
		void display() const;
	
	private:
		int size;
	
	protected:
		int* point;	
};

class Set : public List
{
	public:
		//NEW INSERT MEMEBER FUNCTION
		void setinsert(const int);
		
}

#endif
