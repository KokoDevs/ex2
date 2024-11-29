#include "Page.h"
void Page::init()
{
	this->_status = "";
	this->_post = "";
}
std::string Page::getPosts() const
{
	return _post;
}
std::string Page::getStatus() const
{
	return _status;
}
void Page::clearPage()
{
	this->_post = "";
}
void Page::setStatus(std::string status)
{
	this->_status = status;
}
void Page::addLineToPosts(std::string new_line)
{
	this->_post += new_line + "\n";
}




