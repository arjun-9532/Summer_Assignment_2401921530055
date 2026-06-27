package Week_4.OOPS;

public class Box {
    int l;
    int b;
    public Box(int l,int b){
       this.l=l;
       this.b=b;
    }
    public void area(){
        System.out.println("Area is"+l*b);
    }
}
