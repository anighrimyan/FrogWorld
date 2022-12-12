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
		if (time == 0 && sun.to_shine()) {
			while (tree.air_synthesis()) {
				frog.to_wake_up();
				frog.to_breathe();
				++time;
				if (time == 1) {
					frog.jump_to_grass();
					++time;
				}
				if (time == 2) {
					frog.to_eat();
					++time;
				}
			    while (time < 5) {
					frog.to_jump();
					++time;
					}
			    if (time == 5) {
	    			frog.to_eat();
		   			++time;
				}
			   if (time == day) {
					sun.stop_to_shine();
				    frog.to_sleep();
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
void Frog::to_sleep() {
	std::cout << "zzzzzzzzkvaaaaaaaaaaaaaa!!!!!!" << std::endl;
}

void Frog::to_jump() {
	std::cout << "jump-kvuaaaa-kvuaaaa, jump-kvuaaaa-kvuaaaa" << std::endl;
}

void Frog::to_eat() {
	std::cout << "Nyum - Nyum, sweet grossssss!!!!!" << std::endl;
}

bool Tree::air_synthesis() {
	return this->result;
}

void Frog::jump_to_grass() {
	std::cout << "It's time for breakfast. kvuaaaa-kvuaaaa!!!!!!" << std::endl;
}

void Frog::to_breathe() {
	std::cout << "OMG, how is shining sun!!!!!" << std::endl;
}

void Frog::to_wake_up() {
	std::cout << "Good morning!!!!!" << std::endl;
}

bool Sun::to_shine() {
	std::cout << "Starts a new day!!!!!" << std::endl;
	this->result = true;
	return this->result;
}
void Sun::stop_to_shine() {
	std::cout << "Look at beautiful sunset!!!!!" << std::endl;
	this->result = false;
}


