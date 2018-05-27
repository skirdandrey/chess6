#define CTEST_MAIN

#include <stdlib.h>
#include <stdio.h>
#include <func.h>
#include <ctest.h>
#include <stdbool.h>

CTEST(rook, correct_rook) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 1;
	k[3] = 4;
	int result = check_rook(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(rook, uncorrect_rook) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 4;
	k[3] = 4;
	int result = check_rook(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(knight, correct_knight) {
	int k[4];
	k[0] = 2;
	k[1] = 1;
	k[2] = 3;
	k[3] = 3;
	int result = check_knight(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(knight, uncorrect_knight) {
	int k[4];
	k[0] = 2;
	k[1] = 1;
	k[2] = 6;
	k[3] = 6;
	int result = check_knight(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(bishop, correct_bishop) {
	int k[4];
	k[0] = 3;
	k[1] = 1;
	k[2] = 5;
	k[3] = 3;
	int result = check_bishop(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(bishop, uncorrect_bishop) {
	int k[4];
	k[0] = 3;
	k[1] = 1;
	k[2] = 5;
	k[3] = 5;
	int result = check_bishop(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(queen, correct_queen) {
	int k[4];
	k[0] = 4;
	k[1] = 1;
	k[2] = 4;
	k[3] = 4;
	int result = check_queen(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(queen, uncorrect_queen) {
	int k[4];
	k[0] = 4;
	k[1] = 1;
	k[2] = 6;
	k[3] = 6;
	int result = check_queen(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(king, correct_king) {
	int k[4];
	k[0] = 5;
	k[1] = 1;
	k[2] = 5;
	k[3] = 2;
	int result = check_king(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(king, uncorrect_king) {
	int k[4];
	k[0] = 5;
	k[1] = 1;
	k[2] = 5;
	k[3] = 5;
	int result = check_king(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn, correct_pawn) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 3;
	k[3] = 1;
	int result = check_pawn(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn, uncorrect_pawn) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 7;
	k[3] = 7;
	int result = check_pawn(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn2, correct_pawn2) {
	int k[4];
	k[0] = 7;
	k[1] = 7;
	k[2] = 5;
	k[3] = 7;
	int result = check_pawn2(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn2, uncorrect_pawn2) {
	int k[4];
	k[0] = 7;
	k[1] = 7;
	k[2] = 3;
	k[3] = 3;
	int result = check_pawn2(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

int main(int argc, const char** argv)  {
    int test_res = ctest_main(argc, argv);
    return test_res;
}
