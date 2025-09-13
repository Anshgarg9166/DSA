// Sorting using recursion

// #include <iostream>
// using namespace std;
// bool isSorted(int arr[], int size)
// {
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         bool remainingpart = isSorted(arr + 1, size - 1);
//         return remainingpart;
//     }
// }

// int main()
// {
//     int arr[5] = {2, 3, 4, 5, 6};
//     int size = 5;

//     bool ans = isSorted(arr, size);
//     if (ans)
//     {
//         cout << "Array is sorted " << endl;
//     }
//     else
//     {
//         cout << "Array is Unsorted" << endl;
//     }
// }

// sum
// #include <iostream>
// using namespace std;

// int getSum(int arr[], int size)
// {
//     // base case
//     if (size == 0)
//         return 0;
//     return arr[size - 1] + getSum(arr, size - 1);
// }

// int main()
// {
//     int arr[5] = {3, 2, 5, 1, 6};
//     int size = 5;

//     cout << "Sum is " << getSum(arr, size) << endl;
// }

// LInear search using Recursion
// #include <iostream>
// using namespace std;

// bool linearSearch(int arr[], int size, int target)
// {
//     if (size == 0)
//     {
//         return false;
//     }
//     if (arr[size - 1] == target)
//     {
//         return true;
//     }
//     else
//     {
//         bool ans = linearSearch(arr, size - 1, target);
//         return ans;
//     }
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;
//     int target = 4;
//     if (linearSearch(arr, size, target))
//     {
//         cout << "Element found" << endl;
//     }
//     else
//     {
//         cout << "Not found";
//     }
// }

// Binary Search using recursion

#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 10, 14};
    int size = 5;
    int key = 18;

    if (binarySearch(arr, 0, size - 1, key))
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
}