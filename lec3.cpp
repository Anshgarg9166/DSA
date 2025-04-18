// for printing 
//****
//****
//****
//****

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
//     return 0;
// }

// for printing 
//111
//222
//333

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}
