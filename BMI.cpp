#include "BMI.h"
#include <iostream>
using namespace std;
  void BMI::setMass(int m)
  {
    mass=m;
  }
  void BMI::setHeight(int h)
  {
    height=h;
  }
  void BMI::setBMI()
  {
    b=10000*mass/(float)height/height;
  }
  float BMI::getBMI()
  {
    return b;
  }
  string BMI::getCategory(float c)
  {
  if (c<15)
    return "Very severely underweight";
  if (c>=15 && c<16)	
    return "Severely underweight";
  if (c>=16 && c<18.5)
    return "Underweight";
  if (c>=18.5 && c<25)
    return "Normal";
  if (c>=25 && c<30)
    return "Overweight";
  if (c>=30 && c<35)
    return "Obese Class I (Moderately obese)";
  if (c>=35 && c<40)
    return "Obese Class II (Severely obese)";
  if (c>=40)
    return "Obese Class III (Very severely obese)";
  }
