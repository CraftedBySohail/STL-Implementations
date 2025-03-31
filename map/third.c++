// unordered_map
// unique key are present 
// ordering is not maintained
#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main(){
    unordered_map<int,int>m;
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