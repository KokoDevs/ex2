#pragma once
#include "DeviceList.h"
#include <string>

class User
{
	private:
		unsigned int id;
		std::string username;
		unsigned int age;
		DevicesList* deviceList;
	public:
		void init(unsigned int id, std::string username, unsigned int age);
		void clear();
		unsigned int getID() const;
		const std::string& getUserName() const;
		unsigned int getAge() const;
		DevicesList& getDevices() const;
		void addDevice(const Device& device);
		bool checkIfDevicesAreOn() const;
};