#pragma once

#include <vector>
#include <functional>
#include <algorithm>

namespace pf
{
namespace graph
{

// Adjacency Matrix Directed Weighted Graph
template<typename K, typename V, typename Compare = std::less<V> >
class AMDWGraph<K, V, Compare> : public BaseGraph<K, V>
{
	private:
		//vertex list
		std::vector<K> vl;
		//adjacency matrix
		std::vector<std::vector<V>> am;
		Compare compare;

	public:
		AMDWGraph(Compare& comp);
		virtual void addVertex(const K& v);
		virtual void addEdge(const K& v1, const K& v2, const V& weight);
		virtual K removeVertex(const K& v);
		virtual K removeEdge(const K& v1, const K& v2);
		virtual ~AMDWGraph();
};

}
}
