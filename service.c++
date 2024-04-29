#include "repository.c++"
#include <bits/stdc++.h>
using namespace std;
////////////////////////////// STUDENT ///////////////////////////
//interface studentService
class studentservice
{
    public:
    virtual int addstudent(student Student)=0;
};
//class studentServiceIMPL
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
////////////////////////////// COURSE ///////////////////////////
//interface courseService
class courseservice
{
    public:
      virtual int addcourse(course Course)=0;
};
//class courseServiceIMPL
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

////////////////////////////// TEACHER ///////////////////////////
//interface teacherService
class teacherservice
{ 
    public:
       virtual int addteacher(teacher Teacher)=0;
};
//class teacherServiceIMPL
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
