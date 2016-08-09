#include "Component.h"

Component::Component() {}
Component::~Component() {}

Component::Type Component::type() 
{
	return Component::Type::NOTYPE;
}

void Component::active()
{
	_isActive = true;
}

void Component::inactive() {
	_isActive = false;
}

bool Component::isActive() 
{
	return _isActive;
}