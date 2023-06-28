/**
* @author Andy Dalaimo
* Enemy Class to handle creation of enemies, fight interaction with player, and held items.
*/

#pragma once
#include <string>


class Enemy
{
private:
	std::string type;
	std::string heldItem;
	std::string enemyReaction;

public:
	Enemy(std::string name, std::string item);
	~Enemy();

	int enemyHealth;

	std::string GetHeldItem() const;
	std::string GetName() const;
	std::string GetReaction() const; 
	int GetHealth() const;
	void PlayerAttack(int attack) const;
};