#include "repository.c++"
#include <bits/stdc++.h>
using namespace std;
class studentservice
{
    public:
    virtual int addstudent(student Student)=0;
};
class studentserviceIMPL
{
    private:
    studentRepository StudentRepository;
    public:
    int addstudent(student Student)
    {
        return StudentRepository.addstudent(Student);
    }
};
//////////////////////////
class courseservice
{
    public:
      virtual int addcourse(course Course)=0;
};
class courseserviceIMPL
{
    private:
    courseRepository CourseRepository;
    public:
    int addcourse(course Course)
    {
        return CourseRepository.addcourse(Course);
    }  
};
/////////////////////////
class teacherservice
{ 
    public:
       virtual int addteacher(teacher Teacher)=0;
};
class teacherserviceIMPL
{
    private:
    teacherRepository TeacherRepository;
    public:
    int addteacher(teacher Teacher)
    {
        return TeacherRepository.addteacher(Teacher);
    }
};
