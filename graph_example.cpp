// #include <iostream>
#include "graph.hpp"

template <typename T>
std::ostream& operator << (std::ostream& os,const Graph<T>& graph)
{

	os<< "Adjacency list :" << std::endl;
	for(auto v: graph.get_vertices())
	{
		os << v.get_data() << " :";
		for(auto edge: v.get_out_edges())
		{
			os << edge.get_target().get_data() << ", ";
		}
		os << std::endl;
	}
	return os;
}


int main()
{
	Graph<std::string>* graph = new Graph<std::string>();
	graph->add_vertex("A");
	graph->add_vertex("B");
	std::cout << *graph << std::endl;
	return 0;
}