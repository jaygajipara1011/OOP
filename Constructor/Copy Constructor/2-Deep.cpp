// So, In deep we solve that Shallow copy with Pointer Problem
// we create a copy constructor in class and,
// give new memory to our variable using 'new' keyword.
// and after that we assign the value
#include <iostream>
using namespace std;
class Demo
{
    int *a, *b;

public:
    Demo(int x, int y)
    {
        a = new int;
        b = new int;
        *a = x;
        *b = y;
    }
    Demo(Demo &x) // Here we created, Copy Constructor
    {
        a = new int; // give new memory to a
        b = new int; // give new memory to b
        *a = *(x.a); // assign values
        *b = *(x.b); // assign values
    }
    void print()
    {
        cout << endl
             << "a : " << *a << " | "<< a << endl
             << "b : " << *b << " | "<< b << endl;
    }
};
main()
{
    Demo x(2, 5);
    cout << "--- x ---";
    x.print();
    Demo y = x;
    cout << "--- y ---";
    y.print();
}