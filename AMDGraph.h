#pragma once

#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>
#include <iostream>

namespace pf
{
namespace graph
{

// Adjacency Matrix Directed Graph (weighted but can be unweighed if V=bool)
template<typename K, typename V>
class AMDGraph
{
	private:
		//vertex list
		std::vector<K&> vl;
		//adjacency matrix (nullptr is no edge)
		std::vector<std::vector<V*>> am;

	public:
		AMDGraph();
		AMDGraph<K, V>& addVertex(const K& v);
		bool addEdge(const K& v1, const K& v2, const V* weight);
		bool removeVertex(const K& v);
		bool removeEdge(const K& v1, const K& v2);
		//todo getNeigbors (return deque? forward list? of structs with verts and weights)
		~AMDGraph();
};

}
}
