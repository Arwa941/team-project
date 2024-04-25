#include "BaseEntity.c++"
#include "teacher.cpp"
class student : public BaseEntity 
{
   private:
   float GPA;
   teacher arr[5];

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
