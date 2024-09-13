#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
  char soundex[5];   
  generateSoundex("", soundex);
  EXPECT_EQ(soundex,"");
}
