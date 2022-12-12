#include <iostream>
#include "earth.h"
#include "sun.h"
#include "frog.h"
#include "tree.h"

void Earth::mode() {
	
	while (time <= day) {
		Frog frog;
		Sun sun;
		Tree tree;
		if (time == 0 && sun.shine()) {
			while (tree.air_synthesis()) {
				frog.wake_up();
				frog.breathe();
				++time;
				if (time == 1) {
					frog.jump_to_grass();
					++time;
				}
				if (time == 2) {
					frog.eat();
					++time;
				}
			    while (time < 5) {
					frog.jump();
					++time;
					}
			    if (time == 5) {
	    			frog.eat();
		   			++time;
				}
			   if (time == day) {
					sun.stop_to_shine();
				    frog.sleep();
			 	    tree.stop_air_synthesis();
		     	    ++time;
			    }
			}
		}		
	}
}


void Tree::stop_air_synthesis() {
	std::cout << "You must sleep otherwise you will die!!!!!!" << std::endl;
	this->result = false;
}

void Frog::sleep() {
	std::cout << "zzzzzzzzkvaaaaaaaaaaaaaa!!!!!!" << std::endl;
}

void Frog::jump() {
	std::cout << "jump-kvuaaaa-kvuaaaa, jump-kvuaaaa-kvuaaaa" << std::endl;
}

void Frog::eat() {
	std::cout << "Nyum - Nyum, sweet grossssss!!!!!" << std::endl;
}

bool Tree::air_synthesis() {
	return this->result;
}

void Frog::jump_to_grass() {
	std::cout << "It's time for breakfast. kvuaaaa-kvuaaaa!!!!!!" << std::endl;
}

void Frog::breathe() {
	std::cout << "OMG, how is shining sun!!!!!" << std::endl;
}

void Frog::wake_up() {
	std::cout << "Good morning!!!!!" << std::endl;
}

bool Sun::shine() {
	std::cout << "Starts a new day!!!!!" << std::endl;
	this->result = true;
	return this->result;
}

void Sun::stop_to_shine() {
	std::cout << "Look at beautiful sunset!!!!!" << std::endl;
	this->result = false;
}


