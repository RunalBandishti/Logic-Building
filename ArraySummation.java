import java.lang.*;
import java.util.*;

class ArrayX{
    private int Arr[];

    public ArrayX(int iNo){
        Arr = new int[iNo];
    }

    public void Accept(){
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++){
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display() {
        System.out.println("Array elements are: ");

        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            System.out.println(Arr[iCnt]);
        }
    }
    
    public int Summation() {
        int iSum = 0;

        for (int iCnt = 0; iCnt < Arr.length; iCnt++) {
            iSum += Arr[iCnt];
        }
        return iSum;
    }
}

class ArraySummation{
    public static void main(String args[]){
        Scanner sobj = new Scanner(System.in);
        int iLength = 0,iRet=0;

        System.out.println("Enter the value for constructor:");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();

        iRet = obj.Summation();
        System.out.println("Addition is:"+iRet);

        obj = null;
    }
}