#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main() 
{
    map<string,int> m;
    
    pair<string,int> p1 = make_pair("babbar",3);
    m.insert(p1);

    pair<string,int> p2("love", 2);
    m.insert(p2);

    m["mera"]=1;

    m["mera"]=2;

    //cout << "Nahi fata" << endl;

    //cout << m["mera"] << endl;

   // cout << m.at("babbar") << endl;

    //cout << m.at("unknown") << endl;

    //cout << m["unknown"] << endl;
    //cout << m.at("unknown") << endl;

    cout << m.size() << endl;

    //cout << m.erase("babbar") << endl;
    //cout << m.at("babbar") << endl;

    map<string,int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << it->second <<endl;
        it++;
    }


    return 0;
}

