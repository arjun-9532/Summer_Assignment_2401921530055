package Week_1.OOPS;
class KidsUser implements LibraryUser{
    int age;
    String bookType;
    public void registerAccount(int age){
          if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
          }
          else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
          }
    }
    public void requestBook(String bookType){
         if(bookType=="Kids"){
           System.out.println("Sorry, Age must be less than 12 to register as a kid");
         }
         else{
            System.out.println("Oops, you are allowed to take only kids books");
         }
    }
}