//for printing
//1234
//1234
//1234
//1234

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j=j+1;

//         }
//         i+=1;
//         cout<<endl;
//     }
// }

//for printing
//4321
//4321
//4321
//4321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j=j+1;

//         }
//         i+=1;
//         cout<<endl;
//     }
// }

//for printing
//123
//456
//789

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     int count =1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//         cout<<count;
//         j+=1;
//         count++;
//         }
//     i+=1;
//     cout<<endl;
//     }
// }

// for printing
//*
//**
//***
//****

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
}
