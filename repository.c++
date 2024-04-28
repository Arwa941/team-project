#include "allfiles.cpp"
#include <bits/stdc++.h>
using namespace std;
////////////////////////////// STUDENT ///////////////////////////
//interface studentRepository
class studentRepository
{
    public:
      virtual int addstudent(student Student)=0;
};

//class studentRepositoryIMPL
class studentRepositoryIMPL : public studentRepository
{
    private:
    student students[25];
    int counter=0;
    public:
     int addstudent(student Student)
    {
        if(counter==25)
       { cout<<"Full students";}
        else {
        students[counter]=Student;
        counter++;
        }
       
    }
};



////////////////////////////// COURSE ///////////////////////////
//interface course Repository
class courseRepository
{
    public:
      virtual int addcourse(course Course)=0;

};
//class courseRepositoryIMPL
class courseRepositoryIMPL : public courseRepository
{
private:
    course courses[25];
    int counter=0;
    public:
     int addcourse(course Course)
    {
        if(counter==25)
       { cout<<"Full courses";}
        else {
        courses[counter]=Course;
        counter++;
        }
    }
};

////////////////////////////// TEACHER ///////////////////////////
//interface teacherRepository
class teacherRepository
{
    public:
       virtual int addteacher(teacher Teacher)=0;

};

//class teacherRepositoryIMPL
class teacherRepositoryIMPL : public teacherRepository
{
    private:
    teacher teachers[25];
    int counter=0;
    public:
     int addteacher(teacher Teacher)
    {
        if(counter==25)
       { cout<<"Full teachers";}
        else {
        teachers[counter]=Teacher;
        counter++;
        }
    }
};