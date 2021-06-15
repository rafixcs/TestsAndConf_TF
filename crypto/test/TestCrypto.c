#include "crypt.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Crypto);

TEST_SETUP(Crypto)
{
}

TEST_TEAR_DOWN(Crypto)
{
}

TEST(Crypto, TestCrypto1)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};

	type = 3;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;

	crypt(key, plan, type, enc_dec, cipher);

	if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}

TEST(Crypto, TestCrypto2)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};
	
	type = 3;
	enc_dec = 0;

	unsigned int plan[4] = {0x206BF119, 0x7A085AC8, 0xB31B2AD0, 0x4843FFC1};

	crypt(key, plan, type, enc_dec, cipher);

	if ((cipher[0] != 0xA5A5A5A5) || (cipher[1] != 0x01234567) ||
		(cipher[2] != 0xFEDCBA98) || (cipher[3] != 0x5A5A5A5A))
	{
		TEST_ASSERT(1);
	}
	else
	{
		TEST_ASSERT(1);
	}
	
}