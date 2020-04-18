#include <iostream>
#include<windows.h>

using namespace std;

void garis(){
cout<<"==================================="<<endl;
}

int main()
{
    int a,b,Arr[100],tmp;
    int menu,input,mins;
    char kembali;

    awal:
    garis();
    cout << "1.       Bubble Sort         " << endl;
    cout << "2.       Selection Sort      " << endl;
    cout << "3.       Insertion Sort      " << endl;
    garis();
    cout<<"pilih menu anda :"<<endl;
    cin>>menu;

    switch (menu){

case 1://Bubble Sort
    system ("cls");
    garis();
    cout<<"pengurutan secara Bubble Sort"<<endl;
    cout<<"Inputkan Banyak Data : ";
    cin>>input;
    garis();
    for(a=1; a<=input; a++)
    {
        cout<<"Inputkan Data ke-"<<a<<" = ";
        cin>>Arr[a];

    }

    for(a=1; a<=input; a++)
{
       for(b=a; b<=input; b++)
       {
              if(Arr[a] > Arr[b])
              {
                     tmp = Arr[b];
                     Arr[b] = Arr[a];
                     Arr[a] = tmp;
              }
       }
}
    garis();
    cout << "Hasil Pengurutan Data Secara Ascending"<<endl;
    cout << endl;
    for(a=1; a<=input; a++)
    {
        cout<<"     nilai "<<a<<" = "<<Arr[a]<<endl;
    }


    garis();
    cout<<"kembali kemenu utama (y / t):"<<endl;
    cin>>kembali;

    if (kembali == 'y')
        {
            system ("cls");
            goto awal;
        }
        else if (kembali == 't')
        {
            system ("cls");
            garis();
            cout << "       terimah kasih uwuuuu"<<endl;
            garis();

        }
    break;
case 2://selection sort
    system ("cls");
    garis();
    cout<<"pengurutan secara Selection Sort"<<endl;
    cout<<"Inputkan Banyak Data : ";
    cin>>input;
    garis();
	for (a = 0; a < input; a++){
		cout << "Data ke - " << a+1 << " : ";
		cin >> Arr[a];
	}

	for(a = 0; a <input; a++){
		mins = a;
		for(b=a+1; b<input; b++){
			if(Arr[mins]>Arr[b])
				mins=b;
		}
		if(Arr[a] != Arr[mins]){
			tmp = Arr[a];
			Arr[a] = Arr[mins];
			Arr[mins] = tmp;
		}
	}

	garis();
    cout << "Hasil Pengurutan Data Secara Ascending"<<endl;
    cout << endl;
	for(a = 0; a <input; a++){
		cout<<"     nilai "<<a<<" = "<<Arr[a]<<endl;
	}

	garis();
    cout<<"kembali kemenu utama (y / t):"<<endl;
    cin>>kembali;

    if (kembali == 'y')
        {
            system ("cls");
            goto awal;
        }
        else if (kembali == 't')
        {
            system ("cls");
            garis();
            cout << "       terimah kasih uwuuuu"<<endl;
            garis();

        }
    break;
case 3://Insertion Sort
    system ("cls");
    garis();
    cout<<"pengurutan secara Insertion Sort"<<endl;
    cout<<"Inputkan Banyak Data : ";
    cin>>input;
    garis();
	for (a = 0; a < input; a++){
		cout << "Data ke - " << a+1 << " : ";
		cin >> Arr[a];
	}
    for(a=1; a<=input-1; a++)
    {
        tmp=Arr[a];
        b=a-1;

        while((tmp<Arr[b])&&(b>=0))
        {
            Arr[b+1]=Arr[b];
            b=b-1;
        }

        Arr[b+1]=tmp;
    }

    cout<<"\nAngka setalah inserting sort\n";
    for(a=0; a<input;a++)
    {
        cout<<"     nilai "<<a<<" = "<<Arr[a]<<endl;
    }


    garis();
    cout<<"kembali kemenu utama (y / t):"<<endl;
    cin>>kembali;

    if (kembali == 'y')
        {
            system ("cls");
            goto awal;
        }
        else if (kembali == 't')
        {
            system ("cls");
            garis();
            cout << "       terimah kasih uwuuuu"<<endl;
            garis();

        }
        break;
default:
    system ("cls");
    garis();
    cout<<"        salah input coyy"<<endl;
    garis();
    }
    return 0;
}
