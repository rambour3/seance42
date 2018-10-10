#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
class etudiant{
	public:
string nom;
int  note;

};
int main() {
vector <etudiant>  epsi;
string tmp_name;
int tmp_note;
ofstream f_notes;
f_notes.open("notes.txt");
for (int i=0; i < 3; i++) {
cout<<"entrer le nom"<< endl;
cin>>tmp_name;
cout<<"entrez la notre d'un etudiat "<<endl;
cin>>tmp_note;
epsi.push_back(etudiant());
epsi[i].nom =tmp_name;
epsi[i].note= tmp_note;
f_notes<< epsi[i].nom<<"	"<<epsi[i].note<<endl;
}
cout <<"La liste des etudiants"<<endl;
for (int  i= 0; i<epsi.size(); i++){
cout << epsi[i].nom << "	"<<epsi[i].note<<endl;
}
cout <<" coucou">
cin>>tmp_name;
for (int i=0; i<epsi.size();i++)
{
if (tmp_name ==epsi[i].nom){
cout<<"la note est" <<etudiant[i].note<<" est " << epsi[i].note<<endl;
}
}
return 0;
}

