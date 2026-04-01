#include<iostream>
include namespace std;
int main(){
  int n,m;
  cin>>n>>m;
 vector<int> adjlist[n+];
  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);  //undirected graph
  }
  return adjlist;
}
