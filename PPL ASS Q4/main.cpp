#include <bits/stdc++.h>
#include"queues.h"
using namespace std;
vector<bool> visit;
vector< vector<int> > edges;
void ad_edge(int a,int b)
{
    edges[a].push_back(b);
    edges[b].push_back(a);   //undirected graph
}
void bfs(int u)
{ Queue q;
q.enqueue(u);
visit[u]=true;
while(!q.isempty())
{    int v=q.dequeue();
    cout<<v<<" ";

for(unsigned int it=0;it<edges[v].size();++it)
    if(!visit[edges[v][it]])
    {
        visit[edges[v][it]]=true;
        q.enqueue(edges[v][it]);
    }

}

}
int main()
{
    int v, e;
    cin >> v >> e;
    visit.assign(v+2, false);
    edges.assign(v+2, vector<int>());
    int a,b;
    cin >> a >> b;
    ad_edge(a, b);
    int it=a;
    for (int i = 1; i < e; i++) {
        cin >> a >> b;
        ad_edge(a, b);
    }
            bfs(it);

    return 0;
}
