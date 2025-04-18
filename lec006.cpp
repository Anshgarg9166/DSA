//Decimal to binary  //give error in vs code but working properly in online compiler
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int ans=0;
//     int i = 0;
//     while(n!=0){
//         int bit = n&1;
//         ans = (bit *pow(10,i)) + ans;

//         n = n>>1;
//         i++;
//     }
//     cout<<"Answer is "<<ans;
// }

//Binary to decimal
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int i=0, ans=0;
//     while(n!=0){
//         int digit = n%10;

//         if(digit == 1){
//             ans = ans+pow(2,i);
//         }
//         n=n/10;
//         i++;

//     }
//     cout<<"Decimal number is "<<ans;
// }

//homeWork //giving correct input in online compiler but not required output
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 0,ans = 0;
    while(n!=0){
        int bit = !(n&1);
        ans = (bit *pow(10,i)) + ans;

        n = n>>1;
        i++;
    }
    cout<<ans;
}