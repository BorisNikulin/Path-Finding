#include "AMDGraph.h"

namespace pf
{
namespace graph
{

template<typename K, typename V>
AMDGraph<K, V>::AMDGraph()
{

}

template<typename K, typename V>
AMDGraph<K, V>& AMDGraph<K, V>::addVertex(const K& v)
{
	vl.push_back(v);

	am.reserve(vl.size());
	std::for_each(am.begin(), am.end(), [&](std::vector<V>& v){v.reserve(vl.size());});

	for(int i = 0; i < am.size() - 1; ++i)
	{
		am[vl.size() - 1][i] = nullptr;
		am[i][vl.size() - 1] = nullptr;
	}
	am[vl.size() - 1][vl.size() - 1] = nullptr;

	return this;
}

template<typename K, typename V>
bool AMDGraph<K, V>::addEdge(const K& v1, const K& v2, const V* weight)
{
	typename std::vector<K>::iterator v1It = std::find(vl.begin(), vl.end(), v1);
	typename std::vector<K>::iterator v2It = std::find(vl.begin(), vl.end(), v2);

	if(v1It != vl.end() && v2It != vl.end())
	{
		*((am.begin() + v1It)->begin() + v2It) = weight;
		return true;
	}
	return false;
}


template<typename K, typename V>
bool AMDGraph<K, V>::removeVertex(const K& v)
{
	typename std::vector<K>::iterator it = std::find(vl.begin(), vl.end(), v);

	if(it != vl.end())
	{
		vl.erase(it);

		am.erase(am.begin() + it);

		for(int i = 0; i < am.size(); ++i)
		{
			am[i].erase(am[i].begin() + it);
		}

		return true;
	}
	return false;
}

template<typename K, typename V>
bool AMDGraph<K, V>::removeEdge(const K& v1, const K& v2)
{
	typename std::vector<K>::iterator v1It = std::find(vl.begin(), vl.end(), v1);
	typename std::vector<K>::iterator v2It = std::find(vl.begin(), vl.end(), v2);

	if(v1It != vl.end() && v2It != vl.end())
	{
		*((am.begin() + v1It)->begin() + v2It) = nullptr;
		return true;
	}
	return false;
}

template<typename K, typename V>
std::list<Neighbor<K, V>>& AMDGraph<K, V>::getNeigbors(const K& v) const
{
	typename std::list<Neighbor<K, V>> nbrs;
	typename std::vector<K>::iterator it = std::find(vl.begin(), vl.end(), v);

	for(int i = 0; i < vl.size(); ++i)
	{
		V*& edge = (am + it)[i];
		if(edge != nullptr)
		{
			Neighbor<K, V> n{vl[i], edge};
			nbrs.push_back(n);
		}
	}
	return nbrs;
}

template<typename K, typename V>
AMDGraph<K, V>::~AMDGraph()
{
	~vl();
	for_each(am.begin(), am.end(), [&](std::vector<V>& v){~v();});
	~am();
}

template<typename K, typename V>
std::ostream& operator<<(std::ostream& out, AMDGraph<K, V> graph)
{
	//todo do the needfull
	//todo make friend of AMDGraph?
	return out;
}

}
}
