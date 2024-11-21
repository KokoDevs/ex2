#include "User.h"

void User::init(unsigned int id, std::string username, unsigned age)
{
	this->id = id;
	this->username = username;
	this->age = age;
	this->deviceList = new DevicesList();
}
void User::clear()
{
	delete deviceList;
	deviceList = nullptr;
}
unsigned User::getID() const
{
	return id;
}
const std::string& User::getUserName() const
{
	return username;
}
unsigned User::getAge() const
{
	return age;
}
DevicesList& User::getDevices() const
{
	return *deviceList;
}
void User::addDevice(const Device& device)
{
	deviceList->add(device);
}
bool User::checkIfDevicesAreOn() const
{
	if (deviceList == nullptr) return false;

	DeviceNode* checkingNode = deviceList->get_first();
	while (checkingNode != nullptr)
	{
		bool active = checkingNode->get_data().isActive();
		if (!active) return false;

		checkingNode = checkingNode->get_next();
	}

	return true;
}





