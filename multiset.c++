// implementation of multiset
// can store duplicate values
#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(30);
    s.insert(1);
    
    for(auto it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}