#include "FamilyMember.h"

FamilyMember::FamilyMember() {
    cout << "������ ����������� FamilyMember (�� ���������)\n";
    age = 0;
}

FamilyMember::FamilyMember(const string& name, const string& birth, const string& death, int a,
    const string& parents, const string& spouse, const string& children)
    : fullName(name), birthDate(birth), deathDate(death),
    age(a), parents(parents), spouse(spouse), children(children) {
    cout << "������ ����������� FamilyMember (� �����������)\n";
}

FamilyMember::FamilyMember(const FamilyMember& other) {
    fullName = other.fullName;
    birthDate = other.birthDate;
    deathDate = other.deathDate;
    age = other.age;
    parents = other.parents;
    spouse = other.spouse;
    children = other.children;
    cout << "������ ����������� ����������� FamilyMember\n";
}

FamilyMember::~FamilyMember() {
    cout << "������ ���������� FamilyMember\n";
}

