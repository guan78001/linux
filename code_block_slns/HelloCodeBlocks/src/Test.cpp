#include "Test.h"
#include <stdio.h>
Test::Test()
{
    //ctor
    printf("%s\n",__FUNCTION__);
}

Test::~Test()
{
    printf("%s\n",__FUNCTION__);
    //dtor
}
