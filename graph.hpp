#pragma once

/*
	a graph data structure represented as adjacency list
*/
template <typename T>
class Graph
{

public:
	Graph(bool is_directed = false) : m_directed(is_directed){};
	 

private:
	class Vertex;
	class Edge;

	using VertexList = std::vector<Vertex>;
	using OutEdgeList = std::std::vector<Edge>;
	const bool m_directed;
	GraphVertices vertices;


	class Edge
	{
	public:
		Edge(/*const Vertex& source, */const Vertex& target, int weight = 1) :
			/*m_source(source),*/ m_target(target), m_weight(weight){}

	private:
		/*Vertex m_source;*/
  		Vertex m_target;
  		int m_weight;
	}

	class Vertex
	{
	public:
		Vertex(T data, unsigned int id) : m_data(data), m_id(id){}
		void addEdge(Vertex target, int weight);
		const VertexEdges& getOutEdges() const {return m_edges;}
	private:
		T m_data;
		unsigned int m_id;
		VertexEdges m_edges;
	}

}

