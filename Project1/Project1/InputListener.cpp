#include "InputListener.h"
#include <conio.h>

InputListener::InputListener(std::function<void(int)> keyFunction)
{
	_keyFunction = keyFunction;
}

InputListener::~InputListener()
{
	
}

Component::Type InputListener::type()
{
	return Component::Type::INPUTLISTENER;
}

void InputListener::onKey(int keyValue)
{
	_keyFunction(keyValue);
}