#include <iostream>
#include <string>
using namespace std;
pair <string, string> lowUpp(string strBase) //привидение всех букв к верхнему и нижнему регистру
{
    pair <string, string> strLowUpp("", "");
    for (unsigned i = 0; i < strBase.size(); i++) { //проходим по индексам изначальной строки
        strLowUpp.first += tolower(strBase[i]); //нижний регистр
        strLowUpp.second += toupper(strBase[i]); //верхний регистр
    }
    return strLowUpp;

}


int main()
{
    cout << "Enter the string: ";
    string strBase;

    getline(cin, strBase); //считывает строку с пробелами

    cout << "Upper string: " << lowUpp(strBase).first << endl;
    cout << "Lower string: " << lowUpp(strBase).second << endl;

}
