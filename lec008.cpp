//Switch case
// #include<iostream>
// using namespace std;

// int main(){
//     int num = 2;
//     switch (num)
//     {
//     case 1:
//         cout<<"First"<<endl;
//         break;
//     case 2:
//         cout<<"Second"<<endl;
//         break;
//     default:
//         cout<<"This is default case";
//         break;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int ch = '1';
//     switch (ch)
//     {
//     case 1:
//         cout<<"First"<<endl;
//         break;
//     case '1':
//         cout<<"Character"<<endl;
//         break;
//     default:
//         cout<<"This is default case";
//         break;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int ch = '1';
//     int num = 1;
//     switch (ch)
//     {
//     case 1:
//         cout<<"First"<<endl;
//         break;
//     case '1':
//         switch(num){
//             case 1:cout<<"Value of num is "<<num<<endl;
//             break;
//         }
//         break;
//     default:
//         cout<<"This is default case";
//         break;
//     }
// }


// #include <iostream>
// using namespace std;
// int main()
// {

// //this while condition will always be true if exit( is not put.)
//     while(1)
//             {
//             cout<<"HOW YOU DOIN????"<<endl;

//             int num=1;
//             switch(num)
//                       {
//                         case 1: cout<<"I'M FINE"<<endl;
//                         break;
//             }
//             exit(0);
//             }
// }

//calculator
// #include<iostream>
// using namespace std;

// int main(){
//   int a ,b;
//   cout<<"Enter the value of a "<<endl;
//   cin>>a;
//   cout<<"Enter the value of b "<<endl;
//   cin>>b;

//   char op;
//   cout<<"Enter the operation you want to perform"<<endl;
//   cin>>op;

//   switch(op){
//     case '+': cout<<(a+b)<<endl;
//               break;
//     case '-': cout<<(a-b)<<endl;
//               break;          
//     case '*': cout<<(a*b)<<endl;
//               break;
//     case '/': cout<<(a/b)<<endl;
//               break;
//     default : cout<<"Please enter a valid operation";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
//            }
//         return 0;
// }

//Function
// #include<iostream>
// using namespace std;

// //fuction declaration
// int power(int a , int b){
//         int ans = 1;
//         for(int i =1;i<=b;i++){
//                 ans = ans*a;
//         }
//         return ans;
// }

// int main(){
//         int a,b;
//         cin>>a>>b;

//         int answer = power(a,b);
//         cout<<"Answer is "<<answer<<endl;
// }

// some power function from other method
// #include<iostream>
// using namespace std;

// //fuction declaration
// int power(){
//         int a , b;
//         cin>>a>>b;
//         int ans = 1;
//         for(int i =1;i<=b;i++){
//                 ans = ans*a;
//         }
//         return ans;
// }

// int main(){
//         int answer = power();
//         cout<<"Answer is "<<answer<<endl;
// }


// even fuction
// #include<iostream>
// using namespace std;
// bool isEven(int a ){
//         //odd
//         if(a&1){
//                 //if and operation of 1 with any number exist means number is odd
//                 return 0;
//         }

//         return 1;
// }
// int main(){
//         int num;
//         cin>>num;

//         if(isEven(num)){
//                 cout<<"Number is Even";
//         }
//         else{
//                 cout<<"Number is odd";
//         }
// }     

//nCr function
// #include<iostream>
// using namespace std;

// int factorial(int n){
//         int fact = 1;
//         for(int i = 1; i<=n; i++){
//                 fact = fact*i;
//         }
//         return fact;
// }

// int nCr(int n,int r){
//         int num = factorial(n);
//         int deno = factorial(r)*factorial(n-r); 
//         return num/deno;
// }

// int main (){
//         int n,r;
//         cin >> n >>r;
//         cout<<"Answer is "<<nCr(n,r)<<endl;
// }


//AP 
// #include<iostream>
// using namespace std;
// int Ap(int n){
//         return ((3*n)+7);
// }

// int main(){
//         int num,answer;
//         cin>>num;
//         answer = Ap(num);
//         cout<<answer;
//         return 0;
// }

// total number of set bits in a&b
// a=2 10
// b=3 11
//output = 3

// #include<iostream>
// using namespace std;
// int setbit(int num){
//         int count = 0;
//         if(num!=0){
//                 if(num&1 == 1){
//                         count++;
//                         num >> 1;
//                 }
//                 else{
//                         num >> 1;
//                 }
//         }
//         return count;
// }
// int main(){
//         int n,answer;
//         cin>>n;
//         answer = setbit(n);
//         cout<<answer;
// }

#include <iostream>
using namespace std;

int bits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            sum = sum + 1;
        }else
        {
                n = n >> 1;
        }
        
    }
    return sum;
}

int main()
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;

    cout << "Total Set Bits = " << bits(a) + bits(b) << endl;
}