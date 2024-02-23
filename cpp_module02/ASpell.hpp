#ifndef ASPELL_HPP
#define ASPELL_HPP

#pragma once
#include <iostream>

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell();
        ASpell(ASpell const & cpy);
        ASpell(std::string name, std::string effects);
        virtual ~ASpell();
        ASpell & operator=(ASpell const &cpy);
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell * clone() const = 0;
        void launch(ATarget const & target);

};

#include "ATarget.hpp"


#endif