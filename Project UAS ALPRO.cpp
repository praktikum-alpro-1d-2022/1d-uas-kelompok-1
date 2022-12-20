#include <iostream>
using namespace std;

struct pesan{
    int no,jumlah,sub_total,harga;
	string menu;
}pesan[25];

void ending();

int main(){
	int pilih,i,y;
	char makan,bawa,x;
    char* makanPtr; // deklarasikan variabel pointer
    makanPtr = &makan; //nilai variabel popnter sama dengan alamat variabel makan
	int total_bayar = 0;
	int j=-1, z=-1;
	bool selesai=false;
    system("cls");
	cout << "\n\n\n\t\t\t*****PROGRAM RETAURANT FASILKOM******* " << endl;
	cout << endl << "mau makan y/t? ";
	cin >> makanPtr; // input kedalam variabel pointer
	if ((makan == 'y') || (makan == 'Y')){
        system("cls");
        cout << "....Silahkan pilih menu makanan kami...." << endl << endl;
        cout <<"**DAFTAR MENU MAKANAN & MINUMAN RESTAURANT FASILKOM**"<<endl;
        cout <<"1. Bakso Biasa\t\t\t\tRp. 12000"<<endl;
        cout <<"2. Nasi Rames\t\t\t\tRp. 15000"<<endl;
        cout <<"3. Nasi goreng\t\t\t\tRp. 14000"<<endl;    
        cout <<"4. Nasi Ayam bakar\t\t\tRp. 16000"<<endl;
        cout <<"5. Nasi Ikan goreng\t\t\tRP. 12000"<<endl;
        cout <<"6. Es Teh Manis\t\t\t\tRp. 5000 "<<endl;
        cout <<"7. Es Jeruk\t\t\t\tRp. 6000 "<<endl;
        cout <<"8. Air mineral\t\t\t\tRp. 4000 "<<endl;
        cout <<"--------------------------------------------------------------"<<endl;
        cout <<"Tekan 0 jika selesai melakukan pemesanan"<<endl<<endl;
        while(selesai==false){
            cout<<"Pilih Menu : ";
            cin>>pilih;
            j++;
            z++;
            if (pilih<=8){
                if (pilih==0){
                    selesai=true;
                }
                else{
                    switch (pilih){
                        case 1  : pesan[j].menu="Bakso Biasa     "; pesan[j].harga=12000; break;
                        case 2  : pesan[j].menu="Nasi Rames      "; pesan[j].harga=15000; break;
                        case 3  : pesan[j].menu="Nasi Goreng     "; pesan[j].harga=14000; break;
                        case 4  : pesan[j].menu="Nasi Ayam bakar "; pesan[j].harga=16000; break;
                        case 5  : pesan[j].menu="Nasi Ikan Goreng"; pesan[j].harga=12000; break;
                        case 6  : pesan[j].menu="Es Teh manis    "; pesan[j].harga=5000; break;
                        case 7  : pesan[j].menu="Es jeruk        "; pesan[j].harga=6000; break;
                        case 8  : pesan[j].menu="Air mineral     "; pesan[j].harga=4000; break;
                        default : pesan[j].menu="";                 pesan[j].harga=0;
                    }
                    cout<<"Jumlah Porsi "<<pesan[j].menu<<" : ";
                    cin>>pesan[j].jumlah;
                    cout<<endl;
                }
                pesan[j].no = j;
                pesan[j].sub_total=pesan[j].jumlah*pesan[j].harga;
                total_bayar+= pesan[j].sub_total;
            }
            else{
                cout<<"Menu yang dipilih tidak sesuai"<<endl<<endl;
            }
        }
        cout<<endl;cout << "apakah anda ingin mengganti pesanan? y/t ";
        cin >> x;
        if(x=='y'){
            cout << "Masukkan no pesanan yang ingin di ganti ";
            cin >> j;
            j--;
                for(i=0; i<=j; i++){
                    if(j == pesan[i].no){;
                        pesan[j].menu=" "; pesan[j].harga=0;
                        total_bayar-= pesan[j].sub_total;
                        cout<<endl<<"***DAFTAR MENU MAKANAN & MINUMAN RESTAURANT FASILKOM***"<<endl;
                        cout<<"1. Bakso Biasa\t\t\t\tRp. 12000"<<endl;
                        cout<<"2. Nasi Rames\t\t\t\tRp. 15000"<<endl;
                        cout<<"3. Nasi goreng\t\t\t\tRp. 14000"<<endl;
                        cout<<"4. Nasi Ayam Bakar\t\t\tRp. 16000"<<endl;
                        cout<<"5. Nasi Ikan Goreng\t\t\tRp. 12000"<<endl;
                        cout<<"6. Es Teh\t\t\t\tRp. 5000"<<endl;
                        cout<<"7. Es Jeruk\t\t\t\tRp. 6000"<<endl;
                        cout<<"8. Air Mineral\t\t\t\tRp. 4000"<<endl;
                        cout<<"--------------------------------------------------------------"<<endl;
                        cout << "\nIngin mengganti dengan apa?" << endl;
                        cin >> y;
                        switch (y){
                            case 1  : pesan[j].menu="Bakso Biasa     "; pesan[j].harga=12000; break;
                            case 2  : pesan[j].menu="Nasi Rames      "; pesan[j].harga=15000; break;
                            case 3  : pesan[j].menu="Nasi Goreng     "; pesan[j].harga=14000; break;
                            case 4  : pesan[j].menu="Nasi Ayam bakar "; pesan[j].harga=16000; break;
                            case 5  : pesan[j].menu="Nasi Ikan Goreng"; pesan[j].harga=12000; break;
                            case 6  : pesan[j].menu="Es Teh          "; pesan[j].harga=5000; break;
                            case 7  : pesan[j].menu="Es Jeruk        "; pesan[j].harga=6000; break;
                            case 8  : pesan[j].menu="Air Mineral     "; pesan[j].harga=4000; break;
                            default : pesan[j].menu="";                 pesan[j].harga=0;
                        }
                        cout<<"Jumlah Porsi "<<pesan[j].menu<<" : ";
                        cin>>pesan[j].jumlah;
                        pesan[j].sub_total=pesan[j].jumlah*pesan[j].harga;
                        total_bayar+= pesan[j].sub_total;
                        cout<<endl;
                    }
                }
        }
        cout<<endl;
        ending();
        cout<<"                 INVOICE PEMBELIAN RESTAURANT FASILKOM"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        for (int a=0;a<z;a++){
            cout<<a+1<<"	"<<pesan[a].menu<<"	"<<pesan[a].harga<<"		"<<pesan[a].jumlah<<"		"<<pesan[a].sub_total<<endl;
        }

        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"Total Bayar = Rp."<<total_bayar<<endl<< endl;
        cout << "Terimakasih Telah menggunakan program kami";
	}
    else if (makan == 't'){
        cout << "Terimakasih Telah menggunakan program kami"<< endl<<endl;
	}
}

void ending(){
    char a,b;
    cout << "dine in / take away (d/t)?" << endl;
    cin >> a;
    if (a =='d'){
        cout << "Tunggu sebentar makanan akan kami hidangkan"<< endl;
    }
    else if(a =='t'){
        cout << "Tunggu sebentar makanan akan kami siapkan untuk di bawa pulang"<<endl;
    }
    else
    cout << "maaf input yang anda masukkan tidak ada di pilihan";

    cout << endl << "pembayaran via cash? \n(y/n)" << endl;
    cin >> a;
    if (a =='y'){
        cout << "Terima kasih silahkan melakukan pembayaran....."<<endl;
    }
    else if(a =='n'){
        cout << "Terima kasih silahkan melakukan pembayaran....."<<endl;
    }
    else
    cout << "maaf input yang anda masukkan tidak ada di pilihan";
}