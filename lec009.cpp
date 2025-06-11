// #include<iostream>
// using namespace std;

// int main(){
//     //declare
//     int number[15];

//     //acessing an array
//     cout<<"Value at 14 index "<<number[14]<<endl;

//     //give warning when index is out of range
//     cout<<"Value at 20 index "<<number[20]<<endl;
    
//     int second[3] = {5,7,11};
//     cout<<"Value at 2 index "<<second[2]<<endl;

//     int third[15] = {2,7};
//     int n = 15;
//     for(int i = 0;i<n;i++){
//         cout<<third[i]<<" ";
//     }
//     cout<<endl;

//     int sizeofthird = sizeof(third)/sizeof(int);
//     cout<<"size of thrid is "<<sizeofthird<<endl;

//     char ch[5] = {'a','b','c','s','d'};
//     cout<<ch[3]<<endl;

//     return 0;
// }

// #include<iostream>
// #include<climits> // Needed for INT_MIN and INT_MAX
// using namespace std;

// // int getMax(int num[],int n){
// //     int max = INT_MIN;

// //     for(int i = 0;i<n;i++){
// //         if(num[i]>max){
// //             max = num[i];
// //         }
// //     }
// //     return max;
// // }


// //Another method
// int getMax(int num[],int n){
//     int maxi = INT_MIN;

//     for(int i = 0;i<n;i++){
        
//         maxi = max(maxi,num[i]);
        
//         // if(num[i]>max){
//         //     max = num[i];
//         // }
//     }
//     return maxi;
// }


// int getMin(int num[],int n){
//     int Min = INT_MAX;

//     for(int i = 0;i<n;i++){
//         if(num[i] < Min){
//             Min = num[i];
//         }
//     }
//     return Min;

// }

// int main(){
//     int size;
//     cin>>size;

//     int num[100];

//     for(int i = 0;i<size;i++){
//         cin>>num[i];
//     }

//     cout<<"Maximum number is "<<getMax(num,size)<<endl;
//     cout<<"Minimum number is "<<getMin(num,size)<<endl;
//     return 0;
// }

