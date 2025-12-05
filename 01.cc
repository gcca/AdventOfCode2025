#include <gtest/gtest.h>

#include <iostream>

template <class Container> void Day01(const Container &input) {
  for (const std::string &it : input) {
    std::cout << it << std::endl;
  }
}

TEST(Day01, Part1) {
  std::array<std::string, 12> input{"L68", "L30", "R48", "L5",  "R60",
                                    "L55", "L1",  "L99", "R14", "L82"};
  std::cout << "Day01 Part1" << std::endl;
  Day01(input);
}
