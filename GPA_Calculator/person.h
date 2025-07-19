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
    Person(int, QString, QString);
    Person(QString, QDate, Gender, QString, QString);


    // Getter & Setter Methods
    virtual void set_fullname(QString);
    virtual void set_birthdate(QDate);
    virtual void set_email(QString);
    virtual void set_password(QString);
    virtual void set_gender(QString); // Will need a helper function to convert string to int

    virtual QString get_fullname() const;
    virtual QString get_email() const;
    virtual QString get_password() const;
    virtual QDate get_birthdate() const;
    virtual Gender get_gender() const;

    // virtual functions
    virtual void print_person_details() = 0;


protected:
    QString fullname{""};
    QDate birthdate = QDate(1990, 3, 15);
    Gender gender = Gender::DONT_DISCLOSE;
    QString email{""};
    QString password{""};

};
