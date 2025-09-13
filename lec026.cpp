#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
    cout << p << endl;
}
void update(int *p)
{
    // p = p + 1;
    // no change because pass by value
    *p = *p + 1;
    // there is changes beacuse value is passed by refernce
}
int main()
{
    /*
    int arr[10];

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;
    */
    int value = 5;
    int *ptr = &value;
    int neww = 8;

    // print(ptr);
    cout << "Before" << ptr << endl;
    update(ptr);
    cout << "After " << ptr << endl;
    *ptr = neww;

    //*ptr++; //it does increment
    (*ptr)++; // its increament
    cout << *ptr << endl;
    cout << "Value " << value;
}