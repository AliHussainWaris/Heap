#include <iostream>
using namespace std;
class Heap{
    private:
    int sizes = 7;
    int arr[7] = { 7 , 5 , 6 , 4 , 1 , 2 , 3 };
    public:
    void sort(){
        int sw = 0;
        for(int i =0; i<sizes; i++){
            for(int j=0; j<sizes;j++){
                if(arr[(2*j)+1]<sizes && arr[j]>arr[(2*j)+1]){
                    sw = arr[j];
                    arr[j] = arr[(2*j)+1];
                    arr[(2*j)+1] = sw;
                }
                if(arr[(2*j)+2]<sizes && arr[j]>arr[(2*j)+2]){
                    sw = arr[j];
                    arr[j] = arr[(2*j)+2];
                    arr[(2*j)+2] = sw;
                }
            }
        }
    }
    void display(){
        for(int i=0; i<sizes; i++){
            cout<<arr[i]<<" , ";
        }
        cout<<endl;
    }
};
int main(){
    Heap obj;
    obj.display();
    obj.sort();
    cout<<" - - - SORT - - - "<<endl;
    obj.display();
    return 0;
}