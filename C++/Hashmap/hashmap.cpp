#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> m;

    pair<string,int> p = make_pair("shreyansh", 2);
    m.insert(p);

    pair<string,int> pair2("katiyar", 1);
    m.insert(pair2);

    m["my"] = 3; 
    m["my"] = 1;

    cout<< m["my"] <<endl;
    cout<< m.at("shreyansh") <<endl;

    cout<< m["unknown"] << endl;
    // cout<< m.at("unknown") << endl;

    cout<< m.size() <<endl;

    cout<< m.count("bro") <<endl;

    m.erase("my");
    cout<< m.size() << endl;

    for(auto i:m){
        cout<< i.first<< " " << i.second << endl;
    }

    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first << " " << it->second <<endl;
        it++;
    }

}
