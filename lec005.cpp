//Bitwise Operators
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 4;
//     int b = 6;

//     cout<<"a&b "<<(a&b)<<endl;
//     cout<<"a|b "<<(a|b)<<endl;
//     cout<<"~a "<<~a<<endl;
//     cout<<"a^b "<<(a^b)<<endl;

//     cout<<(17>>1)<<endl; //17/2=8
//     cout<<(17>>2)<<endl; //17/2*2=4
//     cout<<(19<<1)<<endl; //19*2=38
//     cout<<(19<<2)<<endl; //19*2*2=76


//     return 0;
// }

// For loop
// #include<iostream>
// using namespace std;
// int main(){
//     for(int a=0,b=1,c=2 ; a>=0 && b>=1 && c>=2 ; a--,b--,c--){
//         cout<<a<<" "<<b<<" "<<c<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int a=1,b=2,c=3 ; a>=0 && b>=1 && c>=2 ; a--,b--,c--){
//         cout<<a<<" "<<b<<" "<<c<<endl;
//     }
// } 

//Fibonacci series
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int a = 0;
//     int b = 1;

//     cout<<a<<" "<<b<<" ";
//     for(int i = 1;i<=n;i++){
//         int nextnumber = a+b;
//         cout<<nextnumber<<" ";

//         a = b;
//         b = nextnumber;

//     }
// }

//Prime number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     bool isPrime =1;
//     for(int i = 2;i<n;i++){
//         if(n%i==0){
//             isPrime = 0;
//             break;
//         }
//     }

//     if(isPrime==0){
//         cout<<"Not a Prime Number";
//     }
//     else{
//         cout<<"Prime number";
//     }
// }

//Continue
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0 ; i<5; i++){
//         cout<<"Hi"<<endl;
//         cout<<"Hey"<<endl;
//         continue;

//         cout<<"Reply toh krde";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0;i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0;i<=5;i--){
//         cout<<i<<" ";
//         i++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    for(int i = 0;i<=15; i+=2){
        cout<<i<<" ";

        if(i&1){ //checking least signifcant bit is 1 or not
            continue;
        }
        i++;
    }
}