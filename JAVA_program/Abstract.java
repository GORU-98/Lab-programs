
abstract class Deepanshu {

    abstract void goru();
}

class Ram_Ram extends Deepanshu {
    void goru() {
        String a = "Using abstract class";
        System.out.println(a);
    }
}

/**
 * Abstract
 */
public class Abstract {
    public static void main(String[] args) {
        Deepanshu a = new Ram_Ram();
        a.goru();
    }

}
