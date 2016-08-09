#pragma once

#include <list>
#include <memory>
#include "Component.h"

typedef std::list<std::shared_ptr<Component>> Components;

class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	virtual void onStart();
	virtual void update();

	void active();
	void inactive();
	bool isActive();

	void addComponent(std::shared_ptr<Component> component);
	void deleteComponent(std::shared_ptr<Component> component);

	Components* getComponents();

private:
	bool _isActive;
	Components* _components;
};

