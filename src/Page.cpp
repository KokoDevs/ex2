#include "Page.h"
void Page::init()
{
	this->status = "";
	this->post = "";
}
std::string Page::getPosts() const
{
	return post;
}
std::string Page::getStatus() const
{
	return status;
}
void Page::clearPage()
{
	this->post = "";
}
void Page::setStatus(std::string status)
{
	this->status = status;
}
void Page::addLineToPosts(std::string new_line)
{
	if (this->post.empty()) this->post = this->post + new_line;
	else this->post = this->post + "\n" + new_line;
}




