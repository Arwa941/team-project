#include "BaseEntity.c++"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class student : public BaseEntity 
{
   private:
   float GPA;

   public:
   //SETTER FUNCTIONS
   void set_GPA(float GPA)
   {
       this->GPA=GPA;
   }
   //GETTER FUNCTIONS
   float get_GPA()
   {
       return GPA;
   }
};
