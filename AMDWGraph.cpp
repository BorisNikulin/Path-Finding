#include "AMDWGraph.h"

namespace pf
{
namespace graph
{


template<typename K, typename V, typename Compare>
AMDWGraph<K, V, Compare>::AMDWGraph(Compare& comp)
{
	
}

template<typename K, typename V, typename Compare>
virtual void AMDWGraph<K, V, Compare>::addVertex(const K& v)
{
	vl.push_back(v);
	am.reserve(vl.size());
	std::for_each(am.begin(), am.end(), [](auto& v){v.reserve(vl.size());});
}
	
template<typename K, typename V, typename Compare>
virtual void AMDWGraph<K, V, Compare>::addEdge(const K& v1, const K& v2, const V& weight)
{
	
}
	
template<typename K, typename V, typename Compare>
virtual K AMDWGraph<K, V, Compare>::removeVertex(const K& v)
{
	
}
	
template<typename K, typename V, typename Compare>
virtual K AMDWGraph<K, V, Compare>::removeEdge(const K& v1, const K& v2)
{
	
}
	
template<typename K, typename V, typename Compare>
virtual AMDWGraph<K, V, Compare>::~AMDWGraph();

}
}
