//Pseudocode
/*
start with 1 node and traverse if not traversed, while traversing make a visited array and mark 1 for all the nodes connected
for further analysis check if the node is visited or not, if not then perform bfs or dfs or dsu on it

DFS APPROACH - 
CONNECTED_COMPONENTS(Graph G):
    visited = array of size V initialized to false

    for each vertex v in G:
        if visited[v] == false:
            PRINT "New Component:"
            DFS(G, v, visited)


DFS(Graph G, vertex v, visited):
    visited[v] = true
    PRINT v

    for each neighbor u of v:
        if visited[u] == false:
            DFS(G, u, visited)

BFS APPROACH-
BFS_Component(Graph G, start, visited):
    create queue Q
    visited[start] = true
    enqueue start into Q

    while Q is not empty:
        v = dequeue Q
        PRINT v

        for each neighbor u of v:
            if visited[u] == false:
                visited[u] = true
                enqueue u

*/





















