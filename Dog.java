interface Animal{
    void sound();
    void eat();
    
}

interface Human{
    void travel();
    
}

public class Dog implements Animal,Human{
    
    public void sound()
    {
    System.out.println("Tiger");
}

public void eat(){
    System.out.println("Tiger is eating");
}
public void travel(){
    System.out.println("Hello Human Being");
}
public static void main(String[] args){
    Dog pet= new Dog();
    pet.sound();
    pet.eat();
    pet.travel();
}
}
