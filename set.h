#ifndef set_H
#define set_H
using namespace std;
class list
{
  public:
    // CONSTRUCTOR
    list();
	
	//DESTRUCTOR GOES HERE
	
    // MODIFICATION MEMBER FUNCTIONS
    
    void insert(const int);//takes user input and inserts it into the array.
	void remove(const int);
    // CONSTANT MEMBER FUNCTIONS
    void display(void) const;
    
   

  private:
   int size;  //This will be the capacity of the array
	
   protected: 
    int *point;
};

#endif
