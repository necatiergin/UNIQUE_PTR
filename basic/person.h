#pragma once

#include <iosfwd>
#include <string>

class Person {

public:
	Person(std::string name, std::string surname) : 
	m_name{std::move(name)}, m_surname{std::move(surname)} {}
	friend std::ostream& operator<<(std::ostream&, const Person&);
private:
	std::string m_name;
	std::string m_surname;
};
