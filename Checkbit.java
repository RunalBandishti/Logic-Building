import java.lang.*;
import java.util.*;

class XBitwise
{
    public boolean Checkbit(int iNo)
    {
        int iMask = 64; //iMask = 4;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == 0){
            return false;
        }
        else{
            return true;
        }
    }
}

//sir toh error javac nhi use kela tr yetoy class vaigere che nusta java command vaparli tr main function vala class vr ghyaycha

class Checkbit
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number:");
        int value = sobj.nextInt();

        XBitwise bobj = new XBitwise();
        boolean bret = bobj.Checkbit(value);

        if(bret == true){
            System.out.println("Bit is on");
        }
        else{
            System.out.println("Bit is off");
        }
    }
}
