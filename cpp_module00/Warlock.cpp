#include "Warlock.hpp"

/*  Copliens forms */

Warlock::Warlock()
{

}

Warlock::Warlock(Warlock const &cpy)
{
    *this = cpy;
}

Warlock & Warlock::operator=(Warlock const &cpy)
{
    this->_name = cpy._name;
    this->_title = cpy._title;
    return (*this);
}

Warlock::~Warlock()
{
    std::cout << getName() << ": My job here is done!"<< std::endl;

}

/*  Copliens forms */

// Constructor
Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
    std::cout << getName() << ": This looks like another boring day." << std::endl;
}

// Getters setters 

std::string const & Warlock::getName() const
{
    return (this->_name);
}

std::string const & Warlock::getTitle() const
{
    return (this->_title);
}

void Warlock::setTitle(std::string const &title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}

// int main()
// {
//   Warlock const richard("Richard", "Mistress of Magma");
//   richard.introduce();
//   std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

//   Warlock* jack = new Warlock("Jack", "the Long");
//   jack->introduce();
//   jack->setTitle("the Mighty");
//   jack->introduce();

//   delete jack;

//   return (0);
// }