#include <string>
using namespace std;
class BMI{
  public:
    void setMass(int m);
    void setHeight(int h);
    void setBMI();
    float getBMI();
    string getCategory(float c);	
  private:
    int mass;
    int height;
    float b;
};
