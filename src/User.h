#pragma once
#include "DeviceList.h"
#include <string>

class User
{
	private:
		unsigned int _id;
		std::string _username;
		unsigned int _age;
		DevicesList* _deviceList;
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