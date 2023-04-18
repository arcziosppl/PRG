#include "iostream"

using namespace std;

class Array{
private:
    int n,m=0;

public:
    void get_size(){
        cout<<"Podaj ilosc wierszy: ";
        cin>>n;
        cout<<"Podaj ilosc kolumn: ";
        cin>>m;
        while(n && m < 0){
            n,m=0;
            cout<<"Liczby musza byc dodatnie \n";
            cout<<"Podaj ilosc wierszy: ";
            cin>>n;
            cout<<"Podaj ilosc kolumn: ";
            cin>>m;
        }
        cout<<"\n";
    }

    void create_print_array(){
        int arr[n][m];

        for(int i=0; i<n; i++) {
            for (int j = 0; j < n; j++) {
                int input;
                cout<<"Podaj wartosc dla "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
                cin >> input;
                arr[i][j] = input;
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) {
                cout<<arr[j][i];
            }
            cout<<"\n";
        }
    }
};

Array newArray;

int main(){

    newArray.get_size();
    newArray.create_print_array();
    return 0;
}
