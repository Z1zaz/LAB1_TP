#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class FamilyMember {
protected:
    string fullName;
    string birthDate;
    string deathDate;
    int age;
    string parents;
    string spouse;
    string children;

public:
    FamilyMember();
    FamilyMember(const string& name, const string& birth, const string& death, int age,
        const string& parents, const string& spouse, const string& children);
    FamilyMember(const FamilyMember& other);
    virtual ~FamilyMember();

    
    virtual void Print() const = 0;
    virtual void Edit() = 0;
    virtual void Save(ofstream& out) const = 0;
    virtual void Load(ifstream& in) = 0;
};