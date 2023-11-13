#include <iostream>
using namespace std;
int first_three(int number){
    int first_three = number / 1000;
    int second_s = first_three / 10;
    int first = first_three / 100;
    int second = second_s %10;
    int third = first_three %10;
    int sum = first + second + third;
    return sum;
}
int second_three(int  number){
    int first_three = number % 1000;
    int second_s = first_three / 10;
    int first = first_three / 100;
    int second = second_s %10;
    int third = first_three %10;
    int sum = first + second + third;
    return sum;
}
int main() {
    int ticket_number ;
    cin>>ticket_number;
    int sum_first = first_three(ticket_number);
    int sum_second = second_three(ticket_number);
    if(sum_first == sum_second){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}