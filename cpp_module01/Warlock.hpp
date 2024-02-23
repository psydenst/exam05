#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        std::map<std::string, ASpell *> _spellBook;
        Warlock();
        Warlock(Warlock const &cpy);
        Warlock & operator=(Warlock const &cpy);

    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const &title);
        void introduce() const;
        void learnSpell(ASpell * spell);
        void launchSpell(std::string spellName, ATarget const & target);
        void forgetSpell(std::string spellName);
};

#endif