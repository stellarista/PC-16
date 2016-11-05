#include <iostream>

using namespace std;
class IntArray
{   private:
    int *aptr;  // Pointer to the array
    int arraySize;  // Holds the array size
    void subscriptError();  // Handles invalid subscripts

    public:
    IntArray(int); // Constructor
    IntArray(const IntArray &);  // Copy constructor
    ~IntArray(); // Destructor
    int size() const  // Returns the array size
    {
        return arraySize;
    }
    int &operator[](const int &);  // Overloaded [] operator
};

int main()
{
  const int SIZE = 10;  // Array size
  // Define an IntArray with 10 elements.
  IntArray table(SIZE);

  // Store values in the array.
  for (int x = 0; x < SIZE; x++)
  {
     table[x] = x;
  }

    // Display the values in the array.
    for (int x = 0; x < SIZE; x++)
    {
        cout << table[x] << " ";
    }

    cout << endl;

    // Attempt to use an invalid subscript.
    cout << "Now attempting to use an invalid subscript.\n";
    table[SIZE + 1] = 0;

    return 0;
}
