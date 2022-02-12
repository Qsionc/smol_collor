/**
 *  @author     Bartosz Dec (Qsionc)
 *  @date       11.02.2022
 *  @file       e_text_color.h
 *  @brief      
 *  @copyright  GNU Public License  
 */

#ifndef __HGUARD_SMOL_COLOR_INCLUDE_E_TEXT_COLOR_H__
#define __HGUARD_SMOL_COLOR_INCLUDE_E_TEXT_COLOR_H__

namespace smol
{
    struct foreground
    {
        static constexpr auto black = "\033[30m";
        static constexpr auto red = "\033[31m";
        static constexpr auto green = "\033[32m";
        static constexpr auto yellow = "\033[33m";
        static constexpr auto blue = "\033[34m";
        static constexpr auto purple = "\033[35m";
        static constexpr auto cyan = "\033[36m";
        static constexpr auto white = "\033[37m";
    };
}

#endif //__HGUARD_SMOL_COLOR_INCLUDE_E_TEXT_COLOR_H__
