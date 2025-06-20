#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;

    // int mid = (start+end)/2;
    //for optimization
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
        return mid;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid +1;
        }
        // mid = (start+end)/2;
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = binarySearch(even,6,12);
    cout<<"Index is 12 is "<<index+1<<endl;
    // int index1 = binarySearch(odd,5,11);
    // cout<<index1;
}