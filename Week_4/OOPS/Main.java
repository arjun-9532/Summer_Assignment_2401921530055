package Week_4.OOPS;

class Outer{
 public void display(){
    System.out.println("I am display form outer class");
 }
 class Inner{
    public void display(){
        System.out.println("I am display from inner class");
    }
 }
}

public class Main {
    public static void main(String[] Args){
        Outer o=new Outer();
        Outer.Inner i =o.new Inner();
        o.display();
        i.display();
    }   
}
