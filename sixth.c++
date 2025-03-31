// searching the element in set
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;

    s.insert(2);
    s.insert(4);
    s.insert(8);


    // using find method to check whether the element is present or not
    if(s.find(4)!=s.end()){
        cout<<"Element is present";

    }
    else{
        cout<<"Element is not present";
    }
    return 0;
}
