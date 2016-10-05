#include <iostream>
using namespace std;

class Room
{
	private:
	int id,day;
	float timi,ekptosi;
	
	public:	
	Room(int id=0, int day=0, float timi=0)
	{
		this->id=id; //(*this).id mou deixnei to antikeimeno = this->id
		this->day=day;
		this->timi=timi;
		this->ekptosi=0;
	}
	void setKratisi(int id=0, int day=0, float timi=0)
	{
		if (id<0 && day<0 && timi<0)
		{
		this->id=id;
		this->day=day;
		this->timi=timi;
		}
	}
	float Xreosi()
	{
		int xreosi;
		xreosi=(day*timi)-ekptosi*day*timi;
		return xreosi;	
	}
	void setEkptosi(float ekptosi)
	{
		if(ekptosi<=1&&ekptosi>=0)
		{
			this->ekptosi=ekptosi;
		}
	}	
};
	float CalculateEsoda(Room *Pin,int n)
	{	int sum=0;
		for(int i=0; i<n;i++)
		{
			sum+=Pin[i].Xreosi();
		}
		return sum;
	}
int main(int argc, char** argv) {
	Room domatia[5];
	Room ena(123,3,60);
	Room dio(124,2,80);
	Room tria(125,4,56);
	domatia[0]=ena;
	domatia[1]=dio;
	domatia[2]=tria;
	
	domatia[0].setEkptosi(0.1);
	domatia[2].setEkptosi(0.1);
	
	return 0;
}
