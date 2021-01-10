#include <iostream>
#include <string>
#include <student.h>
#include <idcard.h>
#include <group.h>
using namespace std;

int main()
{

    string name;
    string last_name;
    IdCard* idc = new IdCard(123, "Basic");
    IdCard* idc2 = new IdCard(456, "Basic");

    cout << "Name: ";
    getline(cin, name);

    cout << "Last name: ";
    getline(cin, last_name);


    Student student02 (name, last_name, idc);

    Student student03 ("Петр", "Петров", idc2);
    Student student04 ("Семен", "Смирнов", idc);
    Student student05 ("Саша", "Коен", idc2);
    Student student06 ("Дмитрий", "Ионов", idc);

    Group gr1957("1957");

    gr1957.addStudent(student02);
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

    int k = gr1957.getSize();
    gr1957.GroupSort();
    cout << "В группе "<< gr1957.getName() <<" "<<k<<" ст." << endl;
    gr1957.GroupOut();

    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Score " << i+1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    student02.set_scores(scores);
    double average_score = sum / 5.0;
    student02.set_average_score(average_score);
    cout<< "Average ball for " << student02.get_name() << " " << student02.get_last_name() << " is " << student02.get_average_score() <<endl;
    cout << "IdCard: " << student02.getIdCard().getNumber() << endl;
    cout << "Category: "  << student02.getIdCard().getCategory() << endl;

    gr1957.delStudent(student03);
    gr1957.delStudent(gr1957.findStudent("Семен", "Смирнов"));
    gr1957.GroupOut();

    return 0;
}
