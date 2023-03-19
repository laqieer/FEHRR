#include "hero.h"

const char * GetHeroName(int hero_id)
{
    return hero_names[hero_id - 1];
}
