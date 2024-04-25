#include <iostream>
#include <string>
#include<cmath>
using namespace std;

//create model base_entity
class BaseEntity
{
   private:
   int id;
   string name;
   int age;
   long long int phone_number;
   
    public:
   //SETTER FUNCTIONS
   void set_ID(int id)
   {
       this->id=id;
   }
   void set_name(string name)
   {
       this->name=name;
   }
   void set_age(int age)
   {
       this->age=age;
   }
   void set_phone_number(long long int phone_number)
   {
       this->phone_number=phone_number;
   }
   //GETTER FUNCTIONS
   int get_ID()
   {
       return id;
   }
   string get_name()
   {
       return name;
   }
   int get_age()
   {
       return age;
   }
   long long int get_phone_number()
   {
       return phone_number;
   }
};


//create model teacher
//#include "BaseEntity.c++"    //inheritance

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


//create model student
/*#include "BaseEntity.c++"*/
/*#include "teacher.cpp"*/

class student : public BaseEntity 
{
   private:
   float GPA;
   teacher teachers[5];

   public:
   //SETTER FUNCTIONS
   void set_GPA(float GPA)
   {
       this->GPA=GPA;
   }
   void set_teachers(teacher teachers[5])
   {
        for(int i=0;i<5;i++)
        {
             this->teachers[i]=teachers[i];
        }
   }
   //GETTER FUNCTIONS
   float get_GPA()
   {
       return GPA;
   }
   teacher * get_teachers()
   {
        return teachers;
   }
};

