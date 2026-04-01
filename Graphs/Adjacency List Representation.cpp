//UNWEIGHTED GRAPH 
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
//WEIGHTED GRAPH
#include<iostream>
include namespace std;
int main(){
  int n,m;
  cin>>n>>m;
 vector<vector<int>> adjlist[n+];   //vector of vector
  for(int i=0;i<m;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    adjlist[u].push_back({v,wt});
    adjlist[v].push_back({u,wt});  //undirected graph
  }
  return adjlist;
}
