#pragma once

#include <vector>
#include <list>

#include <functional>
#include <algorithm>
#include <iterator>

#include <iostream>

namespace pf
{
namespace graph
{

template <typename K, typename V>
struct Neighbor
{
		K& vertex;
		V& edge;
};

// Adjacency Matrix Directed Graph (weighted but can be unweighed if V=bool)
template <typename K, typename V>
class AMDGraph
{
	private:
		//vertex list
		std::vector<K> vl;
		//adjacency matrix (nullptr is no edge)
		std::vector<std::vector<V*>> am;

	public:
		AMDGraph();
		AMDGraph<K, V>& addVertex(const K& v);
		bool addEdge(const K& v1, const K& v2, const V* weight);
		bool removeVertex(const K& v);
		bool removeEdge(const K& v1, const K& v2);
		std::list<Neighbor<K, V>>& getNeigbors (const K& v) const;
		~AMDGraph();
};

//template<typename K>
//class AMDGraph<K, bool>
//{
//	private:
//		//vertex list
//		std::vector<K&> vl;
//		//adjacency matrix (false is no edge)
//		std::vector<std::vector<bool>> am;
//
//	public:
//		AMDGraph();
//		AMDGraph<K, bool>& addVertex(const K& v);
////		is the next function needed?
//		bool addEdge(const K& v1, const K& v2, const bool weight);
////		bool addEdge(const K& v1, const K& v2);
//		bool removeVertex(const K& v);
//		bool removeEdge(const K& v1, const K& v2);
//		//todo getNeigbors (return deque? forward list? of structs with verts and weights)
//		~AMDGraph();
//};
//
//
//template<typename K>
//bool AMDGraph<K, bool>::addEdge(const K& v1, const K& v2, const bool weight)
//{
//	std::vector<K>::iterator v1It = std::find(vl.begin(), vl.end(), v1);
//	std::vector<K>::iterator v2It = std::find(vl.begin(), vl.end(), v2);
//
//	if(v1It != vl.end() && v2It != vl.end())
//	{
//		*((am.begin() + v1It)->begin() + v2It) = weight;
//		return true;
//	}
//	return false;
//}


}
}
