class Main {
    public static void main(String[] args) {
        System.out.println(5);
    }
}

/*
    * Testing the following:
*/

class DummyClass {
    int dummyField;

    public DummyClass DummyClass(int dummyParam) {
        dummyField = dummyParam;
        return this;
    }
}


class SimpleNewClass extends DummyClass {
    int intField;
    int[] intArrayField;
    boolean boolField;
    boolean[] boolArrayField;
    DummyClass dummyField;
    DummyClass[] dummyArrayField;


    public int returnInt() {
        return intField;
    }

    public int[] returnIntArray() {
        return intArrayField;
    }

    public boolean returnBool() {
        boolField = true;
        boolField = false;
        return boolField;
    }

    public boolean[] returnBoolArray() {
        return boolArrayField;
    }

    public DummyClass returnDummy() {
        return dummyField;
    }

    public DummyClass[] returnDummyArray() {
        return dummyArrayField;
    }

    public SimpleNewClass SimpleNewClass(int intParam, int[] intArrayParam, boolean boolParam, boolean[] boolArrayParam, DummyClass dummyParam, DummyClass[] dummyArrayParam) {
        intField = intParam;
        intArrayField = intArrayParam;
        boolField = boolParam;
        boolArrayField = boolArrayParam;
        dummyField = dummyParam;
        dummyArrayField = dummyArrayParam;
        return this;
    }

    public int accessIntFromDummy() {
        return dummyField.dummyField;
    }

    public int accessIntFromDummyArray() {
        return dummyArrayField[0].dummyField;
    }

    public int testIf() {
        if (boolField) 
        {
            System.out.println(1);
        } 
        else {
            System.out.println(0);
        }

        if (intField < 5 && boolField == true && intArrayField[0] >= 5) 
        {
            System.out.println(this.intField);
        } 
        else {
            System.out.println(0);
        }

        return 0x23;
    }

    public int testWhile() {
        int i;
        i = 0;
        while (i < 5) 
        {
            System.out.println(i);
            i = i + 1;
            {
                System.out.println(i);
                {
                    int j;
                    j = 0;
                    while (j < 5) 
                    {
                        System.out.println(j);
                        j = j + 1;
                    }
                }
            }
        }

        return 0x679;
    }

    public int testUnary() {
        if (!boolField) {
            boolField = true;
        }
        else {
            // testing empty else
        }

        return 0x123;
    }

    public int testMultipleExpressions() {
       int a;
       boolean b;
        a = 1 + 2 + 3 + 5 + 6 + 8 - 4 * 5 / 6 * 7 + 23 - 4 - 5;
        // same for bools and comparisons
        b = false && true && false && true || false && true && false && true;
        b = 1 < 2 && 2 < 3 && 3 < 4 && 4 < 5 && 5 < 6 || 6 < 7 && 7 < 8 || 8 < 9 || 9 < 10;
        return a;
    }
}
