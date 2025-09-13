// Reverse a string using Recursion
// #include <iostream>
// using namespace std;

// void reverse(string &str, int i, int j)
// {
//     if (i > j)
//     {
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     reverse(str, i, j);
// }

// int main()
// {
//     string name = "Ansh";
//     reverse(name, 0, name.length() - 1);
//     cout << name << endl;
// }

// power using recursion
#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // Recursive call
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Answer is " << power(a, b) << endl;
}