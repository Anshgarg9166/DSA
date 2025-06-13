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

//Sum of elements in array
//  #include<iostream>
//  using namespace std;

//  int sumofarray(int arr[],int n){
//     int sum = 0;
//     for(int i = 0 ; i<n;i++){
//         sum = sum + arr[i];
//     }
//     return sum;
//  }

//  int main(){
//     int arr[5];
//     int n = 5;
//     cout<<"Enter the numbers "<<endl;
//     for(int i = 0 ; i<n ; i++ ){
//         cin>>arr[i];
//     }
//     int sum = sumofarray(arr,n);
//     cout<<"Sum of number is "<<sum;
//     return 0;
//  }

//linear search
// #include<iostream>
// using namespace std;

// bool search(int arr[],int n,int key){
//     for (int i = 0;i<n;i++){
//         if(arr[i] == key){
//             //return 1;
//             return true;
//         }
//     }
//     //retun 0;
//     return false;
// }

// int main(){
//     int arr[10] = {1,3,4,5,6,7,8,9,10,11};
//     int key;
//     cout<<"Enter element for searching "<<endl;
//     cin>>key;

//     bool found = search(arr,10,key);
//     if(found){
//         cout<<"Element is present";
//     }else{
//         cout<<"Element is absent";
//     }
// }

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);
}