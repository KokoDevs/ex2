#pragma once
#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType {PHONE, PC, LAPTOP, TABLET};		     //
													     //
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
													     //
/// ///////////////////////////////////////////////////////


class Device
{
	private:
		unsigned int _id;
		DeviceType _type;
		std::string _os;
		bool _activated = false;
	public:
		// init function
		void init(unsigned int id, const DeviceType type, const std::string& os);

		// getters
		unsigned int getID() const;
		std::string getOS() const;
		DeviceType getType() const;
		bool isActive() const;

		// public functions
		void activate();
		void deactivate();
};

