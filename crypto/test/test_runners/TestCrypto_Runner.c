#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Crypto)
{
  RUN_TEST_CASE(Crypto, TestCrypto1);
  RUN_TEST_CASE(Crypto, TestCrypto2);
}

