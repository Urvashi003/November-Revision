#include<bits/stdc++.h>
using namespace std;



class Graph{
   public:
   unordered_map<int,list<int>>adjList;
   void addEdge(int u, int v, bool direction){
    //dir-0 undirected
    //dir-1 directed

    if(direction==1){
        adjList[u].push_back(v);
    }else{
        adjList[v].push_back(u);
        adjList[u].push_back(v);
    }
    cout<<"printing adjList"<<endl;
    printAdjList();
   }

   void printAdjList(){
    for(auto i: adjList){
        cout<<i.first<<"->{";
        for(auto neighbor: i.second){
            cout<<neighbor<<",";
        }
        cout<<"}"<<endl;
    }
   }
};

int main(){
    Graph g;
    g.addEdge(0,1,1);
}