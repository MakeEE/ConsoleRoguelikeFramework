#include "GameObject.h"
#include "InputListener.h"

GameObject::GameObject()
{
	_isActive = true;
	_components = new Components;
}

GameObject::~GameObject()
{
	delete _components;
}

void GameObject::onStart() {}
void GameObject::update() {}

void GameObject::active() 
{
	_isActive = true;
}

void GameObject::inactive()
{
	_isActive = false;
}

bool GameObject::isActive()
{
	return _isActive;
}

void GameObject::addComponent(std::shared_ptr<Component> component)
{
	_components->push_back(component);
}

void GameObject::deleteComponent(std::shared_ptr<Component> component)
{
	_components->remove(component);
}

Components* GameObject::getComponents()
{
	return _components;
}