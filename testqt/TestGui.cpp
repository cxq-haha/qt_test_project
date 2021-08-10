#include "TestGui.h"

void TestGui::testGui()
{
    QLineEdit lineEdit;

    QTest::keyClicks(&lineEdit, "hello world");

    QCOMPARE(lineEdit.text(), QString("hello world"));
}
//! [1]

//! [2]
QTEST_MAIN(TestGui)

//! [2]

