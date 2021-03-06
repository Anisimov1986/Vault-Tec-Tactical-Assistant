#ifndef _HEXATTACK_H
#define _HEXATTACK_H

#include "ComplexAction.h"
#include "LeftMouseHook.h"

/* Run to the specified critter and attack it when the distance is 1 hex. */

class HexAttack : public ComplexAction {
public:
    HexAttack(uint32_t critterId);

    bool frame(FOClient*) override;
private:
    uint32_t critterId;
};

extern LeftMouseHook HexAttackHook;

#endif //_HEXATTACK_H
