#include<bits/stdc++.h>
using namespace std;


void bfs(vector<int> adj[],vector<int> &vis,queue<int> &q){

    if(q.empty()){
        return;
    }

    int node = q.front();
    cout<<node<< " ";
    vis[node]=1;
    q.pop();

    for(auto it : adj[node]){
        if(!vis[it]){
            q.push(it);
             vis[it]=1;
        }
    }
    bfs(adj,vis,q);

}


void add(int u,int v,vector<int> adj[]){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    cout<<"Enter no. of edges : "<<endl;
    int n;
    cin>>n;
    vector<int> adj[n];
    vector<int> vis(n,0);
    queue<int> q;
    add(0,1,adj);
    add(1,2,adj);
    add(1,3,adj);
    add(0,4,adj);
    q.push(0);
    vis[0]=1;
    bfs(adj,vis,q);
    return 0;

}