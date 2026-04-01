//UNWEIGHTED GRAPH
#include<iostream>
include namespace std;
int main(){
  int n,m;
  cin>>n>>m;
 int adjmat[n+][m+1];
  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adjmat[u][v]=1;
    adjmat[v][u]=1;  //undirected graph
  }
  return adjmat;
}
//WEIGHTED GRAPH
#include<iostream>
include namespace std;
int main(){
  int n,m;
  cin>>n>>m;
 int adjmat[n+][m+1];
  for(int i=0;i<m;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    adjmat[u][v]=wt;
    adjmat[v][u]=wt;  //undirected graph
  }
  return adjmat;
}
