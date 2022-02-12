/**
 *  @author     Bartosz Dec (Qsionc)
 *  @date       11.02.2022
 *  @file       test.cpp
 *  @brief      
 *  @copyright  GNU Public License  
 */

#include <gtest/gtest.h>
#include "smol_color.h"

class TestTerminalColorFixture : public testing::Test
{
public:
    ~TestTerminalColorFixture() override = default;

protected:
    void SetUp() override
    {
        Test::SetUp();
    }

    void TearDown() override
    {
        Test::TearDown();
    }
};

TEST_F(TestTerminalColorFixture, simple_display_test)
{
    std::cout << smol::color{
        smol::foreground::green,
        smol::background::red,
        smol::form::bold,
    };
    std::cout << "This text is green on red background, bold" << std::endl
              << smol::reset << "This text is displayed as normal" << std::endl;
    std::cout << smol::color{
        smol::foreground::green,
        smol::background::black,
        smol::form::bold,
        smol::form::inverse
    } << "This text is black on green background, with background color cut with smol::endl or smol::reset" <<
              smol::endl;
}

int main(int _argc, char** _argv)
{
    testing::InitGoogleTest(&_argc, _argv);
    return RUN_ALL_TESTS();
}