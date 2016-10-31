#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {

	char prompt = 'a';

	while (prompt != 'q') {
		
		int numPanels, glass, coal, circuits, generators;
		int insCop, redstone, ironPlates, copWire, rubber, copper, iron;
		int furnaces, machCase, cobble, batteries, tinCasing, tin, insTin, tinWire;

		cout << "Enter the number of solar panels you wish to build." << endl;
		cin >> numPanels;

		glass = numPanels * 3;
		coal = numPanels * 3;
		circuits = numPanels * 2;
		generators = numPanels * 1;

		cout << "Press q to quit. Press any other key to calculate again." << endl;
		cin >> prompt;

	}

	return 0;
}