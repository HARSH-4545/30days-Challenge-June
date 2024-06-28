class Abc { 
    int i;

    void value(int i) {
        this.i = i;  
    }

    void display() {
        System.out.println(i);
    }

}
class This{
    public static void main(String[] args) {
        Abc v = new Abc();
        v.value(10);
        v.display();
    }
}
