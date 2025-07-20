#include "student.h"



Student::Student() {

    this->fullname = "";
    this->email = "school@example.com";
    this->password = "xxxxxx";
    this->gender = Gender::DONT_DISCLOSE;
    this->birthdate = QDate(1990, 3, 13);
    this->student_id = -1;
    this->course = Courses::Artificial_Inteligence;

}
Student::Student(int id, QString name, QDate dat, Gender gen, QString em, QString pw, Courses cs){
    this->fullname = name;
    this->email = em;
    this->gender = gen;
    this->birthdate = dat;
    this->student_id = id;
    this->course = cs;

}
Student::Student(Courses cs, QString name, QDate d, Gender g, QString em, QString pw){
    this->fullname = name;
    this->email = em;
    this->course = cs;
    this->birthdate = d;
    this->gender = g;
    this->password = pw;

}
Student::Student( QString name, QDate d, Gender g, QString em, QString pw){
    this->fullname = name;
    this->email = em;
    this->course = Courses::Artificial_Inteligence; // default choice
    this->birthdate = d;
    this->gender = g;
    this->password = pw;

}

void Person::set_fullname(QString name){
    this->fullname = name;
}
void Student::set_course(Courses cs){
    this->course = cs;

}
void Person::set_birthdate(QDate dat){
    this->birthdate = dat;
}
void Person::set_email(QString em){
    this->email = em;
}
void Person::set_gender(QString gen){
    if (gen == "male"){
        this->gender = Gender::MALE;
    }
    else if(gen == "female"){
        this->gender = Gender::FEAMALE;
    }
    else{
        this->gender = Gender::DONT_DISCLOSE;
    }
}
void Person::set_password(QString pw){
    this->password = pw;
}

