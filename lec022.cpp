// string

#include <iostream>
using namespace std;

// reverse of a string
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

// length of string
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// checck plaindrome
bool chechpalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

// chech palindromme ques
// bool checkPalindromeques(char s[])
// {
//     int n = getLength(s);
//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         s[start] = toLowerCase(s[start]);
//         s[end] = toLowerCase(s[end]);
//         if (s[start] >= 122 && s[start] <= 97)
//         {
//             start++;
//         }
//         if (s[end] >= 122 && s[end] <= 97)
//         {
//             end--;
//         }

//         // this if statement convert each character to lower string and then compare
//         // this satisfy NOT case sensitive condition
//         if (s[start] != s[end])
//         {
//             return 0;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return 1;
// }

// *************************************************************************
// question code

// Check if character is alphanumeric (letter or digit)
// bool isAlphanumeric(char ch) {
//     return (ch >= 'a' && ch <= 'z') ||
//            (ch >= 'A' && ch <= 'Z') ||
//            (ch >= '0' && ch <= '9');
// }

// // Convert uppercase letter to lowercase
// char toLower(char ch) {
//     if (ch >= 'A' && ch <= 'Z') {
//         return ch - 'A' + 'a';
//     }
//     return ch; // already lowercase or a digit
// }

// bool checkPalindrome(string s)
// {
//     int start = 0;
//     int end = s.length() - 1;

//     while (start <= end)
//     {
//         // Skip non-alphanumeric characters
//         while (start < end && !isAlphanumeric(s[start])) {
//             start++;
//         }
//         while (start < end && !isAlphanumeric(s[end])) {
//             end--;
//         }

//         // Compare characters after converting to lowercase
//         if (toLower(s[start]) != toLower(s[end])) {
//             return false;
//         }

//         start++;
//         end--;
//     }

//     return true;
// }
// *********************************************************************************

// toLowercase
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main()
{
    char name[20];

    cout << "Enter your name  " << endl;
    cin >> name;
    name[5] = '\0';

    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);
    cout << "Length of name is " << len << endl;

    reverse(name, len);
    cout << "Reverse is " << name << endl;

    cout << "Palindrome or not : " << chechpalindrome(name, len) << endl;

    cout << "Character in lower case is " << toLowerCase('b') << endl;
    cout << "Character in lower case is " << toLowerCase('C') << endl;

    cout << "Palindrome or not ques : " << checkPalindromeques(name) << endl;

    return 0;
}