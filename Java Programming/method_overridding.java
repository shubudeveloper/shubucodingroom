class Animal 
{
    void sound() 
    {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal 
{

    // Overriding parent class method
    void sound() 
    {
        System.out.println("Dog barks");
    }
}

class OverrideDemo 
{
    public static void main(String args[]) 
    {
        Animal obj1 = new Animal();
        obj1.sound();    // calls parent method

        Animal obj2 = new Dog();
        obj2.sound();    // calls overridden method (runtime polymorphism)
    }
}

public class method_overridding 
{
    public static void main(String[] args) 
    {
        OverrideDemo.main(args);
    }
}





/* 
--------------------output--------------------
Animal makes a sound
Dog barks
*/