// Count Inversions of an Array
#include <iostream>
#include <vector>
using namespace std;

int inversionCount(vector<int> &arr)
{

    int n = arr.size();
    int invCount = 0;

    // Loop through the array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            // If the current element is greater
            // than the next, increment the count
            if (arr[i] > arr[j])
                invCount++;
        }
    }

    return invCount;
}

int main()
{
    vector<int> arr = {9, 1, 6, 6, 0};
    cout << inversionCount(arr) << endl;
    return 0;
}