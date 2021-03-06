#ifndef _TILE
#define _TILE

#include <cassert>
using namespace std;

enum Direction { NORTH, SOUTH, EAST, WEST };

class Tile
{
	public:
	Tile()
	{
		for ( int i = 0; i < 4; i++ )
		{
			m_neighbor[i] = NULL;
		}
	}

	void Setup( const string& name, const string& description )
	{
		cout << name << endl;
		m_name = name;
		m_description = description;
	}

	void SetNeighbor( Direction dir, Tile* tile )
	{
		assert( dir >= NORTH && dir <= WEST );
		m_neighbor[ dir ] = tile;
	}

	Tile* GetNeighbor( Direction dir )
	{
		return m_neighbor[ dir ];
	}

	void Output()
	{
		cout << endl;
		cout << m_name << endl;
		cout << m_description << endl;
	}

	private:
	string m_name;
	string m_description;
	Tile* m_neighbor[4];
};

#endif
