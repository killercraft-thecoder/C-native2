#include "pxt.h"
using namespace pxt;

namespace Matrix {

    // Sum of all elements
    //%
    int sum(RefCollection* matrix) {
        int total = 0;
        for (int r = 0; r < matrix->getLength(); r++) {
            RefCollection* row = matrix->getAt(r)->asCollection();
            for (int c = 0; c < row->getLength(); c++) {
                total += row->getAt(c)->unboxNumber();
            }
        }
        return total;
    }

    // Element-wise addition
    //%
    RefCollection* add(RefCollection* m1, RefCollection* m2) {
        int rows = min(m1->getLength(), m2->getLength());
        int cols = min(m1->getAt(0)->asCollection()->getLength(), 
                       m2->getAt(0)->asCollection()->getLength());

        RefCollection* result = Array_::mk();
        for (int r = 0; r < rows; r++) {
            RefCollection* row1 = m1->getAt(r)->asCollection();
            RefCollection* row2 = m2->getAt(r)->asCollection();
            RefCollection* rowResult = Array_::mk();
            for (int c = 0; c < cols; c++) {
                rowResult->push(row1->getAt(c)->unboxNumber() + 
                                row2->getAt(c)->unboxNumber());
            }
            result->push(rowResult);
        }
        return result;
    }

    // Element-wise subtraction
    //%
    RefCollection* sub(RefCollection* m1, RefCollection* m2) {
        int rows = min(m1->getLength(), m2->getLength());
        int cols = min(m1->getAt(0)->asCollection()->getLength(), 
                       m2->getAt(0)->asCollection()->getLength());

        RefCollection* result = Array_::mk();
        for (int r = 0; r < rows; r++) {
            RefCollection* row1 = m1->getAt(r)->asCollection();
            RefCollection* row2 = m2->getAt(r)->asCollection();
            RefCollection* rowResult = Array_::mk();
            for (int c = 0; c < cols; c++) {
                rowResult->push(row1->getAt(c)->unboxNumber() - 
                                row2->getAt(c)->unboxNumber());
            }
            result->push(rowResult);
        }
        return result;
    }

    // Matrix multiplication
    //%
    RefCollection* mul(RefCollection* m1, RefCollection* m2) {
        int rows1 = m1->getLength();
        int cols1 = m1->getAt(0)->asCollection()->getLength();
        int rows2 = m2->getLength();
        int cols2 = m2->getAt(0)->asCollection()->getLength();

        if (cols1 != rows2) return Array_::mk(); // Incompatible sizes

        RefCollection* result = Array_::mk();
        for (int r = 0; r < rows1; r++) {
            RefCollection* rowResult = Array_::mk();
            for (int c = 0; c < cols2; c++) {
                int sum = 0;
                for (int k = 0; k < cols1; k++) {
                    sum += m1->getAt(r)->asCollection()->getAt(k)->unboxNumber() * 
                           m2->getAt(k)->asCollection()->getAt(c)->unboxNumber();
                }
                rowResult->push(sum);
            }
            result->push(rowResult);
        }
        return result;
    }
}
