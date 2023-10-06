class Main {
    public static void main(String[] args) {
        System.out.println(5);
    }
}
    
class Statements {
    public int testIf() 
    {
        int a;
        int b;
        a = 1;
        b = 2;
        if (a < b) {
            System.out.println(1);
        } else {
            System.out.println(2);
        }
        return 1;
    }

    public int testWhile() 
    {
        int a;
        int b;
        a = 1;
        b = 2;
        while (a < b) {
            System.out.println(a);
            a = a + 1;
        }
        return 1;
    }

    public int testPrint() 
    {
        System.out.println(1);
        return 1;
    }

    public int testReturn() 
    {
        return 1;
    }

    public int testEmpty() 
    {
        ;
        return 1;
    }

    public int testBlock() 
    {
        {
            System.out.println(1);
        }
        return 1;
    }
}
