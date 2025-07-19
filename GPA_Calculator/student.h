#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

#include <QString>
#include <QDate>


// Available courses
enum Courses{

    Mathematics
    , Informatics
    , Medical_Informatics
    , Technical_Informatics
    , Business_Informatics
    , Human_Medicine
    , Vet_Medicine // vet doctor
    , Engineering
    , Data_Science
    , Artificial_Inteligence
    , Biomedical_Engineering
    , Medical_Engineering
};

class Student : public Person
{
public:
    Student();
    Student(int, QString, QDate, Gender, QString, QString, Courses);
    Student(Courses, QString, QDate, Gender, QString, QString);
    Student(QString, QString, QDate, Gender, QString, QString);

    void set_course(Courses);
    Courses get_course(QString);
private:
    int student_id;
    int course;

};

#endif // STUDENT_H
