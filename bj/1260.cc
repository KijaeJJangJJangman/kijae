#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool dfs_visited[1001];
bool bfs_visited[1001];
vector<int> graph[1001];
vector<int> dfs_cnt;
vector<int> bfs_cnt;
void dfs(int x){
    dfs_visited[x] = true;
    dfs_cnt.push_back(x);
    for(int i = 0 ; i < graph[x].size() ; i++){
        int y = graph[x][i];
        if(!dfs_visited[y]){
            dfs(y);
        }
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start);
    bfs_cnt.push_back(start);
    bfs_visited[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i = 0 ; i < graph[x].size() ; i++){
            int y = graph[x][i];
            if(!bfs_visited[y]){
                q.push(y);
                bfs_visited[y] = true;
                bfs_cnt.push_back(y);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int v,e,n;
    cin >> v >> e >> n;
    for(int i = 0 ; i < e ; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 1 ; i <= 1000 ; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(n);
    bfs(n);
    for(int i = 0 ; i < dfs_cnt.size() ; i++){
        cout << dfs_cnt[i] << " ";
    }
    cout << "\n";
    for(int i = 0 ; i < bfs_cnt.size() ; i++){
        cout << bfs_cnt[i] << " ";
    }
    return 0;
}