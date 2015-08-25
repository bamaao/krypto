/*
 * test_search.cpp
 *
 *  Created on: August 24, 2015
 *      Author: howpenghui
 */

#include "../../../contrib/gtest/gtest.h"
#include "../../main/cpp/SearchPrivateKey.h"

using namespace testing;

#define N 64

TEST(SearchKeyTest, testCalls){
	SearchPrivateKey<N> sk;
	BitMatrix<N, 2*N> K = sk.getK();
	BitVector<N> objectSearchKey = sk.getObjectSearchKey();
	BitMatrix<N, 2*N> objectAddressFunction = sk.getObjectAddressFunction();
	BitMatrix<N> objectConversionMatrix = sk.getObjectConversionMatrix(objectAddressFunction);
}