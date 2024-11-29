#include "ProfileList.h"

class SocialNetwork
{
	public:
		void init(std::string networkName, int minAge);
		void clear();

		// getters
		std::string getNetworkName() const;
		int getMinAge() const;

		bool addProfile(Profile profile_to_add);
		std::string getWindowsDevices();
	private:
		std::string networkName;
		int minAge;
		ProfileList* list;
};