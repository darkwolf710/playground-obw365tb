#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.h"
#include "fonction42.h"
#include "operators.h"


TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "La fonction 42 est executée", "[fonction42]" ) {
    REQUIRE( fonction42() == 42 );
}

TEST_CASE( "La fonction 43 est executée", "[fonction43]" ) {
    REQUIRE( fonction42() == 43 );
}


/* OPERATORS */

TEST_CASE( "La fonction addition est executée", "[addition]" ) {
    REQUIRE( operators(1, 2) == 3 );
    REQUIRE( operators(10, 20) == 30 );
}

TEST_CASE( "La fonction difference est executée", "[difference]" ) {
    REQUIRE( operators(1, 2) == -1 );
    REQUIRE( operators(40, 20) == 20 );
}

TEST_CASE( "La fonction produit est executée", "[produit]" ) {
    REQUIRE( operators(1, 2) == 2 );
    REQUIRE( operators(40, 20) == 800 );
}

TEST_CASE( "La fonction ratio est executée", "[ratio]" ) {
    REQUIRE( operators(10, 2) == 5 );
    REQUIRE( operators(1, 5) == 0 );
    REQUIRE_THROWS( operators(1, 0) );
}

TEST_CASE( "La fonction modulo est executée", "[modulo]" ) {
    REQUIRE( operators(11, 5) == 1 );
    REQUIRE( operators(10, 2) == 0 );
    REQUIRE( operators(1, 5) == 1 );
}

TEST_CASE( "La fonction op_angle_0_360 est executée", "[op_angle_0_360]" ) {
    REQUIRE( angle(1) == 1 );
    REQUIRE( angle(180) == 180 );
    REQUIRE( angle(359) == 359 );
    REQUIRE( angle(-1) == 359 );
    REQUIRE( angle(361) == 1 );
}

TEST_CASE( "La fonction op_angle_0_360 est executée", "[op_angle_180_180]" ) {
    REQUIRE( angle(1) == 1 );
    REQUIRE( angle(179) == 179 );
    REQUIRE( angle(359) == -1 );
    REQUIRE( angle(-1) == -1 );
    REQUIRE( angle(361) == 1 );
}
