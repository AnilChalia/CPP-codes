#include<bits/stdc++.h>
using namespace std;
int main(){

  // creation unordered map
  unordered_map<string,int> map;
  // insertion
  pair<string,int> p = make_pair("love",25);
  // 2nd type
  pair<string,int> q;
  q.first = "anil";
  q.second = 35;
  // 3rd tpe
  pair<string,int>r("aman",67);

  map.insert(p);
  map.insert(q);
  map.insert(r);
  // size of map
  cout <<"size of map is :" << map.size() << endl;
  // key value print
  cout<< map.at("love") << endl;

  return 0;
}