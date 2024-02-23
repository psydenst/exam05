#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::SpellBook(SpellBook const & cpy)
{
    this->_spellBook = cpy._spellBook;
}

SpellBook & SpellBook::operator = (SpellBook const & cpy)
{
    this->_spellBook = cpy._spellBook;
    return (*this);
}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator itBegin = _spellBook.begin();
    std::map<std::string, ASpell *>::iterator itEnd = _spellBook.end();

    for(; itBegin != itEnd; itBegin++)
    {
        delete itBegin->second;
    }
    _spellBook.clear();
}

void SpellBook::learnSpell(ASpell * spell)
{
    if (spell)
    {
        _spellBook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const & SpellName)
{
	std::map<std::string, ASpell*>::iterator it = _spellBook.find(SpellName);
	if (it != _spellBook.end())
	{
		delete it->second;
		_spellBook.erase(it);
	}
}

ASpell * SpellBook::createSpell(std::string const & spellName)
{
    ASpell *tmp = NULL;
    if (_spellBook.find(spellName) != _spellBook.end())
    {
        tmp = _spellBook[spellName];
    }
    return tmp;
}