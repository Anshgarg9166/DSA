#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    cout << &num << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << "Size of pointer " << sizeof(p) << endl;

    int *t = &num;
    *t = *t + 1;
    cout << "*t " << *t << endl;

    cout << "Before " << t << endl;
    t = t + 1;
    // address is incresed by 1 which point to next int address (+4)
    cout << "After " << t << endl;
}