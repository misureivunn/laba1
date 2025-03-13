#include <iostream>
#include <string>
using namespace std;


int countVowels(const string& str) { 
    int count = 0;
    for (char ch : str) { // перебираем все символы строки
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { // проверяем строку на наличие гласных букв
            count++; // если находим гласную, увеличиваем счётчик
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "Russian");
    string input;
    cout << "Введите строку: ";
    getline(cin, input); //считывает строку с пробелами
    int vowelCount = countVowels(input);
    cout << "Количество гласных букв в строке: " << vowelCount << endl;

    return 0;
}
