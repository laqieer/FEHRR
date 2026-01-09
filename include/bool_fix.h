#ifndef BOOL_FIX_H
#define BOOL_FIX_H

// Workaround for bool typedef conflict in decomp/include/types.h (git submodule)
// The types.h file checks !defined(bool) before typedef'ing bool, so by defining
// it as a macro here, we prevent the typedef and avoid the "two or more data types" error
#ifndef bool
#define bool bool
#endif

#endif // BOOL_FIX_H
