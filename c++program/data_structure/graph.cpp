#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;
class graph{
    int v;
    list<int> * l;
public:
    graph(int v){
        this->v = v;
        l = new list<int> [v];
    }

    void addEdge(int src,int dest,bool bider){
        l[src].push_back(dest);
        if(bider){
            l[dest].push_back(src);
        }
    }
    void bfsDriver(int src,vector<bool>& visited){
        queue<int>q;
        q.push(src);
        cout<<src<<" ";
        visited[src] = true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            list<int> :: iterator it;
            it = l[front].begin();
            while(it!=l[front].end()){
                int currVertex = *it;
                if(!visited[currVertex]){
                    cout<<currVertex<<" ";
                    visited[currVertex] = true;
                    q.push(currVertex);
                }
                it++;
            }
        }
        cout<<endl;
    }

    void bfs(){
        vector<bool> visited;
        for(int i=0;i<v;i++){
            visited.push_back(0);
        }
        for(int i=0;i<v;i++){
            if(!visited[i]){
                bfsDriver(i,visited);
            }
        }
    }
    void dfsDriver(int src,vector<bool>& visited){

    }
    void print(){
        for(int i=0;i<v;i++){
            list<int> :: iterator it;
            it = l[i].begin();
             cout<<i<<" :: ";
            while(it!=l[i].end()){
                cout<<*it<<"-->";
                it++;
            }
            cout<<"NULL"<<endl;
        }
    }
    void cyledrive(int src,vector<bool>& visited,vector<bool>&instack)
    {
        if(visited[src])
        {
            return false;
        }
        instack(src)=true;
        visited(src)=true;
        auto it=l[src].begin();
        while(it!=l[src].begin()){
            bool cycle=cycledriver(*it,visited,instack);
            if(cycle){
                return true;
            }
            it++;
        }
        instack[src]=false;
        return false;
    }
};
int main(){
    graph g(7);
    g.addEdge(0,1,true);
    g.addEdge(0,2,true);
    g.addEdge(0,3,true);
    g.addEdge(1,4,true);
    g.addEdge(2,3,true);
    g.addEdge(2,4,true);
    g.addEdge(3,4,true);
    g.addEdge(5,6,true);
    g.bfs();
    graph g(7);
    g.addEdge(0,1,true);
    g.addEdge(0,2,true);
    g.addEdge(0,3,true);
    g.addEdge(1,4,true);
    g.addEdge(2,3,true);
    g.addEdge(2,4,true);
    g.addEdge(3,4,true);
    g.addEdge(5,6,true);
    g.bfs();
}
