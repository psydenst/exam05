#include "ASpell.hpp"


    ASpell::ASpell()
    {
        return ;
    }

    ASpell::ASpell(ASpell const & cpy)
    {
        *this = cpy;
        return;
    }

    ASpell & ASpell::operator=(ASpell const &cpy)
    {
        this->_name = cpy._name;
        this->_effects = cpy._effects;
        return (*this);
    }

    ASpell::~ASpell()
    {
        return ;
    }

    ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
    {

    }

    std::string ASpell::getName() const
    {
        return (this->_name);
    }

    std::string ASpell::getEffects() const
    {
        return (this->_effects);
    }

    void ASpell::launch(ATarget const & target)
    {
        target.getHitBySpell(*this);
    }

    