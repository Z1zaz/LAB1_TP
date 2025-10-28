#pragma once

#include "FamilyMember.h"

class Person : public FamilyMember 
{
public:
    Person();
    Person(const string& name, const string& birth, const string& death, int age,
        const string& parents, const string& spouse, const string& children);
    Person(const Person& other);
    ~Person();

    void Print() const override;
    void Edit() override;
    void Save(ofstream& out) const override;
    void Load(ifstream& in) override;
};

