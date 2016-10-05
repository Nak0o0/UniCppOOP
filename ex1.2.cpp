#include <cstdlib>
#include <iostream>

using namespace std;

template<class T>
void ReadPin(T *Pin, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << "Type a number : ";
         cin >> Pin[i];
     }
}

template<class T>
void ShowPin(T *Pin, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << Pin[i] << "\t";
     }
     cout << endl;
}

template<class T>
T Average(T Pin[], int n)
{
  T sum = 0;
  
     for (int i = 0; i < n; i++)
     {
         sum = sum + Pin[i];
     }
     return sum / n;
}

int main(int argc, char *argv[])
{
    int iPin[3];
    float fPin[5];
    double dPin[3];
    
    ReadPin(iPin,3); 
    ShowPin(iPin,3);    
    cout << Average(iPin, 3) << endl;


    ReadPin(fPin,5);
    ShowPin(fPin,5);
    cout << Average(fPin, 5) << endl;
    
    ReadPin(dPin,3);
    ShowPin(dPin,3);
    cout << Average(dPin, 3) << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


