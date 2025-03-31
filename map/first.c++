// implementation of map
#include<iostream>
using namespace std;
#include<map>
int main(){
    map<int , int> m;
    m[1] = 20;
    m.insert(make_pair(2,30));
    m.insert(pair<int,int>(3,40));

    for(auto it = m.begin(); it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl; 

    }



    return 0;
}