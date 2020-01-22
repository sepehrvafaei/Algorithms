#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<algorithm>
using std::list; using std::vector; using std::queue;
using std::cin; using std::cout; using std::reverse;
class Graph {
private:
	int vertices;
	list<int> *adj;
	vector<int*> solve(int start);
	vector<int*> reconstructPath(int s, int e, vector<int*>);
public:
	Graph(int V);
	void addEdge(int v, int w);
	list<int>* BFS(int s, int e);
};
vector<int*> Graph::solve(int start) {
	queue<int> q;
	vector<bool> visited(vertices,false);
	vector<int*> prev(vertices, nullptr);
	q.push(start);
	while (!q.empty()) {
		int node=q.front();
		q.pop();
		list<int> neighbours = adj[node];
		for (auto next:neighbours) {
			if(!visited[next]){
				q.push(next);
				visited[next] = true;
				prev[next] = &node;
			}
		}
	}
	return prev;
}
vector<int*> reconstructPath(int s, int e, vector<int*> para) {
	vector<int*> path;
	for (int* at = &e; at != nullptr; at = para[*at]) {
		path.push_back(at);
	}
	path.reverse(path.begin(),path.end());
	if (*path[0] == s) { return path; }
	return {};
}
Graph::Graph(int n)
{
	this->vertices = n;
	adj = new list<int>[n];
}
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}
list<int>* Graph::BFS(int s, int e) {
	vector<int> prev = solve(s);
	return reconstructPath(s, e, prev);
}
int main() {

	cin.get();
	return 0;
}