#pragma once

#include <vector>
#include <functional>
#include <algorithm>

namespace pf
{
namespace graph
{

// Adjacency Matrix Directed Weighted Graph
template<typename K, typename V>
class AMDWGraph
{
	private:
		//vertex list
		std::vector<K> vl;
		//adjacency matrix (nullptr is no edge)
		std::vector< std::vector<V*> > am;

	public:
		AMDWGraph();
		AMDWGraph<K, V>& addVertex(const K& v);
		AMDWGraph<K, V>& addEdge(const K& v1, const K& v2, const V& weight);
		bool removeVertex(const K& v);
		bool removeEdges(const K& v1, const K& v2);
		bool removeEdge(const K& v1, const K& v2, const V& weight);
		//todo getNeigbors (return deque? forward list? of structs with verts and weights)
		~AMDWGraph();
};

}
}
