#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {

	char prompt = 'a';

	while (prompt != 'q') {
		
		double numPanels, glass, coal, circuits, generators;
		double insCop, redstone, ironPlates, copWire, rubber, iron;
		double furnaces, machCase, cobble, batteries, tinCasing, insTin, tinWire;
		double tin, copper;

		cout << "Enter the number of solar panels you wish to build:" << endl;
		cin >> numPanels;

		//solar panel breakdown
		glass = numPanels * 3;
		coal = numPanels * 3;
		circuits = numPanels * 2;
		generators = numPanels;

		//circuit breakdown
		insCop = circuits * 6;
		redstone = circuits * 2;
		ironPlates = circuits;
			//insulated copper wire breakdown
			copper = insCop / 3;
			rubber = insCop;
			//iron plate translation
			iron = ironPlates;

		//generator breakdown
		furnaces = generators;
		machCase = generators;
		batteries = generators;
			//furnace breakdown
			cobble = furnaces * 8;
			//machine casing breakdown
			ironPlates = ironPlates + (machCase * 8);
			//battery breakdown
			redstone = redstone + (batteries * 2);
			tinCasing = batteries * 4;
			insTin = batteries;
				//iron plate translation
				iron = ironPlates;
				//insulated tin wire breakdown
				tin = insTin / 2;
				rubber = rubber + insTin;

		//print breakdown
		cout << endl << "To make " << numPanels << " solar panels, you will need:" << endl;
		cout << glass << " glass" << endl;
		cout << coal << " coal" << endl;
		cout << copper << " copper ingots" << endl;
		cout << iron << " iron ingots" << endl;
		cout << tin << " tin ingots" << endl;
		cout << rubber << " rubber" << endl;
		cout << redstone << " redstone" << endl;
		cout << cobble << " cobblestone" << endl << endl;

		cout << "To make:" << endl;
		cout << insCop << " insulated copper wire" << endl;
		cout << insTin << " insulated tin wire" << endl;
		cout << ironPlates << " iron plates" << endl;
		cout << tinCasing << " tin casings" << endl;
		cout << furnaces << " furnaces" << endl;
		cout << machCase << " basic machine casings" << endl;
		cout << batteries << " batteries" << endl << endl;

		cout << "And:" << endl; 
		cout << coal << " coal dust" << endl;
		cout << circuits << " basic circuits" << endl;
		cout << generators << " generators" << endl;

		cout << "Press q to quit. Press any other key to calculate again." << endl;
		cin >> prompt;

	}

	return 0;
}