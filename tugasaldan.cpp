#include <iostream>
using namespace std;

int sequentialsearch(string nb[], int jumlahelemen, string key){
	bool status=false;
	for (int a=0; a<jumlahelemen; a++){
		if (key==nb[a]){
			status=true;
			return a;
			break;
		}
	}
	if (status==false){
	return -1;
	}
}

int main(){
	int menu;
	char pilihan, ulang; // saya tambahin var ulang
	string daftarbarang[]={"T-Shirt", "Celana Panjang", "Rok", "Crewneck", "Hoodie"};
	int daftarharga[]={50000, 75000, 75000, 100000, 125000};
	int jumlahelemen=sizeof(daftarbarang)/sizeof(daftarbarang[0]);
	string key;
	
do{
	
	cout<<"Toko Pakaian Gokil"<<endl;
	cout<<"========================="<<endl;
	cout<<"1. Pricelist"<<endl;
	cout<<"2. Cari Harga Barang"<<endl;
	cout<<"3. Order"<<endl;
	cout<<"4. Bayar"<<endl;
	cout<<"5. Cetak Receipt"<<endl;
	cout<<"Pilih Menu: ";
	cin>>menu;
	
	switch(menu){
		case 1: {
			cout<<"==========Daftar Harga Barang=========="<<endl;
			cout<<"1. T-Shirt: Rp. 50.000"<<endl;
			cout<<"2. Celana Panjang: Rp. 75.000"<<endl;
			cout<<"3. Rok: Rp. 75.000"<<endl;
			cout<<"4. Crewneck: Rp. 100.000"<<endl;
			cout<<"5. Hoodie: Rp. 125.000"<<endl;
		break;	
        }
		case 2:
        {
			cout<<"Masukan barang yang ingin dicari: ";
			cin>>key;
			
			int indeksbarang=sequentialsearch(daftarbarang, jumlahelemen, key);
			if (indeksbarang==-1){
			cout<<"Barang yang anda cari tidak tersedia"<<endl;	
			}
			else{
			cout<<"Harga barang yang dicari adalah: "<<daftarharga[indeksbarang]<<endl;	
			}
		break;
        }
		case 3:
        {
			cout<<"A"<<endl;
        
		break;
        }
		case 4:
        {
			cout<<"A"<<endl;
		break;
        }
		case 5:
        {
			cout<<"A"<<endl;
		break;
        }
		default:
			cout<<"Menu Tidak Tersedia"<<endl;
	}
	
	cout<<"Apakah anda ingin memilih menu lain (Y/N): ";
	cin>>pilihan;
	cout<<endl;
}
while(ulang=='Y'); //ini whilenya tadi kenapa ga ada? sy tambahin

return 0;
}
