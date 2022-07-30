#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <CodeWars/WhoLikeThis.hpp>

using namespace std;

string n1 = "Maks";
string n2 = "Julia";
string n3 = "Alex";
string n4 = "Irina";
string n5 = "Sveta";

TEST(CodeWarsTests, WhoLikeThisLikesNoLikesTest) {
  EXPECT_EQ(likes({}), "no one likes this");
}

TEST(CodeWarsTests, WhoLikeThisLikesOneLikeTest) {
  stringstream ss;
  ss << n1 << " likes this";
  EXPECT_EQ(likes({n1}), ss.str());
}

TEST(CodeWarsTests, WhoLikeThisLikeTwoLikeTest) {
  stringstream ss;
  ss << n1 << " and " << n2 << " like this";
  EXPECT_EQ(likes({n1, n2}), ss.str());
}

TEST(CodeWarsTests, WhoLikeThisLikeThreeLikeTest) {
  stringstream ss;
  ss << n1 << ", " << n2 << " and " << n3 << " like this";
  EXPECT_EQ(likes({n1, n2, n3}), ss.str());
}

TEST(CodeWarsTests, WhoLikeThisLikeFourAndMoreLikeTest) {
  stringstream ss;
  vector<string> lk = {n1, n2, n3, n4, n5};
  ss << n1 << ", " << n2 << " and " << lk.size() - 2 << " others like this";
  EXPECT_EQ(likes(lk), ss.str());
}