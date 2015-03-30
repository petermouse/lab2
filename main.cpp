#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BMI.h"
using namespace std;
int main(void)
{
  int h,m;
  BMI a;

  ifstream inFile("file.in", ios::in);
  if(!inFile)
  {
    cerr << "Failed opening" << endl;
    exit(1);
  }
  ofstream outFile("file.out", ios::out);
  if(!outFile)
  {
    cerr << "Failed opening" << endl;
    exit(1);
  }
  while(inFile >> h >> m)
  {
  a.setMass(m);
  a.setHeight(h);
  a.setBMI();
  if(h*m!=0)
  {
    outFile << a.getBMI() << "\t" << a.getCategory(a.getBMI()) << endl;   
  }  
  else
    exit(0);
  }
}
