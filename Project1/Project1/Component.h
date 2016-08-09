#pragma once

class Component
{
public:
	enum Type { NOTYPE, TRANSFORM, MODEL, INPUTLISTENER };

	Component();
	virtual ~Component();
	
	virtual Component::Type type();
	
	void active();
	void inactive();
	bool isActive();

private:
	bool _isActive;
};

