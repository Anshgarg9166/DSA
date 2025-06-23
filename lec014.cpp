// #include<iostream>
// using namespace std;

// int getPivot(int arr[] ,int n){

//     int s = 0,e = n-1;
//     int mid = s+(e-s)/2;

//     while(s<e){
//         if(arr[mid] >= arr[0]){
//             s = mid + 1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[6] = {3,8,10,17,18,1};
//     cout<<"Pivot is at "<<getPivot(arr,6);
// }



//square root after decimal 

#include<iostream>
using namespace std;
long long int sqrtint(int num){
    int s = 0;
    int e = num;
    long long int mid = s+(e-s)/2;

    long long int ans = -1;
    while(s<=e){
        long long int square = mid*mid;
        // we have used long long int beacuse of this mid*mid can be out of range
        if(square == num){
            ans = mid;
        }
        
        if(square>num){
            e = mid-1;
        }
        else{//square<num
            ans = mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
double decimalpart(int n,int precision,int tempsol){
    // Here precision means values after decimal .XXX

    double factor = 1;
    double ans = tempsol;

    for(int i = 0;i<precision;i++){
        factor = factor/10; // give .1,.01,.001 ...

        for(double j = ans;j*j<n ;j=j+factor){ //X.1,X.2,X.3 ....
           ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<endl;

    int tempsol = sqrtint(n);
    cout<<"Answer is "<<decimalpart(n,3,tempsol);
    return 0;

}
