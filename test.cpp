#define CATCH_CONFIG_MAIN
#pragma warning(push)
#pragma warning(disable:4640 4242 6330 28251)
#include "catch.hpp"
#pragma warning(pop)

TEST_CASE("test1") {
  int *x = nullptr;
  REQUIRE(x==nullptr);
  SECTION("section") {
  }
}
