/**
 *  @author     Bartosz Dec (Qsionc)
 *  @date       11.02.2022
 *  @file       color.cpp
 *  @brief      
 *  @copyright  GNU Public License  
 */

#include "color.h"
#include <boost/format.hpp>

using namespace smol;

std::ostream& operator<<(std::ostream& _ostream, color const& _color)
{
    std::string result(form::reset);
    while (!_color.empty())
    {
        result += _color.front();
        _color.pop();
    }
    return _ostream << result;
}

std::ostream& smol::reset(std::ostream& _ostream)
{
    return _ostream << form::reset;
}

std::ostream& smol::endl(std::ostream& _ostream)
{
    return reset(_ostream) << std::endl;
}

color::color(std::initializer_list<char const*> _list) :
    format_(_list)
{
}

char const* color::front() const
{
    return format_.front();
}

void color::pop() const
{
    format_.pop();
}

void color::push(char const* _form) const
{
    format_.push(_form);
}

bool color::empty() const
{
    return format_.empty();
}
