#include "User.h"

void User::init(unsigned int id, std::string username, unsigned age)
{
	this->_id = id;
	this->_username = username;
	this->_age = age;
	this->_deviceList = new DevicesList();
	this->_deviceList->init();
}
void User::clear()
{
	delete _deviceList;
	_deviceList = nullptr;
}
unsigned User::getID() const
{
	return _id;
}
const std::string& User::getUserName() const
{
	return _username;
}
unsigned User::getAge() const
{
	return _age;
}
DevicesList& User::getDevices() const
{
	return *_deviceList;
}
void User::addDevice(const Device& device)
{
	_deviceList->add(device);
}
bool User::checkIfDevicesAreOn() const
{
	if (_deviceList == nullptr) return false;

	DeviceNode* checkingNode = _deviceList->get_first();
	while (checkingNode != nullptr)
	{
		bool active = checkingNode->get_data().isActive();
		if (!active) return false;

		checkingNode = checkingNode->get_next();
	}

	return true;
}





