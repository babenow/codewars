#include <CodeWars/MultiplicationTable.hpp>
#include <gtest/gtest.h>

struct table_test_case {
  int n;
  MultipleTable expected;
};

vector<table_test_case> testCases = {
    {
        3,
        {
            {1, 2, 3},
            {2, 4, 6},
            {3, 6, 9},
        },
    },

};


TEST(MultiplicationTableTests, multimplication_table_test) {
    for (auto &&tc : testCases)
    {
       EXPECT_EQ(multiplication_table(tc.n), tc.expected); 
    }
    
}
