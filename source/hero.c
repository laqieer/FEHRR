#include "hero.h"
#include "heroes.h"

const char * GetHeroName(int hero_id)
{
    return hero_id > 0 && hero_id <= HERO_NUM ? hero_names[hero_id - 1] : "";
}
