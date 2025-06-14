#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternatives(int arr[],int size){
    for(int i = 0;i<size;i+=2){
        if( i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8] = {5,4,2,6,8,7,3,9};
    int odd[5] = {88,5,9,7,4};
    swapAlternatives(even,8);
    printArray(even,8);

    cout<<endl;
    swapAlternatives(odd,5);
    printArray(odd,5);
}                   