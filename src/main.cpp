#include <vector>
#include <iostream>
using namespace std;
int main() {
vector <int> tab (3);
tab[0]=3;
tab[1]=4;
tab[2]=5;
tab.push_back(8);
cout << tab[0]<<" "<<tab[1]<<" "<<tab[2]<< endl;
return 0;
}
