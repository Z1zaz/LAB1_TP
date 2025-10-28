#include "Person.h"

Person::Person() : FamilyMember() {
    cout << "Вызван конструктор Person (по умолчанию)\n";
}

Person::Person(const string& name, const string& birth, const string& death, int a,
    const string& parents, const string& spouse, const string& children)
    : FamilyMember(name, birth, death, a, parents, spouse, children) {
    cout << "Вызван конструктор Person (с параметрами)\n";
}

Person::Person(const Person& other) : FamilyMember(other) {
    cout << "Вызван конструктор копирования Person\n";
}

Person::~Person() {
    cout << "Вызван деструктор Person\n";
}

void Person::Print() const {
    cout << "\nФИО: " << fullName
        << "\nДата рождения: " << birthDate
        << "\nДата смерти: " << (deathDate.empty() ? "Жив" : deathDate)
        << "\nВозраст: " << age
        << "\nРодители: " << parents
        << "\nСупруг(а): " << spouse
        << "\nДети: " << children
        << "\n";
}

void Person::Edit() {
    cout << "Редактирование данных члена семьи:\n";
    cout << "Введите ФИО: "; getline(cin, fullName);
    cout << "Введите дату рождения: "; getline(cin, birthDate);
    cout << "Введите дату смерти (если жив — оставьте пустым): "; getline(cin, deathDate);
    cout << "Введите возраст: "; cin >> age; cin.ignore();
    cout << "Введите родителей: "; getline(cin, parents);
    cout << "Введите супруга(у): "; getline(cin, spouse);
    cout << "Введите детей: "; getline(cin, children);
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
