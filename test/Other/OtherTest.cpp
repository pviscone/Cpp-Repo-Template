#include "../catch.hpp"
TEST_CASE("Prova a caso"){
    SECTION("Prova a caso 1"){
        REQUIRE(1==1);
    };
    SECTION("Prova a caso FALLITA"){
        REQUIRE(1==0);
    };

};
