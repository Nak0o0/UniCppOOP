#include <cstdlib>
#include <iostream>

using namespace std;

void ReadPin(float *Pin, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << "Type a float : ";
         cin >> Pin[i];
     }
}


void ReadPin(int *Pin, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << "Type an integer : ";
         cin >> Pin[i];
     }
}

void ShowPin(float *Pin, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << Pin[i] << "\t";
     }
     cout << endl;
}

void ShowPin(int *Pin, int n)
{
     for (int i = 0; i < n; i++)
     {
         cout << Pin[i] << "\t";
     }
     cout << endl;
}

int Average(int *Pin, int n)
{
  int sum = 0;
  
     for (int i = 0; i < n; i++)
     {
         sum = sum + Pin[i];
     }
     return sum / n;
}

float Average(float *Pin, int n)
{
  float sum = 0.0;
  
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
    
    ReadPin(iPin,3);
    ShowPin(iPin,3);
    cout << Average(iPin, 3) << endl;


    ReadPin(fPin,5);
    ShowPin(fPin,5);
    cout << Average(fPin, 5) << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


