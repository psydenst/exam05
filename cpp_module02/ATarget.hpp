#ifndef ATARGET_HPP
#define ATARGET_HPP

#pragma once
#include <iostream>

class ASpell;

class ATarget
{
    protected:
        std::string _type;

    public:
        ATarget();
        ATarget(ATarget const & cpy);
        ATarget & operator=(ATarget const &cpy);
        virtual ~ATarget();
        ATarget(std::string type);
        std::string getType() const;
        virtual ATarget * clone() const = 0;
        void getHitBySpell(ASpell const & spell) const;
};

#include "ASpell.hpp"

#endif