#pragma once
#include "Component.h"

struct Coordinate
{
	int x;
	int y;
};

class Transform : public Component
{
public:
	Transform();
	~Transform();

	Component::Type type();

	void translate(int x, int y);
	void position(int x, int y);
	void scale(int x, int y);

	Coordinate getPosition(); 
	Coordinate getScale();

private:
	Coordinate _position;
	Coordinate _scale;
};

