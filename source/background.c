#include "background.h"
#include "backgrounds.h"

const char * GetBackgroundName(int background_id)
{
    return background_id >= BACKGROUND_NEW ? background_names[background_id - BACKGROUND_NEW] : "";
}
