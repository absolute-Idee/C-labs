#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <idcard.h>

using namespace std;

class Student
{
public:
    Student(string,string,IdCard*);
    Student(string, string);

    IdCard *iCard;
    void setIdCard(IdCard *c);

    IdCard getIdCard();

    void set_name(string);
    string get_name();

    void set_last_name(string);
    string get_last_name();

    void set_scores(int []);

    void set_average_score(double);
    double get_average_score();

    void display() const;

    friend bool operator< (const Student&, const Student&);
    friend bool operator> (const Student&, const Student&);
    friend bool operator== (const Student&, const Student&);
    friend bool operator!= (const Student&, const Student&);

private:

    int scores[5];

    double average_score;

    string name;

    string last_name;
};
