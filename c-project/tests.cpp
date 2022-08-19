#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.h"

TEST_CASE( "Factorials are computed", "[factorial]" ) {

    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );

}


TEST_CASE( "La fonction 42 est executée", "[fonction42]" ) {

    REQUIRE( fonction42() == 42 );

}
