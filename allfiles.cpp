#include <iostream>
#include <string>
using namespace std;


//create model share_data
class sharedata
{
   private:
   int id;
   string name;
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
   //GETTER FUNCTIONS
   int get_ID()
   {
       return id;
   }
   string get_name()
   {
       return name;
   }
};

//create model base_entity
class BaseEntity : public sharedata
{
   private:
   int age;
   long long int phone_number;
   
    public:
   //SETTER FUNCTIONS
   void set_age(int age)
   {
       this->age=age;
   }
   void set_phone_number(long long int phone_number)
   {
       this->phone_number=phone_number;
   }
   //GETTER FUNCTIONS
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
   int studentsIDS[5];
   public:
   //SETTER FUNCTIONS
   void set_salary(float salary)
   {
       this->salary=salary;
   }
   void set_studentsIDS(int studentsIDS[5])
   {
    for(int i=0;i<5;i++)
    {
        this->studentsIDS[i]=studentsIDS[i];
    }
   }
   //GETTER FUNCTIONS
   float get_salary()
   {
       return salary;
   }
   int * get_studentsIDS()
   {
       return studentsIDS;
   }
};


//create model course
class course : public sharedata
{
    private:
    double hour;
    int studentsIDS[5];

    public:
    //SETTER FUNCTIONS
   void set_hour(double hour)
   {
       this->hour=hour;
   }
   void set_studentsIDS(int studentsIDS[5])
   {
    for(int i=0;i<5;i++)
    {
        this->studentsIDS[i]=studentsIDS[i];
    }
   }
   //GETTER FUNCTIONS
   double get_hour()
   {
       return hour;
   }
   int * get_studentsIDS()
   {
       return studentsIDS;
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
   course courses[5];


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
   void get_cources(course cources[5])
   {
        for(int i=0;i<5;i++)
        {
             this->courses[i]=cources[i];
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
    course * get_cources()
   {
        return courses;
   }
};


