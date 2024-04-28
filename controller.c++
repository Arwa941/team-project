#include "service.c++"
#include <bits/stdc++.h>
using namespace std;

class studentcontroller{
    private:
    studentservice Studentservice;
    public:
    int addstudent(student Student)
    {
        return studentservice.addstudent(Student);
    }


};

class coursecontroller{
    private:
    courseservice Courseservice;
    public:
    int addcourse(course Course)
    {
        return Courseservice.addcourse(Course);
    }

};

class teachercontroller{
    private:
    teacherservice Teacherservice;
    public:
    int addteacher(teacher Teacher)
    {
        return Teacherservice.addteacher(Teacher);
    }
    

};