class Main {
    public static void main(String[] args) {
        System.out.println(1 + 2 * 3);
    }    
}

class DummyClass {
    public int method() {
        return 1;
    }
}

class TestExpressions {
    DummyClass dummy;
    DummyClass[] dummyArray;

    public int testAssign(int da, int ba) {
        int a;
        int b;
        boolean c;
        a = 1;
        b = 2;
        a = b;
        c = true;
        a = 1 + 2 - 3 / 4 * 5 + 6 -7;
        c = true && false || true && false || a > b;
        return 1;
    }

    public int testArray(boolean aba, int[] bba) {
        int[] a;
        int b;
        a = new int[1];
        b = a[0];
        a[0] = 1;
        return 1;
    }

    public int testAccess(int[] arr, DummyClass dummy) {
        int a;
        dummy = new DummyClass();
        a = dummy.method();
        dummyArray = new DummyClass[1];
        dummyArray[0] = new DummyClass();
        a = dummyArray[0].method();
        return 1;
    }

}
