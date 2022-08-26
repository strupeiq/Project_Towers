#include <iostream>
#include <vector>

#include "headers/graphics.h"


const int WIDTH = 1200; 
const int HEIGHT = 900;

int MAX_DISKS = 5;
int MAX_SIZE_OF_DISK = 300;

int main() {
	initwindow(WIDTH, HEIGHT, "Towers", 0, 0, true);

	std::vector<int> first_pillar(MAX_DISKS);
	std::vector<int> second_pillar(0);
	std::vector<int> third_pillar(0);
	
	for (int i = 0; i < MAX_DISKS; ++i) {
		first_pillar[i] = MAX_SIZE_OF_DISK;
		MAX_SIZE_OF_DISK -= 60;
	}

	getch();
	return 0;
}