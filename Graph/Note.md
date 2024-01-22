# What is Graph Data Structure?

A Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(V, E).

``Directed Graphs``: The Directed graphs are such graphs in which edges are directed in a single direction.

- sum of indegree : |E|
- sum of outdegree : |E|
- Maximum number of edges : |V| x |V-1|

``Undirected Graphs:`` Undirected graphs are such graphs in which the edges are directionless or in other words bi-directional. That is, if there is an edge between vertices u and v then it means we can use the edge to go from both u to v and v to u

- sum of degree : |E|
- Maximum number of edges : |V| x |V-1| / 2

``Walk`` : In graph theory, a walk is a sequence of vertices and edges in a graph. It can be a simple walk (no repeated vertices) or a general walk (allowing repeated vertices).

``Path`` : A path is a specific type of walk in which no vertex is repeated (except for the first and last vertices, which are the same).

``Cyclic`` : A graph is cyclic if it contains at least one cycle, which is a closed walk where the first and last vertices are the same, and no other vertices (except the first and last) are repeated.

``Acyclic`` : A graph is acyclic if it does not contain any cycles.


`` Representations of Graph``

- ``Adjacency Matrix``

An adjacency matrix is a way of representing a graph as a matrix of boolean (0’s and 1’s).

- f there is an edge from vertex i to j, mark adjMat[i][j] as 1.

- If there is no edge from vertex i to j, mark adjMat[i][j] as 0.

- For an undirected graph,it is a symmmetric matrix.


![Alt text](<Screenshot 2023-12-26 144442.png>)  

![Alt text](<Screenshot 2023-12-26 144654.png>)

``Algorithm for implementation of graph using adjacency matrix in cpp:``

- Create a multi-dimensional array of size V x V, where V is the number of vertices in the graph.

- Initialize all the elements of the array to 0.

- For each edge in the graph, set the corresponding element in the adjacency matrix to 1.

- To print the adjacency matrix, iterate over the array and print each element.

- NOTE

```
Pros: Representation is easier to implement and follow. Removing an edge takes O(1) time. Queries like whether there is an edge from vertex 'u' to vertex 'v' are efficient and can be done O(1).Cons: Consumes more space O(V^2). Even if the graph is sparse(contains less number of edges), it consumes the same space. Adding a vertex is O(V^2) time. Please see this for a sample Python implementation of adjacency matrix.
```

```

class graph{
    int vertices;
    int **arr;
    public:
    graph(int v){
        vertices=v;
        arr=new int*[v];
        for(int i=0;i<v;i++){
            arr[i]=new int[v];
        }
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
            arr[i][j]=0;
        }
        }
    }
    
    void adjencymatrix(int u,int v){
        arr[u][v]=1;
        arr[v][u]=1;
        }
        
    void display(){
        for(int i=0;i<vertices;i++){
            cout<<"vertices "<<i<<": ";
          for(int j=0;j<vertices;j++){
            cout<<arr[i][j]<<" ";
        }  
        cout<<endl;
        }
    }

    ~Graph() {
        for (int i = 0; i < vertices; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    
};

```
- ``Adjacency List``

 The size of array is equal to the number of vertices (i.e, n). Each index in this array represents a specific vertex in the graph. The entry at the index i of the array contains a linked list containing the vertices that are adjacent to vertex i.

Let’s assume there are n vertices in the graph So, create an array of list of size n as adjList[n].

- adjList[0] will have all the nodes which are connected (neighbour) to vertex 0.

- adjList[1] will have all the nodes which are connected (neighbour) to vertex 1 and so on.

![Alt text](<Screenshot 2023-12-26 150301.png>)

![Alt text](<Screenshot 2023-12-26 150318.png>)

``Algorithm for the implementation of a graph using an adjacency list in C++ using a vector:``

- Create a vector of vectors, where each inner vector represents the adjacency list for a particular vertex.

- For each edge in the graph, add an entry to the adjacency list for the source vertex, pointing to the destination vertex.

- To implement a weighted graph, you can also add a weight to each edge entry in the adjacency list.

- NOTE

```
Pros: Saves space O(|V|+|E|). In the worst case, there can be C(V, 2) number of edges in a graph thus consuming O(V^2) space. Adding a vertex is easier. Cons: Queries like whether there is an edge from vertex u to vertex v are not efficient and can be done O(V).

```

```
void graph(vector<vector<int>> &v2,int u,int v){
    v2[u].push_back(v);
    v2[v].push_back(u);
}

int main() {
    int m=5;
    vector<vector<int>> v1(m);
    graph(v1,0,1);
    graph(v1,1,2);
    graph(v1,2,3);
    graph(v1,3,1);
}

```

### Breadth-First Search (BFS) in graph

``Algorithm for Breadth-First Search (BFS) in graph:
Start at the source node.``

1. Start at the source node.
2. Create a queue and add the source node to it.
3. Mark the source node as visited.
4. While the queue is not empty:
- Remove the first node from the queue.
- For each of the unvisited neighbors of the node:

  Add the neighbor to the queue.

  Mark the neighbor as visited.

5. Repeat steps 3 and 4 until all nodes have been visited.

```
void bfs(vector<vector<int>> &temp,int vrt,int s){
    queue<int> que;
    bool visited[vrt+1]={false};
    visited[s]=true;
    que.push(s);
    while(!que.empty()){
        int removed=que.front();
        que.pop();
        cout<<removed<< " ";
        for(int v:temp[removed]){
            if(visited[v]==false){
                visited[v]=true;
                que.push(v);
            }
        }      
    }
}
```

``Applications of BFS``

- Shortest Path and Minimum Spanning Tree for unweighted graph

- Cycle detection in undirected graph

- In Ford-Fulkerson algorithm, we can either use Breadth First or Depth First Traversal to find the maximum flow.

- To test if a graph is Bipartite We can either use Breadth First or Depth First Traversal. 

- Path Finding We can either use Breadth First or Depth First Traversal to find if there is a path between two vertices.
