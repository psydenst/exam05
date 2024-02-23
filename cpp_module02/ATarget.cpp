#include "ATarget.hpp"


    ATarget::ATarget()
    {

    }

    ATarget::ATarget(ATarget const & cpy)
    {
        *this = cpy;
    }

    ATarget & ATarget::operator=(ATarget const &cpy)
    {
        this->_type = cpy._type;
        return (*this);
    }

    ATarget::~ATarget()
    {

    }

    ATarget::ATarget(std::string type) : _type(type)
    {

    }

    std::string ATarget::getType() const
    {
        return (this->_type);
    }

    void ATarget::getHitBySpell(ASpell const & spell) const
    {
        std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
    }

    