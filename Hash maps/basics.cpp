#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int main() {
    unordered_map<string, int> m; // sorts the keys in lexicographical order

    // INSERTION --> O(1) only in case of unordered map

    // A
    pair<string, int> p = make_pair("myself", 1);
    m.insert(p);

    // B
    pair<string, int> p1("akshat", 2);
    m.insert(p1);

    // C
    m["singh"] = 3;

    // SEARCHING --> O(1) only in case of unordered map

    cout<<m["akshat"]<<endl;
    cout<<m.at("akshat")<<endl;

    // cout<<m.at("jain")<<endl; // error
    cout<<m["jain"]<<endl; // outputs 0

    // Length of hash map
    cout<<m.size()<<endl;

    // Check presence
    cout<<m.count("singh")<<endl;
    cout<<m.count("ram")<<endl;

    // DELETION --> O(1) only in case of unordered map
    m.erase("myself");
    cout<<m.size()<<endl;

    // TRAVERSAL IN HASPMAP

    // A
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // B
    unordered_map<string, int> :: iterator itr = m.begin();
    while(itr!=m.end()){
        cout<<itr->first<<" "<<itr->second<<endl;
        itr++;
    }

    return 0;
}