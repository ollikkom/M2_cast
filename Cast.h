#ifndef M2_CAST_CAST_H
#define M2_CAST_CAST_H
#include <iostream>
#pragma once
#include <exception>
#include <string>

class CastException:
        public std::exception
{
public:
    const char * what() const noexcept{
        return "Exception";
    }
};

class ExcOverflow: public CastException
{
public:
    const char * what() const noexcept{
        return "Overflow occured";
    }
};

class ExcSymbol: public CastException
{
public:
    const char * what() const noexcept{
        return "Error in the symbol";
    }
};



#endif //M2_CAST_CAST_H
