#ifndef UTTERM_H
#define UTTERM_H
#include "container.h"
#include "number.h"
#include "atom.h"
#include "variable.h"

//test Number.value()
TEST (Number,ctor) {
    Number N(123);
    ASSERT_EQ("123", N.value());
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
    ASSERT_TRUE(N1.match(&N2));
}
//?- 25=0.
//false.
TEST (Number, matchFailureDiffValue) {
    Number N1(25), N2(0);
    ASSERT_FALSE(N1.match(&N2));
}
//?- 25=tom.
//false.
TEST (Number, matchFailureDiffConstant) {
    Number N(25);
    Atom tom("tom");
    ASSERT_FALSE(N.match(&tom));
}
//?- 25=X.
//true.
TEST (Number, matchSuccessToVariable) {
    Number N(25);
    Variable X("X");
    ASSERT_TRUE(N.match(&X));  
}

//?- tom=25.
//false.
TEST (Atom, matchFailureDiffConstant) {
    Atom tom("tom");
    Number N(25);
    ASSERT_FALSE(tom.match(&N));
}

// ?- tom = X.
// X = tom.
TEST (Atom, matchSuccessToVariable) {
    Atom tom("tom");
    Variable X("X");
    ASSERT_TRUE(tom.match(&X)); 
}

// ?- X=tom, tom=X.
// X = tom.
TEST (Atom, matchSuccessToVariableInstantedToDiffConstant) {
    Variable X("X");
    Atom tom("tom");
    ASSERT_TRUE(X.match(&tom));
    ASSERT_TRUE(tom.match(&X));
}

// ?- X=jerry, tom=X.
// false.
TEST (Atom, matchFailureToVariableInstantedToDiffConstant) {
    Variable X("X");
    Atom jerry("jerry");
    Atom tom("tom");
    ASSERT_TRUE(X.match(&jerry));
    ASSERT_FALSE(tom.match(&X));
}

// ?- X = 5.
// X = 5.
TEST (Variable, matchSuccessToNumber) {
    Variable X("X");
    Number N(5);
    ASSERT_TRUE(X.match(&N));
}

// ?- X=25, X= 100.
// false.
TEST (Variable, matchFailureToTwoDiffNumbers) {
    Variable X("X");
    Number N1(25),N2(100);
    ASSERT_TRUE(X.match(&N1));
    ASSERT_FALSE(X.match(&N2));
}

// ?- X=tom, X= 25.
// false.
TEST (Variable, matchSuccessToAtomThenFailureToNumber) {
    Variable X("X");
    Atom tom("tom");
    Number N(25);
    ASSERT_TRUE(X.match(&tom));
    ASSERT_FALSE(X.match(&N));
}
//?- tom=X, 25=X.
//false.
TEST (Variable, matchSuccessToAtomThenFailureToNumber2) {
    Atom tom("tom");
    Variable X("X");
    Number N(25);
    ASSERT_TRUE(tom.match(&X));
    EXPECT_FALSE(N.match(&X));
}
//?- X=tom, X=tom.
//true.
TEST(Variable, reAssignTheSameAtom){
    Variable X("X");
    Atom tom("tom");
    ASSERT_TRUE(X.match(&tom));
    ASSERT_TRUE(tom.match(&X));
}
#endif
