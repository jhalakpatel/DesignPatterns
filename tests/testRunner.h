#ifndef TEST_RUNNER_H
#define TEST_RUNNER_H
#include "../include/common.h"

#include "gtest/gtest.h"

class TestRunner : public ::testing::Test
{
public:
    TestRunner()
    {
    }
    ~TestRunner() override
    {

    }
    void SetUp() override
    {

    }
    void TearDown() override
    {

    }
};

#endif // TEST_RUNNER_H