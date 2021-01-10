#pragma once
#include <list>
#include <algorithm>
#include <student.h>

class Group
{
public:
    Group();
    Group(string name);
    string getName();
    void setName(string newName);
    int getSize();
    void addStudent (Student newStudent);
    void delStudent (Student oldStudent);
    Student findStudent(string, string);
    void GroupSort();
    void GroupOut();

private:
    string name;
    list <Student> masSt;
    list <Student>::iterator iter;
};


