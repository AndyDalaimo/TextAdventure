#include "Enemy.h"

Enemy::Enemy(std::string name, std::string item)
	: type(name), heldItem(item), enemyReaction(""), enemyHealth(50)
{
	
}

Enemy::~Enemy()
{
}

std::string Enemy::GetHeldItem() const
{
	return std::string();
}

std::string Enemy::GetName() const
{
	return type;
}

std::string Enemy::GetReaction() const
{
	return std::string();
}

int Enemy::GetHealth() const
{
	return healthRef;
}

void Enemy::PlayerAttack(int attack) const
{
	healthRef = healthRef - attack;
}

