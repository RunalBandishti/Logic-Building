import java.lang.*;
import java.util.*;

class XBitwise
{
    public boolean Checkbit(int iNo)
    {
        int iMask = 0X00100000; //iMask = 4;
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

class CheckbitHex
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
