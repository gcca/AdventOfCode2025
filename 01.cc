#include <gtest/gtest.h>

#include <iostream>

template <class Container>
void Day01(const Container &input, std::int64_t start) {
  for (const std::string &it : input) {
    std::cout << it << std::endl;

    char operation_chr = it[0];
    std::string number_str = it.substr(1);
    std::int64_t number = std::stoi(number_str);

    std::cout << "Operation: " << operation_chr << std::endl;
    std::cout << "Number: " << number << std::endl;
  }
}

TEST(Day01, Part1) {
  std::array<std::string, 10> input{"L68", "L30", "R48", "L5",  "R60",
                                    "L55", "L1",  "L99", "R14", "L82"};
  std::cout << "Day01 Part1" << std::endl;
  Day01(input, 0);
}
