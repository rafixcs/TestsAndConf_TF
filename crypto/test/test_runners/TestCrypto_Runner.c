#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Crypto)
{
  RUN_TEST_CASE(Crypto, TestCrypto0);
  RUN_TEST_CASE(Crypto, TestCrypto1);
  RUN_TEST_CASE(Crypto, TestCrypto2);
  RUN_TEST_CASE(Crypto, TestCrypto3);
  RUN_TEST_CASE(Crypto, TestCrypto4);
  RUN_TEST_CASE(Crypto, TestCrypto5);
  RUN_TEST_CASE(Crypto, TestCrypto6);
  RUN_TEST_CASE(Crypto, TestCrypto7);
}

