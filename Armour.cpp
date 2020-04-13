#include "Armour.h"

//------------------------------------------------------------------------------
Armour::Armour()
    :Item() // There should be something simliar in Consumable.cpp
{
    durability = 0.0;
    defense = 0.0;
    material = " ";
    modifier = " ";
    modifierLevel = 1;
    element = " ";
}

//------------------------------------------------------------------------------
void Armour::display(std::ostream& outs) const{
    // Implement this function
    Item::display(outs);

     outs << std::left  << "  Nme"  << ": "
          << std::right << getName() << "\n"
          << std::left  << "  Dur" << ": "
          << std::right << getDurability() << "\n"
          << std::left  << "  Def" << ": "
          << std::right << getDefense() << "\n"
          << std::left  << "  Mtl" << ": "
          << std::right << getMaterial() << "\n"
          << std::right << "  Mdr" << "\n"
          << std::right << getModifier() << "(" << getModifierLevel() <<  ")" << "\n"
          << std::right << "  Emt"  << "\n"
          << std::right << getElement() << "\n";
          
    


}

//------------------------------------------------------------------------------
void Armour::read(std::istream& ins){
    // Implement this function
    ins >> this->durability;
    ins >> this->defense;
    ins >> this->material;
    ins >> this->modifier;
    ins >> this->modifierLevel;
    ins >> this->element;

}

//------------------------------------------------------------------------------
Item* Armour::clone() const
{
    // Implement this function
    return new Armour(*this); // remove this line
}

