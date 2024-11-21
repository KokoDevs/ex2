#pragma once
#include "Page.h"
#include "UserList.h"
#include <string>

class Profile
{
	private:
		User owner;
		Page* page;
		UserList* friends;
	public:
		void init(User owner);
		void clear();
		std::string getPage() const;
		std::string getFriends() const;
		std::string getFriendsWithSameNameLength() const;
		User getOwner() const;
		void setStatus(std::string new_status);
		void addPostToProfilePage(std::string post);
		void addFriend(User friend_to_add);
};