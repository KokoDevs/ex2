#include "Profile.h"

void Profile::init(User owner)
{
	this->_owner = owner;
	this->_page = new Page();
	this->_page->init();
	this->_friends = new UserList();
	this->_friends->init();
}
void Profile::clear()
{
	_friends->clear();
	delete _page;
	delete _friends;
}
User Profile::getOwner() const
{
	return _owner;
}
std::string Profile::getPage() const
{
	std::string out = std::string("******************* \n") + "******************* ";
	return "Status: " + _page->getStatus() + "\n" + out + "\n" + _page->getPosts();
}
std::string Profile::getFriends() const
{
	if (_friends->get_first() == nullptr) return "";
	std::string stringOfFriends;
	UserNode* cur = _friends->get_first();

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
	if (_friends->get_first() == nullptr) return "";
	std::string stringOfFriends;
	std::string currentFriend;
	bool first = true;
	UserNode* cur = _friends->get_first();
	while (cur != nullptr)
	{
		currentFriend = cur->get_data().getUserName();
		if (_owner.getUserName().length() == currentFriend.length())
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
	_page->setStatus(new_status);
}
void Profile::addPostToProfilePage(std::string post)
{
	_page->addLineToPosts(post);
}
void Profile::addFriend(User friend_to_add)
{
	_friends->add(friend_to_add);
}






