// Creating a graph using adjacency matrix

#include<iostream>
#include<vector>
using namespace std;
class graph{
    public:
    void addEdge(int u, int v, bool direction){
        int n;
        vector<vector<int>> arr(n,vector<int>(n, 0));
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){

            }
        }
        if(direction==0);
    }

    void printMatrix();

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
    G.printMatrix();

    return 0;
}