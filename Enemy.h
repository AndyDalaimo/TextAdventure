#pragma once
#include <string>

using namespace std;

class Enemy
{
private:
	std::string heldItem;
	std::string enemyReaction;
	int enemyHealth;

public:
	Enemy();
	~Enemy();

	std::string GetHeldItem() const;
	std::string GetReaction() const; 
	int GetHealth() const;
};