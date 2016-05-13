#include <iostream>
#include <string>
#include "student.h"
int main()
{
 struct student stud;
    std::cout <<"What id the student's Name & ID?:";
    std::cin >>stud.name>>stud.id;
    std::cout <<"Grades: Assignment Midterm Fin:";
    std::cin >>stud.id>>stud.midt>>stud.fin;
    std::cout <<"Name: " << stud.name << std::endl
              <<"Student ID: " << stud.id << " Grade:"
              << (stud.midt + stud.fin + stud.assig)
              << std::endl;
}