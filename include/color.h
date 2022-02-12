/**
 *  @author     Bartosz Dec (Qsionc)
 *  @date       11.02.2022
 *  @file       color.h
 *  @brief      
 *  @copyright  GNU Public License  
 */

#ifndef __HGUARD_SMOL_COLOR_INCLUDE_IMPL_COLOR_H__
#define __HGUARD_SMOL_COLOR_INCLUDE_IMPL_COLOR_H__

#include <impl/form.h>
#include <impl/background.h>
#include <impl/foreground.h>
#include <queue>
#include <iostream>

namespace smol
{
    class color
    {
    private:
        mutable std::queue<char const*> format_;
    public:
        color() = default;

        color(std::initializer_list<char const*> _list);

        [[nodiscard]] char const* front() const;

        void pop() const;

        void push(char const* _form) const;

        [[nodiscard]] bool empty() const;
    };
    std::ostream& reset(std::ostream& _ostream);

    std::ostream& endl(std::ostream& _ostream);
}

std::ostream& operator<<(std::ostream& _ostream, smol::color const& _color);

#endif //__HGUARD_SMOL_COLOR_INCLUDE_IMPL_COLOR_H__
