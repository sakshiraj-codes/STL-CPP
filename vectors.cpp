#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    //Iterators are similar to pointers...
    vector<int>::iterator itr = v.begin();
    cout<<*itr<<endl;

    for(;itr !=v.end();itr++){
        cout<<"value = "<<*itr<<endl;
    }

    cout<<"size - "<<v.size()<<endl;
    v.clear();
    cout<<"size - "<<v.size()<<endl;
    return 0;
}
