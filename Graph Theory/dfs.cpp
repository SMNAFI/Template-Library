void dfs(int at) {
    if(!visited[v]) {
        for(auto x: adj[v]) {
            if(!visited[x]) {
                visited[x] = true;
                dfs(x);
            }
        }
    } 
}