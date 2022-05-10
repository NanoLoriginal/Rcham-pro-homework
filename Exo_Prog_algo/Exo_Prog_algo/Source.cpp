#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;

void WriteTxt(map<char, int> Mymap) {

    ofstream text;

    text.open("Occurrences.txt");
    if (text) {
        text << "Les occurrences demandés : " << endl;
        for (map<char, int>::iterator it = Mymap.begin(); it != Mymap.end(); it++) {
            text << "le nombre d'occurence de :  " << it->first << " est " << it->second << endl;
        }
    }
    else {
        cout << "erreur";
    }
}

int main()
{
    ifstream ifs("Texte.txt");
    char s;
    map<char, int> map;

    while (ifs >> s)
        ++map[s];

    WriteTxt(map);
    return 0;
}