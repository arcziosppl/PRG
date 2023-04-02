
#include <bits/stdc++.h>
using namespace std;

class zad{

public:
    void max_elem(){
        int  elements = 0;
        cout<<"Podaj ilosc elementow \n";
        cin>>elements;
        int arr[elements];

        for(int i =0; i<elements; i++){
            int number;
            cout<<"Podaj "<<(i+1)<<" element: ";
            cin>>number;
            arr[i] = number;
        }


        int n = sizeof(arr) / sizeof(arr[0]);

        cout << "Najwiekszy element z podaneo zbioru to: " << *max_element(arr, arr + n);
    }

    void min_elem(){
        int  elements = 0;
        cout<<"Podaj ilosc elementow \n";
        cin>>elements;
        int arr[elements];

        for(int i =0; i<elements; i++){
            int number;
            cout<<"Podaj "<<(i+1)<<" element: ";
            cin>>number;
            arr[i] = number;
        }


        int n = sizeof(arr) / sizeof(arr[0]);

        cout << "Najwiekszy element z podaneo zbioru to: " << *min_element(arr, arr + n);
    }

    void max_elem_count(){
        int  elements = 0;
        cout<<"Podaj ilosc elementow \n";
        cin>>elements;
        int arr[elements];

        for(int i =0; i<elements; i++){
            int number;
            cout<<"Podaj "<<(i+1)<<" element: ";
            cin>>number;
            arr[i] = number;
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        int max_elem = *max_element(arr, arr+n);
        int count=0;

        for(int i=0; i<elements; i++){
            if(arr[i] == max_elem){
                count++;
            }
        }
        cout<<count;
    }

    void min_elem_count(){
        int  elements = 0;
        cout<<"Podaj ilosc elementow \n";
        cin>>elements;
        int arr[elements];

        for(int i =0; i<elements; i++){
            int number;
            cout<<"Podaj "<<(i+1)<<" element: ";
            cin>>number;
            arr[i] = number;
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        int min_elem = *min_element(arr, arr+n);
        int count=0;

        for(int i=0; i<elements; i++){
            if(arr[i] == min_elem){
                count++;
            }
        }
        cout<<count;
    }

    void fib(){
        int  elements = 0;
        int f1=0,f2=1,f3=0;
        cout<<"Podaj ilosc wyrazow ciagu: ";
        cin>>elements;
        cout<<f1<<" "<<f2;

        for(int i=2; i<elements; i++){
            f3 = f1+f2;
            cout<<" "<<f3;
            f1=f2;
            f2=f3;
        }



    }


};

zad newzad;

int main()
{
    int n;
    cout<<"Zadanka: \n";
    cout<<"1. Najwiekszy element \n";
    cout<<"2. Najmniejszy element \n";
    cout<<"3. Ilosc wystapien najwiekszej liczby \n";
    cout<<"4. Ilosc wystapien najmniejszej liczby \n";
    cout<<"5. Ciag Fibonaciego \n";
    cout<<"11. Wyjdz \n";
    cout<<"Wybor: ";
    cin>>n;

    switch (n) {
        case 1:
            newzad.max_elem();
            break;
        case 2:
            newzad.min_elem();
            break;
        case 3:
            newzad.max_elem_count();
            break;
        case 4:
            newzad.min_elem_count();
            break;
        case 5:
            newzad.fib();
            break;
        case 11:
            EXIT_SUCCESS;
            break;
    }
	return 0;
}
