#include "Transform.h"

Transform::Transform()
{
	_position.x = 0;
	_position.y = 0;
	_scale.x = 0;
	_scale.y = 0;
}

Transform::~Transform()
{
}

Component::Type Transform::type() 
{
	return Component::Type::TRANSFORM;
}

void Transform::translate(int x, int y)
{
	_position.x += x;
	_position.y += y;
}

void Transform::position(int x, int y)
{
	_position.x = x;
	_position.y = y;
}

void Transform::scale(int x, int y) 
{
	_scale.x = x;
	_scale.y = y;
}

Coordinate Transform::getPosition() 
{
	return _position;
}

Coordinate Transform::getScale()
{
	return _scale;
}