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

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<"*";
//             j+=1;
//         }
//         i+=1;
//         cout<<endl;
//     }
// }

//for printing
//1
//22
//333
//4444

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j<=i){
//             cout << i;
//             j+=1;
//         }
//         i+=1;
//         cout<<endl;
//     }
//     return 0;
// }

//for printing
//1
//23
//345
//4567

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     int count = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<count;
//             j+=1;
//             count++;
//         }
//         i+=1;
//         count-=1;
//         cout<<endl;
//     }
// }

//for printing 
//1
//21
//321
//4321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j = 1 ;
//         while(j<=i){
//             cout<<i-j+1;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//for printing
//AAA
//BBB
//CCC

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             char ch = 'A'+i-1;
//             cout<<ch;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }


//for printing 
//ABC
//ABC
//ABC

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             char ch = 'A'+ j -1;
//             cout<<ch;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//for printing 
//ABC
//DEF
//GHT

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     char ch = 'A';
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             cout<<ch;
//             j+=1;
//             ch = ch + 1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//for printing
//ABC
//BCD
//CDE

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=n){
//             char ch = 'A' + i+ j - 2;
//             cout<<ch;
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//for printing
//D
//CD
//BCD
//ABCD

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             char ch = 'A' + n - i + j - 1;
//             cout<<ch; 
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//   *
//  **
// ***
//****

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<"_";
//             space-=1;
//         }
//         int j =1;
//         while(j<=i){
//             cout<<'*';
//             j+=1;
//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//for printing
//****
//***
//**
//*

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = n-i+1;
//         while(j){
//             cout<<"*";
//             j-=1;
//         }
//         i+=1;
//         cout<<endl;
//     }
// }

//for printing
//   1
//  121
// 12321
//1234321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
        

//         int j = 1;
//         while(j<=n){
//             int space = n-i;
//             while(space){
//                 cout<<"_";
//                 space-=space;
//             }

            
//             j+=1;

//         }
//         cout<<endl;
//         i+=1;
//     }
// }

//for printing 
//   1
//  121
// 12321
//1234321

#include<iostream>
using namespace std;
int main(){
    
}