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


#include <iostream>
using namespace std;
int main()
{

//this while condition will always be true if exit( is not put.)
    while(1)
            {
            cout<<"HOW YOU DOIN????"<<endl;

            int num=1;
            switch(num)
                      {
                        case 1: cout<<"I'M FINE"<<endl;
                        break;
            }
            exit(0);
            }
}
//continue...