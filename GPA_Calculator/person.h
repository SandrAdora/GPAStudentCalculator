#ifndef PERSON_H
#define PERSON_H

#endif // PERSON_H

// Include libs
#include <QString>
#include <QDate>

enum Gender{

    MALE, FEAMALE, DONT_DISCLOSE
};

class Person{

public:
    // Constructors
    Person();
    Person(QString em, QString pw);
    Person(QString, QDate, Gender, QString, QString);



    // Getter & Setter Methods
    virtual void set_fullname(QString) = 0;
    virtual void set_birthdate(QDate) = 0;
    virtual void set_email(QString) = 0;
    virtual void set_password(QString) = 0;
    virtual void set_gender(QString) = 0; // Will need a helper function to convert string to int

    virtual QString get_fullname() const {return this->fullname;};
    virtual QString get_email()  const {return this->email;};
    virtual QString get_password()  const {return this->password;};
    virtual QDate get_birthdate() const {return this->birthdate;};
    virtual Gender get_gender() const {return this->gender;};

    // virtual functions
    virtual void print_person_details() = 0;


protected:
    QString fullname;
    QDate birthdate;
    Gender gender;
    QString email;
    QString password;

};
