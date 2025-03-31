// object and classes in set
#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
class Person{
    public:
    int age;
    string name;
    bool operator<(const Person& other) const {
        return age < other.age; 
    }

};
int main()
{
    set<Person>s1;
    Person p1,p2,p3;
    p1.age = 20;
    p1.name = "JOhn";
    p2.age = 30;
    p2.name = "Sohail";
    p3.age = 210;
    p3.name = "Shantanu";

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);

    // printing the set
    for(auto it = s1.begin(); it!=s1.end();it++){
        cout<<it->age<<" "<<it->name<<endl;

    }
    return 0;
}