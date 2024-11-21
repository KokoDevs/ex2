#include "Profile.h"

void Profile::init(User owner)
{
	this->owner = owner;
	this->page = new Page();
	this->friends = new UserList();
}
void Profile::clear()
{
	friends->clear();
	delete page;
	delete friends;
}
User Profile::getOwner() const
{
	return owner;
}
std::string Profile::getPage() const
{
	std::string out = std::string("******************* \n") + "******************* ";
	return "Status: " + page->getStatus() + "\n" + out + "\n" + page->getPosts();
}
std::string Profile::getFriends() const
{
	if (friends->get_first() == nullptr) return "";
	std::string stringOfFriends;
	UserNode* cur = friends->get_first();

	while (cur != nullptr)
	{
		stringOfFriends = stringOfFriends + cur->get_data().getUserName();
		cur = cur->get_next();
		if (cur != nullptr) stringOfFriends += ",";
	}
	return stringOfFriends;
}
std::string Profile::getFriendsWithSameNameLength() const
{
	if (friends->get_first() == nullptr) return "";
	std::string stringOfFriends;
	std::string currentFriend;
	bool first = true;
	UserNode* cur = friends->get_first();
	while (cur != nullptr)
	{
		currentFriend = cur->get_data().getUserName();
		if (owner.getUserName().length() == currentFriend.length())
		{
			if (!first) stringOfFriends += ",";
			stringOfFriends += currentFriend;
			first = false;
		}
		cur = cur->get_next();
	}
	return stringOfFriends;
}
void Profile::setStatus(std::string new_status)
{
	page->setStatus(new_status);
}
void Profile::addPostToProfilePage(std::string post)
{
	page->addLineToPosts(post);
}
void Profile::addFriend(User friend_to_add)
{
	friends->add(friend_to_add);
}






