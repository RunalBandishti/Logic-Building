#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue){ //constructor
            this->iSize = iValue;
            Arr = new int[iSize]; // resource allocated
        }

        ~ArrayX(){ // destructor
            delete[] Arr; // resource deallocated
        }

        void Accept(){
            int iCnt = 0; 
            cout<<"Enter the elements"<<endl;
            for(int i = 0; i < iSize;i++){
                cin>>Arr[i];
            }
        }

        void Display(){
            cout<<"Elements of array are: "<<endl;
            for(int i = 0; i < iSize;i++){
                cout<<Arr[i]<<endl;
            }
        }
        int DisplaySum(){
            int iSum =0;
        
            for(int j=0; j<iSize; j++){
                iSum = iSum + Arr[j];
            }
            return iSum;
        }

};

int main(){
    int iRet = 0;

    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();

    iRet = obj1.DisplaySum();

    cout<<"Summation is:"<<iRet<<endl;

    return 0;
}