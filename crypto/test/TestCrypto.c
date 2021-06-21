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

TEST(Crypto, TestCrypto0)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};

	type = 0;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	crypt(key, plan, type, enc_dec, cipher);
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}
TEST(Crypto, TestCrypto1)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};

	type = 1;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	crypt(key, plan, type, enc_dec, cipher);
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
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

	type = 2;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	crypt(key, plan, type, enc_dec, cipher);
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}
TEST(Crypto, TestCrypto3)
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
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}
TEST(Crypto, TestCrypto4)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};

	type = 4;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	crypt(key, plan, type, enc_dec, cipher);
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}
TEST(Crypto, TestCrypto5)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};

	type = 5;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	crypt(key, plan, type, enc_dec, cipher);
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}
TEST(Crypto, TestCrypto6)
{
	int i, type, enc_dec;
	unsigned int cipher[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};

	type = 6;

	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	crypt(key, plan, type, enc_dec, cipher);
	
	// now decode to check
	enc_dec = 0;
	crypt(key, cipher, type, enc_dec, cipher);
	/*for (int j=0;j<4;j++)
	{
		printf("\n cipher %d %X",j,cipher[j]);
	}*/

	/*if ((cipher[0] != 0x206BF119) || (cipher[1] != 0x7A085AC8) ||
		(cipher[2] != 0xB31B2AD0) || (cipher[3] != 0x4843FFC1))*/
	if ((cipher[0] != plan[0]) || (cipher[1] != plan[1]) ||
		(cipher[2] != plan[2]) || (cipher[3] != plan[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}

}
TEST(Crypto, TestCrypto7)
{
	int i, type, enc_dec;
	unsigned int cipher[4],cipher_aux[4];

	unsigned int key[8] = {
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL,
		0xDEADBEEFL, 0x01234567L, 0x89ABCDEFL, 0xDEADBEEFL};
	/* random int between 0 and 199 */
	int r = rand() % 200;
	
	type = 7+r;
	//printf("\n Type %d",type);
	
	unsigned int plan[4] = {0xA5A5A5A5L, 0x01234567L, 0xFEDCBA98L, 0x5A5A5A5AL};
	enc_dec = 1;
	//save values before function
	memcpy(cipher_aux,cipher,16);
	crypt(key, plan, type, enc_dec, cipher);
	//nothing could be change
	if ((cipher[0] != cipher_aux[0]) || (cipher[1] != cipher_aux[1]) ||
		(cipher[2] != cipher_aux[2]) || (cipher[3] != cipher_aux[3]))
	{
		TEST_ASSERT(0);
	}
	
	// now decode to check
	enc_dec = 0;
	//save values before function
	memcpy(cipher_aux,cipher,16);
	crypt(key, cipher, type, enc_dec, cipher);
	if ((cipher[0] != cipher_aux[0]) || (cipher[1] != cipher_aux[1]) ||
		(cipher[2] != cipher_aux[2]) || (cipher[3] != cipher_aux[3]))
	{
		TEST_ASSERT(0);
	}
	else
	{
		//passed in all tests
		TEST_ASSERT(1);
	}

}

/*TEST(Crypto, TestCrypto2)
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
		TEST_ASSERT(0);
	}
	else
	{
		TEST_ASSERT(1);
	}
	
}*/
