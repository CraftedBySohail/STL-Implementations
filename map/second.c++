// implementation of multimap
// multiple key aare allowed
#include<iostream>
using namespace std;
#include<map>
int main(){
    multimap<int,int>m;
    m.insert(make_pair(1,20));
    m.insert(make_pair(3,240));
    m.insert(make_pair(2,204));
    m.insert(make_pair(1,20));
    m.insert(make_pair(2,20));



    
    for(auto it = m.begin(); it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl; 

    }

    

    return 0;
}