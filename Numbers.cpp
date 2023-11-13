#include <iostream>
using namespace std;
int main(){
    int number_f ;
    cin>>number_f;
    int number_s;
    int odds = 0;
    int evens = 0;
    for(int i=0; i < number_f;i++){
        int checker = i %2;
        if(checker ==0){
            odds++;
        }else{
            evens++;
        }
    }
    cout<<odds<<" "<<evens;
}