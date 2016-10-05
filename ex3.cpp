#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	private:
		float x,y;
	public:
	Point (float x, float y)	
	{
		this->x=x;
		this->y=y;
	}	
    Point()
	{
		x=0;
		y=0;
	}
	float X()
	{
		return x;
	}
	float Y()
	{
		return this->y;
	}
	void Set(float x, float y)
	{
		this->x=x;
		this->y=y;
	}
	void Scale(float f)
	{
		x=x*f;
		y=y*f;
	}
	float Length(Point s)
	{
		float dx=this->x-s.X(); 
		float dy=this->y-s.Y();
		return sqrt(dx*dx+dy*dy); 
	}	
};
class Polygon
{
	private:
		Point *Vertices; 
		int noVertices;
		int index;
	public:
		Polygon(int noVertices)
		{
			Vertices=new Point[noVertices];   
			this->noVertices=noVertices;
			index=0;
		}
		Polygon&Add(float x, float y) 
		{
			if (index<noVertices)
			{
				Vertices[index].Set(x,y);
				index++;
			}
			return *this; 
		}
		Polygon&Add(Point s) 
		{
			if(index<noVertices)
			{
				Vertices[index]=s;
				index++;			
			}
			return *this; 
		}
		Polygon&Add(Point *s) 
		{
			if (index<noVertices)
			{
				Vertices[index].Set(s->X(),s->Y());
				index++;
			}
			return *this; 
		}
};
int main(int argc, char *argv[]) {
	Point p1(3,5);
	Point p2(6,2);
	p2.Scale(2);
	cout<<p2.X()<<"\t"<<p2.X()<<endl;
	cout<<p1.Length(p2)<<endl;
	cout<<p2.Length(p1); 
	Polygon s1(4);
	s1.Add(0,5).Add(p1).Add(3,0).Add(new Point(0,0)); 
	return 0;
}
