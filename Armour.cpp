#include "Armour.h"

//------------------------------------------------------------------------------
Armour::Armour()
    :Item("Armour", false),
    material(" "),
    modifier(" "),
    element(" ") // There should be something simliar in Consumable.cpp
{
    //name = " ";
    durability = 0;
    defense = 0;
   //material = " ";
   // modifier = " ";
    modifierLevel = 0;
   // element = " ";
}

//------------------------------------------------------------------------------
void Armour::display(std::ostream& outs) const{
    // Implement this function
    //Item::display(outs);

     outs << std::left  << "  Nme"  << ": "
          << getName() << "\n"
          << std::left  << "  Dur" << ": "
          << getDurability() << "\n"
          << std::left  << "  Def" << ": "
          << getDefense() << "\n"
          << std::left  << "  Mtl" << ": "
          << getMaterial() << "\n"
          << std::left << "  Mdr" << ": "
          << getModifier() << " (Lvl " << getModifierLevel() << ")" << "\n"
          << std::left << "  Emt"  << ": "
          << getElement() << "\n";
          
    


}

//------------------------------------------------------------------------------
void Armour::read(std::istream& ins){
    // Implement this function
    ins >> this->name;
    ins >> this->material;
    ins >> this->durability;
    //ins >> this->name;
    ins >> this->defense;
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

