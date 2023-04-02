
using namespace std;
#include "iostream"

class zad{

private:
   static int horner(int wsp[],int st, int x)
    {
        int result = wsp[0];

        for(int i=1;i<=st;i++) {
            result = result * x + wsp[i];
        }

        return result;
    }

public:
    static void max_elem(){
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

    static void min_elem(){
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

    static void max_elem_count(){
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

    static void min_elem_count(){
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

    static void fib(){
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

    static void horn_method(){
        int *w,s,a;
        cout<<"Podaj stopien wielomianu: ";
        cin>>s;

        w = new int[s+1];
        for(int i=0;i<=s;i++)
        {
            cout<<"Podaj współczynnik stojący przy potędze "<<s-i<<": ";
            cin>>w[i];
        }

        cout<<"Podaj argument: ";
        cin>>a;

        cout<<"W( "<<a<<" ) = "<<horner(w,s,a)<<endl;
    }

    static void array1(){
       int arr[5][3] = {{1,2,3}, {2,3,4},{2,3,5},{2,4,5},{2,5,6}};
       int row=5,col=3,result=0;

        for (int i = 0; i < row; i++) {
            for(int j = 0; j < col; ++j) {
                result+=arr[i][j];
            }
        }

        cout<<"Suma wszystkich elementow tablicy: "<<result;
   }

    static void array2(){
        int arr[5][4] = {{1,2,3,5}, {2,3,4,5},{2,3,5,3},{2,4,5,7},{2,5,6,8}};
        int row=5,col=4,result=0;

        for (int i = 0; i < row; i++) {
            for(int j = 0; j < col; ++j) {
                if(arr[i][j]%2 == 0) {
                    result += arr[i][j];
                }
            }
        }

        cout<<"Suma wszystkich elementow tablicy: "<<result;
    }

    static  void loop1(){
        int result=0,number,last=1,i=0;
       while(true){
           cout<<"Podaj liczbe: ";
           cin>>number;
           result = last * number;
           last = number;
           i++;
           if(result > 100) {
               break;
           }
       }
        cout<<"Iloczyn to: "<<result<<" a ilosc iteracji to: "<<i;

   }

    static  void loop2(){
        int result=0,number,last=0,i=0;
        while(true){
            cout<<"Podaj liczbe: ";
            cin>>number;
            if(number%2 == 0) {
                result = last + number;
                last = number;
                i++;
            } else{
                cout<<"Liczba nie jest parzysta \n";
            }
            if(result > 50 || i >= 10) {
                break;
            }
        }
        cout<<"Suma to: "<<result<<" a ilosc iteracji to: "<<i;

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
    cout<<"6. Schemat Hornera \n";
    cout<<"7. Suma elemnetow tablicy dwuwymiarowej \n";
    cout<<"8. Suma parzystych elemnetow tablicy dwuwymiarowej \n";
    cout<<"9. Mnozenie liczb \n";
    cout<<"10. Dodawanie liczb \n";
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
        case 6:
            newzad.horn_method();
            break;
        case 7:
            newzad.array1();
            break;
        case 8:
            newzad.array2();
            break;
        case 9:
            newzad.loop1();
            break;
        case 10:
            newzad.loop2();
            break;
        case 11:
            break;
    }

	return 0;
}
