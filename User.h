#pragma once
#include <string>
using namespace std;

class User 
{
public:
	User(const string& login, const string& password, const string& name) : login_(login), password_ (password), name_ (name) {}
	User(const string& login, const string& password) : login_(login), password_(password) {}
	const string& getlog() const {return login_;}
	const string& getName() const {return name_;}
	
	void setName(const string& name) {name_= name;}
	void setPass(const string& password) {password_ = password;}


private:
	string login_;
	string password_;
	string name_;

};