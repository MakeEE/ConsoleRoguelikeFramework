#pragma once
#include "Component.h"
#include <functional>

class InputListener :
	public Component
{
public:
	InputListener(std::function<void(int)> keyFunction);
	~InputListener();

	Component::Type type();

	void onKey(int keyValue);

private:
	std::function<void(int)> _keyFunction;
};