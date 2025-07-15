#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long int> trees,int m,int mid){
  long long int wood = 0;
  for(int i = 0; i < trees.size(); i++){
    if(trees[i] > mid){
      wood += trees[i] - mid;
    }
  }
  return  wood >= m;
}
long long int UsingBs( vector<long long int> trees,int m){
  long long int start = 0;
  long long int end = *max_element(trees.begin(),trees.end());
  long long ans = 0;

  while(start <= end){
    long long int mid = start + ( end - start) / 2;

    if(isPossible(trees,m,mid)){
       ans = mid;
       start = mid + 1;
    }else{
      end = mid - 1;
    }
  }
  return ans;
}
int main(){
  long long int n,m;
  cin >> n >> m;

  vector<long long int> trees;
  while(n--){
    long long int height;
    cin >> height;
    trees.push_back(height);
  }

  cout <<"maximum ans is :"<< UsingBs(trees,m);



  return 0;
}