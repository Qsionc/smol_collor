/**
 *  @author     Bartosz Dec (Qsionc)
 *  @date       11.02.2022
 *  @file       e_text_background.h
 *  @brief      
 *  @copyright  GNU Public License  
 */

#ifndef __HGUARD_SMOL_COLOR_INCLUDE_E_TEXT_BACKGROUND_H__
#define __HGUARD_SMOL_COLOR_INCLUDE_E_TEXT_BACKGROUND_H__

namespace smol
{
    struct background
    {
        static constexpr auto black = "\033[40m";
        static constexpr auto red = "\033[41m";
        static constexpr auto green = "\033[42m";
        static constexpr auto yellow = "\033[43m";
        static constexpr auto blue = "\033[44m";
        static constexpr auto purple = "\033[45m";
        static constexpr auto cyan = "\033[46m";
        static constexpr auto white = "\033[47m";
    };
}

#endif //__HGUARD_SMOL_COLOR_INCLUDE_E_TEXT_BACKGROUND_H__
