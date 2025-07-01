// Array Stl

// #include<iostream>
// #include<array>
// using namespace std;

// int main(){
//     int basicarray[3] = {1,2,3};
//     // array stl
//     array<int,4> a = {1,2,3,4};

//     int size = a.size();

//     for(int i = 0;i<size;i++){
//         cout<<a[i]<<endl;
//     }

//     cout<<"Element at 2nd  index-> "<<a.at(2)<<endl;
//     cout<<"Empty or not -> "<<a.empty()<<endl;

//     cout<<"First element" <<a.front()<<endl;
//     cout<<"Last element "<<a.back()<<endl;
// }


//Vector Stl
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     vector<int> v;


//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     v.push_back(1);
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<"Capacity -> "<<v.capacity()<<endl;

//     //it doubles the space/capacity 2 element to 4 elements
//     v.push_back(3);
//     cout<<"Capacity -> "<<v.capacity()<<endl;
//     cout<<"Size -> "<<v.size()<<endl;

//     cout<<"Element at 2nd  index-> "<<v.at(2)<<endl;

//     cout<<"First element" <<v.front()<<endl;
//     cout<<"Last element "<<v.back()<<endl;

//     cout<<"Before POP"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }

//     v.pop_back();
//     cout<<"After POP"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     cout<<"Before clear size "<<v.size()<<endl;
//     // by using this clear function all elements inside vetor is deleted and size become 0 but capacity remain same
//     v.clear();
//     cout<<"After clear size "<<v.size()<<endl;

//     vector<int> a(5,1);
//     //here 5 is size and array is intialized with 1
//     cout<<"vector a"<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     // here we copy vecctor a in vector b
//     vector<int> b(a);
//     cout<<"vector b"<<endl;
//     for(int i:b){
//         cout<<i<<" ";
//     }
// }

//Deque Stl
// #include<iostream>
// #include<deque>

// using namespace std;
// int main(){
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);

//     for(int i : d){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     // d.pop_back();
//     // for(int i : d){
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     // d.pop_front();
//     // for(int i : d){
//     //     cout<<i<<" ";
//     // }
//     // cout<<endl;

//     cout<<"Element at 1nd  index-> "<<d.at(1)<<endl;

//     cout<<"First element " <<d.front()<<endl;
//     cout<<"Last element "<<d.back()<<endl;

//     cout<<"Empty or not -> "<<d.empty()<<endl;

//     cout<<"Before erase "<<d.size()<<endl;
//     //here we need to define the range 
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"After erase "<<d.size()<<endl;
// }




//List STL
// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//     list<int> l;

//     l.push_back(1);
//     l.push_front(2);

//     for(int i : l){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     l.erase(l.begin());

//     cout<<"After erase"<<endl;
//     for(int i : l){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     cout<<"Size of list "<<l.size()<<endl;

//     list<int> n(5,100);
//     for(int i : n){
//         cout<<i<<" ";
//     }
// }




//Stack STL
// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){
//     stack<string> s;

//     s.push("Ansh");
//     s.push("garg");

//     cout<<"Top element -> "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top element -> "<<s.top()<<endl;

//     cout<<"Size of stack -> "<<s.size()<<endl;
//     cout<<"Empty or Not -> "<<s.empty()<<endl;
// }



//Queue Stl
// #include<iostream>
// #include<queue>

// using namespace std;
// int main(){
//     queue<string> q;

//     q.push("Hello");
//     q.push("Ansh");
//     q.push("garg");
    
//     cout<<"First Element -> "<<q.front()<<endl;
//     cout<<"Size before POP -> "<<q.size()<<endl;
//     q.pop();
//     cout<<"First Element -> "<<q.front()<<endl;
//     cout<<"Size after POP -> "<<q.size()<<endl;
// }


//Priority queue
// #include<iostream>
// #include<queue>

// using namespace std;
// int main(){
//     //max heap(by default)
//     priority_queue<int> maxi;

//     //min heap
//     priority_queue<int,vector<int>,greater<int>> mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout<<"Size -> "<<maxi.size()<<endl;

//     int n = maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout<<endl;

//     // for mini
//     mini.push(1);
//     mini.push(3);
//     mini.push(2);
//     mini.push(5);
//     mini.push(4);

//     cout<<"Size -> "<<mini.size()<<endl;

//     int m = mini.size();
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     } 
//     cout<<endl<<"Empty or Not -> "<<mini.empty()<<endl;
// }




//Set 
// #include<iostream>
// #include<set>

// using namespace std;
// int main(){
//     set<int> s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(2);
//     s.insert(0);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);
//     s.insert(2);
//     s.insert(3);

//     for(auto i : s){
//         cout<<i<<endl;
//     }

//     s.erase(s.begin());
//     cout<<"New "<<endl;
//     for(auto i : s){
//         cout<<i<<endl;
//     }

//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);
//     cout<<"New "<<endl;
//     for(auto i : s){
//         cout<<i<<endl;
//     }

//     cout<<"5 is present or not -> "<<s.count(5)<<endl;

//     set<int>::iterator itr = s.find(5);

//     for(auto it = itr;it!=s.end();it++){
//         cout<<*it<<endl;
//     }

// }




//Map
// #include<iostream>
// #include<map>

// using namespace std;
// int main(){
//     map<int,string> m;

//     m[1] = "Ansh";
//     m[5] = "Garg";
//     m[13] = "hello";

//     //other method to insert
//     m.insert({6,"say"});

//     for(auto i : m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<"Count 13 ->" <<m.count(13)<<endl;
    
//     cout<<"After erase "<<endl;


//     m.erase(13);
//     for(auto i : m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }


//     cout<<"After 5 ->"<<endl;
//     auto it = m.find(5);

//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }
// }


//Algorithms 


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // for binary search
    cout<<"Search 5 -> "<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Search 6 -> "<<binary_search(v.begin(),v.end(),6)<<endl;

    //for upper and lower bound (it gives number of values smmaller and greater than the value)
    cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;


    int a = 3;
    int b = 5;
    //Max and min
    cout<<"Max -> "<<max(a,b)<<endl;
    cout<<"Min -> "<<min(a,b)<<endl;

    //Swap
    swap(a,b);
    cout<<"a -> "<<a<<endl;

    string abcd ="abcd";
    // reverse a string
    reverse(abcd.begin(),abcd.end());
    cout<<"String -> "<<abcd<<endl;

    //Rotate
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Sort
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
}