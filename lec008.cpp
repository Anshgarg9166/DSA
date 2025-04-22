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

#include <iostream>
using namespace std;

int main()
{
  int amount;
  cout<<"Enter the amount"<<endl;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
           }
        return 0;
}