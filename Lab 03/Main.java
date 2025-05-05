
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int num1 = (int)(Math.random()*3);
        System.out.println("The First Number is : "+num1);
    int num2 = (int)(Math.random()*6);
        try{
            if(num1==0){
                throw new Execption0("Number :" +num2);
            } else if (num1==1) {
                throw new Execption1("Number :" +num2);
            } else if (num1==2) {
                num2= Integer.parseInt(sc.nextLine());
            }
            else {
                System.out.println("Clean");
            }
        }
        catch (Execption0 e){
            //int a = e*(-1);
            System.out.println("This number is Negative : "+(-1*num2));
        }
        catch (Execption1 e){
            System.out.println("This Number is Positive : " +num2);
        }
        catch (NumberFormatException e){
            System.out.println(e.getMessage()+ " is not a Number");
        }

    }
}
