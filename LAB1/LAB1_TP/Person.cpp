#include "Person.h"

Person::Person() : FamilyMember() {
    cout << "������ ����������� Person (�� ���������)\n";
}

Person::Person(const string& name, const string& birth, const string& death, int a,
    const string& parents, const string& spouse, const string& children)
    : FamilyMember(name, birth, death, a, parents, spouse, children) {
    cout << "������ ����������� Person (� �����������)\n";
}

Person::Person(const Person& other) : FamilyMember(other) {
    cout << "������ ����������� ����������� Person\n";
}

Person::~Person() {
    cout << "������ ���������� Person\n";
}

void Person::Print() const {
    cout << "\n���: " << fullName
        << "\n���� ��������: " << birthDate
        << "\n���� ������: " << (deathDate.empty() ? "���" : deathDate)
        << "\n�������: " << age
        << "\n��������: " << parents
        << "\n������(�): " << spouse
        << "\n����: " << children
        << "\n";
}

void Person::Edit() {
    cout << "�������������� ������ ����� �����:\n";
    cout << "������� ���: "; getline(cin, fullName);
    cout << "������� ���� ��������: "; getline(cin, birthDate);
    cout << "������� ���� ������ (���� ��� � �������� ������): "; getline(cin, deathDate);
    cout << "������� �������: "; cin >> age; cin.ignore();
    cout << "������� ���������: "; getline(cin, parents);
    cout << "������� �������(�): "; getline(cin, spouse);
    cout << "������� �����: "; getline(cin, children);
}

void Person::Save(ofstream& out) const {
    out << fullName << endl
        << birthDate << endl
        << deathDate << endl
        << age << endl
        << parents << endl
        << spouse << endl
        << children << endl;
}

void Person::Load(ifstream& in) {
    getline(in, fullName);
    getline(in, birthDate);
    getline(in, deathDate);
    in >> age; in.ignore();
    getline(in, parents);
    getline(in, spouse);
    getline(in, children);
}
