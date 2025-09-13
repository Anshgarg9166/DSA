// #include <iostream>
// using namespace std;
// int main()
// {
//     int row;
//     cin >> row;
//     int col;
//     cin >> col;

//     // creating a 2D array
//     int **arr = new int *[row];
//     for (int i = 0; i < col; i++)
//     {
//         arr[i] = new int[col];
//     }

//     // taking input
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     // printing output
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // realsing memory
//     for (int i = 0; i < col; i++)
//     {
//         delete[] arr[i];
//     }
//     delete[] arr;
// }

// Jaggered Array using dynamic memory allocation
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter Number of rows :" << endl;
    cin >> row;
    int col;
    cout << "Enter the size of array : " << endl;
    int *size = new int[row];
    for (int i = 0; i < row; i++)
    {
        cin >> col;
        size[i] = col;
    }

    // creating a 2D array
    int **arr = new int *[row];
    for (int i = 0; i < col; i++)
    {
        arr[i] = new int[size[i]];
    }

    // taking input
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing output
    cout << "Jaggered Array Matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // realsing memory
    for (int i = 0; i < col; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}