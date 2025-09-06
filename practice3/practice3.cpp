#include <iostream>
#include <string>

class Student
{
protected:
    std::string name;
    std::string surname;
    int years;
    int course;
    int study;

public:
    Student(std::string n = "", std::string sn = "", int y = 0, int c = 0)
    {
        name = n;
        surname = sn;
        years = y;
        course = c;
    }

    friend std::ostream& operator<<(std::ostream& os, const Student& stud)
    {
        os << "student`s name and surname: " << stud.name << " " << stud.surname << std::endl;
        os << "student`s years: " << stud.years << std::endl;
        os << "student`s course: " << stud.course << std::endl;
        return os;
    }
};

class Aspirant : public Student
{

public:
    Aspirant(std::string n = 0, std::string sn = 0, int y = 0, int c = 0, int s = 0)
    {
        name = n;
        surname = sn;
        years = y;
        course = c;
        study = s;
    }


    friend std::ostream& operator<<(std::ostream& os, const Aspirant& aspi)
    {
        os << "aspirant`s name and surname: " << aspi.name << " " << aspi.surname << std::endl;
        os << "aspirant`s years: " << aspi.years << std::endl;
        os << "aspirant`s course: " << aspi.course << std::endl;
        os << "aspirant is working on his PhD for: " << aspi.study << " years" << std::endl;
        return os;
    }
};

int main()
{
    Student student("Sasha", "Kirillov", 19, 2);
    std::cout << student << std::endl;

    Aspirant aspirant("Maksim", "Vavrovskiy", 24, 1, 2);
    std::cout << aspirant << std::endl;
}
