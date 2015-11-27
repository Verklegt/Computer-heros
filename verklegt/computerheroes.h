#ifndef COMPUTERHEROS_H
#define COMPUTERHEROS_H
#include <string>
#include <vector>
using namespace std;


class computerheroes
{
public:
    computerheroes();
    computerheroes(int birth, int death, string nafn, string k, string fact);
    void addvector(const char name[]);
    friend ostream& operator << (ostream& out, const computerheroes& scientists);
    bool contains(string checkstr) const;


private:
    int yearOfBirth;
    int yearOfdeath;
    string name;
    string kyn;
    string facts;
    vector<string> computer;


};
#endif // COMPUTERHEROS_H
