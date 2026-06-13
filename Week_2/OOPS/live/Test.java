package Week_2.OOPS.live;
import Week_2.OOPS.music.string.Veena;
import  Week_2.OOPS.music.wind.Saxophone;
import Week_2.OOPS.music.Playable;
public class Test {
    public static void main(String [] args){
    Veena v = new Veena();
    Saxophone s = new Saxophone();
    v.play();
    s.play();
    Playable p;
        p=new Veena();
        p.play();
        p=new Saxophone();
        p.play();

    }
}
