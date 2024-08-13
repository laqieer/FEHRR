#pragma once

enum {
    SHOP_TYPE_ARMORY        = 0,
    SHOP_TYPE_VENDOR        = 1,
    SHOP_TYPE_SECRET_SHOP   = 2
};

struct Shop{
    /* 00 */ int shopType;
    /* 04 */ const u16 *shopItems;
};
