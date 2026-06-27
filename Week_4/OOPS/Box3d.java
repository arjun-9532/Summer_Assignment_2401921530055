package Week_4.OOPS;

public class Box3d extends Box{
    int h;
     public Box3d(int l,int b, int h)   {
        super(l,b);
        this.h=h;
     }
     public void volume(){
     System.out.println("volume of box is"+l*b*h);
     }
}
