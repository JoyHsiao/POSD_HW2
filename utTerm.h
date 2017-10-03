#ifndef UTTERM_H
#define UTTERM_H
#include "Number.h"


#include <iostream>

//test Number.value()
TEST (Number,ctor) {
    Number N(123);
    ASSERT_EQ("123", N.value());
//    std::cout<<n.value();
}
//test Number.symbol()
TEST (Number, symbol) {
    Number S(123);
    ASSERT_EQ("123", S.symbol());
}
//?- 25=25.
//true.
TEST (Number, matchSuccess) {
    Number N1(25), N2(25);
    ASSERT_TRUE(N1.match(N2));
}
//?- 25=0.
//false.
TEST (Number, matchFailureDiffValue) {

}
//?- 25=tom.
//false.
TEST (Number, matchFailureDiffConstant) {

}
//?- 25=X.
//true.
TEST (Number, matchSuccessToVar) {
  
}

//?- tom=25.
//false.
TEST (Atom, matchFailureDiffConstant) {

}

// ?- tom = X.
// X = tom.
TEST (Atom, matchSuccessToVar) {

}

// ?- X=tom, tom=X.
// X = tom.
TEST (Atom, matchSuccessToVarInstantedToDiffConstant) {

}

// ?- X=jerry, tom=X.
// false.
TEST (Atom, matchFailureToVarInstantedToDiffConstant) {

}

// ?- X = 5.
// X = 5.
TEST (Var, matchSuccessToNumber) {
 
}

// ?- X=25, X= 100.
// false.
TEST (Var, matchFailureToTwoDiffNumbers) {

}

// ?- X=tom, X= 25.
// false.
TEST (Var, matchSuccessToAtomThenFailureToNumber) {

}
//?- tom=X, 25=X.
//false.
TEST (Var, matchSuccessToAtomThenFailureToNumber2) {

}
//?- X=tom, X=tom.
//true.
TEST(Var, reAssignTheSameAtom){

}
#endif
