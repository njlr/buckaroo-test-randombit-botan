#include <gtest/gtest.h>
#include <vector>
#include <botan/sha2_32.h>

TEST(botan, basics) {

  using namespace Botan;

  auto const hash = [](std::vector<byte> input) {
    SHA_256 sha;
    return sha.process(input);
  };

  auto x = std::vector<byte>({ 'a', 'b', 'c' });

  ASSERT_TRUE(hash(x) == hash(x));
}
