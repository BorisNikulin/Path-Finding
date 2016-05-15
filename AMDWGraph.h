#pragma once

#include <vector>
#include <functional>

namespace pf
{
namespace graph
{

// Adjacency Matrix Directed Weighted Graph
template<typename K, typename V, typename Compare = std::less<V>>
class AMDWGraph : public BaseGraph<K, V>
{
	private:
		std::vector<K> vl;
		std::vector<std::vector<V>> am;
		Compare compare;

	public:
		AMDWGraph(Compare& comp);
		virtual void addVertex(const K& v);
		virtual void removeVertex(const K& v);
		virtual void addEdge(const K& v1, const K& v2, const V& weight);
		virtual void removeEdge(const K& v1, const K& v2);
		virtual ~AMDWGraph();
};

}
}
