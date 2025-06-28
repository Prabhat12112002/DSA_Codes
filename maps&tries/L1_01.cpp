#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>m;
    pair<string, int>p = make_pair("Scorpio", 9);
    m.insert(p);

    pair<string, int>p2("alto", 5);
    m.insert(p2);

    m["fortuner"] = 10;

    // access
    cout<<m.at("alto")<<endl;
    cout<<m["fortuner"]<<endl;

    // search
    cout<<m.count("alto")<<endl;

    if(m.find("fortuner") != m.end()){
        cout<<"fortuner found"<<endl;
    }
    else{
        cout<<"fortuner not found"<<endl;
    }
 
    cout<<m["human"]<<endl;
    cout<<m.size()<<endl;

    for(auto i : m){
        cout<<i.first<<", "<<i.second<<endl;
    }

    return 0;
}