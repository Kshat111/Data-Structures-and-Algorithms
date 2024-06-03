// Creating a graph using adjacency lists

#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj_list;
    void addEdge(int u,int v, bool direction){
        adj_list[u].push_back(v);
        if(direction==0){
            adj_list[v].push_back(u);
        }
        else{
            return;
        }
    }

    void printList(){
        for(auto i: adj_list){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n,m;
    bool d;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>m;
    cout<<"Is your grph undirected (Enter 0) or directed (Enter 1): ";
    cin>>d;

    graph G;

    int u,v;

    cout<<"Enter nodes having edges between them:"<<endl;

    for(int i=0;i<m;++i){
        cin>>u>>v;
        G.addEdge(u,v,d);
    }
    G.printList();
    
    return 0;
}