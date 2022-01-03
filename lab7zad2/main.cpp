#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> l;
	int n, d;
	cout << "Podaj rozmair n ";
	cin >> n;
	for (auto it = l.begin(); it != l.end(); it++){
		l.push_back(rand() % 11);
		cout << l << " ";
	}
	cout << endl << "Podaj liczbe do usuniecia ";
	cin >> d;
	for (auto it = l.begin(); it != l.end(); it++){
		if (*it == d){
			it = l.erase(it);
			it--;
		}
	}
	for (auto it = l.begin(); it != l.end(); it++){
		cout << *it << " ";
	}
}