#ifndef __VERTEX_H
#define __VERTEX_H

#include "Base.h"
#include "Edge.h"

class Vertex {
private:
	int m_Point;
	std::forward_list<Edge> m_Adjacent;

public:
	int getPoint()									{ return m_Point;		}
	void setPoint(int i_PointId)					{ m_Point = i_PointId;	}
	std::forward_list<Edge> getAdjList()			{ return m_Adjacent;	}
	void setAdjList(std::forward_list<Edge> i_List) { m_Adjacent = i_List;	}
	Edge addEdge(Vertex i_Adjacent) {
		Edge toAdd(*this, i_Adjacent);
		m_Adjacent.push_front(toAdd);
		return toAdd;
	}

	Vertex(int i_PointId) {
		setPoint(i_PointId);
		m_Adjacent = std::forward_list<Edge>();
	}
};

#endif