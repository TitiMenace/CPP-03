
#include "FragTrap.hpp"

int main(void){

	FragTrap	robot("Serge");

	robot.highFivesGuys();

	robot.attack("Ismael");
	robot.attack("Dani");
	robot.attack("Yoseph");

	robot.takeDamage(3);
	robot.takeDamage(2);

	robot.beRepaired(12);

	robot.attack("Ismael");
	robot.attack("Ismael");
	robot.attack("Ismael");
	robot.attack("Dani");
	robot.attack("Dani");
	robot.attack("Dani");
	robot.attack("Yoseph");
	robot.takeDamage(10000);
	robot.takeDamage(10000);
}
