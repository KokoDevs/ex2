#include "Device.h"

void Device::init(unsigned int id, const DeviceType type, const std::string& os)
{
	this->_id = id;
	this->_type = type;
	this->_os = os;
	this->_activated = true;
}

unsigned Device::getID() const
{
	return _id;
}

std::string Device::getOS() const
{
	return _os;
}

DeviceType Device::getType() const
{
	return _type;
}

bool Device::isActive() const
{
	return _activated;
}

void Device::activate()
{
	this->_activated = true;
}

void Device::deactivate()
{
	this->_activated = false;
}


