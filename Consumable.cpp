#include <iomanip>
#include "Consumable.h"

//------------------------------------------------------------------------------
Consumable::Consumable()
:Item()
{
    effect = " ";
    uses = 1;
}

//------------------------------------------------------------------------------
void Consumable::display(std::ostream& outs) const{
// Add the definition for this function 
    //Item::display(outs);

    outs << std::left   << "  Nme" << ": "
                        << getName() << "\n"
         << std::left   << "  Eft" << ": "
                        << getEffect() << "\n";
        // << std::left   << std::setw(2)
        //                << "  Use" << ": "
        //                << getNumberOfUses() << "\n";
    
}

//------------------------------------------------------------------------------
void Consumable::read(std::istream& ins){
// Add the definition for this function

    ins >> effect;
    ins >> uses;

}

//------------------------------------------------------------------------------
Item* Consumable::clone() const{
// Add the definition for this function

    return new Consumable(*this);
    
}
