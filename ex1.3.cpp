#include <cstdlib>
#include <iostream>

using namespace std;

template<class T, class T1>
void ShowItems(T a, T1 b)
{
cout << a << " <-- " << b << endl;
}

template<class T, class T1, class T3>
void ShowItems(T a, T1 b, T3 c)
{
cout << a << " <-- " << b << " <-- " << c << endl;
}

int main(int argc, char *argv[])
{
ShowItems("2+1",3);
ShowItems("3",2+1); 
ShowItems("3","2+1", 3); 

system("PAUSE");
return EXIT_SUCCESS;
}


