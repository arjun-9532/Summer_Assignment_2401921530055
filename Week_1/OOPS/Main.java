package Week_1.OOPS;

public class Main {
    public static void main(String args[]){
        KidsUser a= new KidsUser();
        AdultUser b= new AdultUser();

        a.registerAccount(10);
        a.registerAccount(18);
        a.requestBook("kids");
        a.requestBook("Fiction");
        b.registerAccount(5);
        b.registerAccount(23);
        b.requestBook("kids");
        b.requestBook("Fiction");
    }
    
}
