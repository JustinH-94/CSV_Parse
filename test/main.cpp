#include "../include/testing.h"
#include <cassert>

void testFileOpen(){
    assert(true == FileOpen("/home/cuser/Justin/CSV_Parse/src/sample.csv"));
}

void testFirstNum(){
    assert("1" == CheckFirstVal());
}

void testCommaCheck(){
    assert(false == CheckForComma());
}

int main(){
    testFileOpen();
    testFirstNum();
    testCommaCheck();
}