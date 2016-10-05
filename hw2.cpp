#include <iostream>
using namespace std;

class SomeTime
{
	private:
		int h,m,s;
		bool am;
	public:
	SomeTime(int h=0, int m=0, int s=0, bool am=true)
	{
		this->h=h;
		this->m=m;
		this->s=s;
		this->am=am;
	}
	void print()
	{
		if (am)
		{
			cout<<h<<":"<<m<<":"<<s<<"am";
		}
		else 
		{
		cout<<h<<":"<<m<<":"<<s<<"pm";
		}
	}
	int Compare(int x, int y, int z, bool w)
	{
		int t1,t2;
		if (w)
		{
			 t1=3600*x+60*y+z;
		}
		else
		{
			 t1=3600*(x+12)+60*y+z;
		}
		if (am)
		{
			 t2=3600*h+60*m+s;
		}
		else
		{
			 t2=3600*(h+12)+60*m+s;
		}
		if (t1>t2)
		{
			return 1;
		}
		else if(t1==t2)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	
	
};

int main(int argc, char** argv) {
	SomeTime s(5,30,30,true);
	s.print();
	cout<<s.Compare(4,5,15,false);
	return 0;
}
