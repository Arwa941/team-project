#include "BaseEntity.c++"    //inheritance
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class teacher : public BaseEntity
{
    private:
   float salary;
   public:
   //SETTER FUNCTIONS
   void set_salary(float salary)
   {
       this->salary=salary;
   }

   //GETTER FUNCTIONS
   float get_salary()
   {
       return salary;
   }
};