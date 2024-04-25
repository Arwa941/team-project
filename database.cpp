#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class student
{
   private:
   int id;
   string name;
   int age;
   long long int phone_number;
   //string address;
   float GPA;

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
   void set_GPA(float GPA)
   {
       this->GPA=GPA;
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
   float get_GPA()
   {
       return GPA;
   }
};
int main(){
    
    return 0;
}