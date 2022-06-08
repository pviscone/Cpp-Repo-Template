#include "Sample.h"
#include "../catch.hpp"
#include <vector>

Sample s;
TEST_CASE("TEST ON DATA"){
SECTION("Correct default data"){
    static std::vector<double> defVec {1.,2.,3.,4.,5.,6.};
    static std::vector<double> data=s.GetData();
    REQUIRE(data==defVec);
};
SECTION("Correct set data"){
    static std::vector<double> newVec {1.,1.};
    s.SetData(newVec);
    static std::vector<double> data=s.GetData();
    REQUIRE(data==newVec);}
};
