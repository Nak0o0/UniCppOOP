#include <iostream>
using namespace std;

class Rectangle
{
	private:
		float plA,plB;
	public:
		float Embadon(void)
	{
		return plA*plB;
	}	
	bool setA(float a)	
	{
		if (a>0)
		{
			plA=a;
			return true;
		}
		return false;
	}
	bool setB(float b)	
	{
		if (b>0)
		{
			plB=b;
			return true;
		}
		return false;
	}
	float Perimetros()
	{
		return 2*plA+2*plB; 
	}
	float getA()
	{
		return plA;
	}
	float getB()
	{
		return plB;
	}
	Rectangle(float a=1.0f, float b=2.0f) 
	{
		plA=a;
		plB=b;
	}
	void scale(float f) 
	{
		plA=f*plA;
		plB=f*plB;
	}
	void scale(float f1,float f2)
	{
		plA=f1*plA;
		plB=f2*plB;
	}
	void print(int c)
	{
		if(c==1)
		{
			cout<<Embadon();
		}
		else if (c==2)
		{
			cout<<Perimetros();
		}
		else 
		{
			cout<<Embadon()<<" "<<Perimetros();
		}
	}
};

int main(int argc, char** argv) {
	Rectangle t3(3.0f,5.0f);
	Rectangle t1,t2(5.0f); 
	float a,b;
	cin>>a;
	cin>>b;
	
	if(t1.setA(a) && t1.setB(b))
	{
		cout<<"Times OK!"<<endl;
		cout<<"Embadon: "<<t1.Embadon()<<endl;
		cout<<"Perimetros: "<<t1.Perimetros()<<endl;
		cout<<"Timh A: "<<t1.getA()<<endl<<"Timh B: "<<t1.getB()<<endl;
	}
	else
	{
		cout<<"Times lathos!"<<endl;
	}
	t3.scale(3.0f);
	t3.print(3);
	return 0;
}
