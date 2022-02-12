/**
 *  @author     Bartosz Dec (Qsionc)
 *  @date       11.02.2022
 *  @file       e_text_format.h
 *  @brief      
 *  @copyright  GNU Public License  
 */

#ifndef __HGUARD_SMOL_COLOR_INCLUDE_IMPL_FORM_H__
#define __HGUARD_SMOL_COLOR_INCLUDE_IMPL_FORM_H__

namespace smol
{
    struct form
    {
        static constexpr auto reset = "\033[00m";
        static constexpr auto bold = "\033[01m";
        static constexpr auto dark = "\033[02m";
        static constexpr auto cursive = "\033[03m";
        static constexpr auto underscore = "\033[04m";
        static constexpr auto blink = "\033[05m";
        static constexpr auto inverse = "\033[07m";
        static constexpr auto dashed = "\033[09m";
    };
}

#endif //__HGUARD_SMOL_COLOR_INCLUDE_IMPL_FORM_H__
