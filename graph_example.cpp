#include "graph.hpp"


int main()
{
	Graph<std::string>* graph = new Graph<std::string>(true);
	size_t v0_id = graph->add_vertex("A");
	size_t v1_id  = graph->add_vertex("B");

	Graph<std::string>::VertexList graph_vertices = graph->get_vertices();

	// for(auto v: graph_vertices)
	// {
	// 	std::cout << v.get_id() << std::endl;
	// }
	std::cout << *graph << std::endl;

	graph->add_edge(v0_id, v1_id);

	std::cout << *graph << std::endl;

	return 0;
}