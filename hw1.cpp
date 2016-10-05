#include <iostream>
using namespace std;

template <class T>
T Average(T *Pin, int n)
{
	T sum=0;
	for (int i=0; i<n; i++)
	{
		sum+=Pin[i];
	}
	return sum/n;
}
template <class T>
T Diaspora(T *Pin,int n)
{
	T sum=0;
	T mesi=Average(Pin,n);
	for (int i=0; i<n; i++)
	{
		sum=sum+(Pin[i]-mesi)*(Pin[i]-mesi);
	}
	return sum/n;
}
	

int main(int argc, char** argv) {
	return 0;
}
