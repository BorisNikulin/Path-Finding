#pragma once

namespace pf
{
namespace graph
{

template<typename K, typename V>
class BaseGraph
{
	private:

	public:
		virtual void addVertex(const K& v) = 0;
		virtual void removeVertex(const K& v) = 0;
		virtual void addEdge(const K& v1, const K& v2, const V &weight) = 0;
		virtual void removeEdge(const K& v1, const K& v2) = 0;
		virtual ~BaseGraph() = 0;
};
}
}
