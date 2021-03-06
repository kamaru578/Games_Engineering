#include "ecm.h"

void Entity::Update(double dt)
{
	for (auto s : _components)
	{
		s->Update(dt);
	}
}

void Entity::Render()
{
	for (auto s : _components)
	{
		s->Render();
	}
}

Entity::Entity()
{

}

const Vector2f Entity::GetPosition() { return _position; }

void Entity::SetPosition(const Vector2f& _position)
{
	this->_position = _position;
}

void EntityManager::Update(double dt)
{
	for (auto s : list)
	{
		s->Update(dt);
	}
}

void EntityManager::Render()
{
	for (auto s : list)
	{
		s->Render();
	}
}