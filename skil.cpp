#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> _tkz;
  _tkz.push_back("Affe");
  _tkz.push_back("Hahn");
  _tkz.push_back("Hund");
  _tkz.push_back("Schwein");
  _tkz.push_back("Ratte");
  _tkz.push_back("Büffel");
  _tkz.push_back("Tiger");
  _tkz.push_back("Hase");
  _tkz.push_back("Drachen");
  _tkz.push_back("Schlange");
  _tkz.push_back("Pferd");
  _tkz.push_back("Ziege");

  int year = 0;
  cout << "In welchem Jahr wurdest du geboren?" << endl;
  cin >> year;
  int tkz = year%12%12;
  cout << "Dein Tierkreiszeichen ist: " << _tkz.at(tkz) << "." << endl << endl;

  return 0;
}
