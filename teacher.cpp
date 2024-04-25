#include "BaseEntity.c++"    //inheritance
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