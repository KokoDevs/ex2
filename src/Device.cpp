#include "Device.h"

void Device::init(unsigned int id, const DeviceType type, const std::string& os)
{
	this->id = id;
	this->type = type;
	this->os = os;
	this->activated = true;
}

unsigned Device::getID() const
{
	return id;
}

std::string Device::getOS() const
{
	return os;
}

DeviceType Device::getType() const
{
	return type;
}

bool Device::isActive() const
{
	return activated;
}

void Device::activate()
{
	this->activated = true;
}

void Device::deactivate()
{
	this->activated = false;
}


