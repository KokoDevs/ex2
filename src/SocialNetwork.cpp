#include "SocialNetwork.h"

void SocialNetwork::init(std::string networkName, int minAge)
{
	this->networkName = networkName;
	this->minAge = minAge;
	this->list = new ProfileList();
	list->init();
}

void SocialNetwork::clear()
{
	delete this->list;
}

std::string SocialNetwork::getNetworkName() const
{
	return this->networkName;
}

int SocialNetwork::getMinAge() const
{
	return this->minAge;
}

bool SocialNetwork::addProfile(Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() < minAge) return false;
	this->list->add(profile_to_add);
	return true;
}

std::string SocialNetwork::getWindowsDevices()
{
	ProfileNode* cur = list->get_first();
	std::string toReturn = "";

	while (cur != nullptr)
	{
		Profile tempProfile = cur->get_data();
		User tempUser = tempProfile.getOwner();
		DevicesList tempDevices = tempUser.getDevices();
		DeviceNode* deviceCur = tempDevices.get_first();

		while (deviceCur != nullptr) {
			Device tempDevice = deviceCur->get_data();
			deviceCur = deviceCur->get_next();
			if (tempDevice.getOS() != WINDOWS10 && tempDevice.getOS() != WINDOWS11 && tempDevice.getOS() != WINDOWS7) continue;

			unsigned int id = tempDevice.getID();
			std::string os = tempDevice.getOS();

			if (toReturn != "") toReturn += ", ";
			toReturn += "[" + std::to_string(id) + ", " + os + "]";
		}

		cur = cur->get_next();
	}
	return toReturn;
}






