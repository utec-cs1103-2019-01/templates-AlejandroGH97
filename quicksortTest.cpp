//
// Created by alejandro on 5/17/19.
//
#include "catch2.h"
#include "quicksort.h"

TEST_CASE("Quicksort: "){

    int test[] = {10,5};
    int n =sizeof(test)/ sizeof(test[0]);
    quicksort(test,0,n-1);
    REQUIRE(test[0]==5);
    REQUIRE(test[1]==10);


    int test2[] = {41,67,8,52,90,1,56};
    int n2 =sizeof(test2)/ sizeof(test2[0]);
    quicksort(test2,0,n2-1);
    REQUIRE(test2[0]==1);
    REQUIRE(test2[1]==8);
    REQUIRE(test2[2]==41);
    REQUIRE(test2[3]==52);
    REQUIRE(test2[4]==56);
    REQUIRE(test2[5]==67);
    REQUIRE(test2[6]==90);


    std::vector<int> test3 = {10,5,17,31,4,8};
    int n3 = test3.size();

    quicksort(test3,0,n3-1);
    REQUIRE(test3[0]==4);
    REQUIRE(test3[1]==5);
    REQUIRE(test3[2]==8);
    REQUIRE(test3[3]==10);
    REQUIRE(test3[4]==17);
    REQUIRE(test3[5]==31);

    std::vector<int> test4 = {};
    quicksort(test4,0,0);
    //No haria nada porque en quicksort revisa que lo sea menor a hi.


}
