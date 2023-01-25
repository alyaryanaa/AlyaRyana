#include <iostream>
using namespace std;
	
int sequentialsearch(string barang[], int jumlah_elemen, string key){
	bool status=false;
	for (int i=0; i<jumlah_elemen; i++){
	if(key==barang[i]){
		status=true;
	return i;
	break;
	}
}
	if (status==false)
		return -1;
}

int main (){
	int pilihmenu;
	char ulang;
	string barangygdicari;
    string daftar_barang[] = {"Album", "LightStick", "Photocard", "SeasonGreating", "CardHolder"}; 
	int daftar_harga[] = {250000, 600000, 200000, 300000, 200000};
    int  i, jenis, total=0;
    int kodebarang[5];
	int jumlahbarang[10]; 
    int harga[10000];    
    int kembali, bayar;
    bool lunas=false;
	
do{
	system("color D");
cout << "         TOKO NYAI SOOMAN     " << endl;
	cout << "=====================================" << endl;
	cout << "Pilihan Menu :" << endl;
	cout << "1. Lihat Pricelist" << endl;
	cout << "2. Cari Harga Barang" << endl;
	cout << "3. Mulai Order" << endl;
	cout << "4. Bayar" << endl;
	cout << "5. Cetak Receipt" << endl;
	
	cout << "Inputkan Nama Barang : " ;
	cin >> pilihmenu;
	cout << endl;
	
switch(pilihmenu){
	case 1:
		system("color D");
		cout << "=====    TOKO NYAI SOOMAN   =====" << endl;
		cout << "=================================" << endl;
		cout << "1. Album          : Rp. 250.000" << endl;
		cout << "2. Lightstick     : Rp. 600.000" << endl;
		cout << "3. Photocard      : Rp. 200.000" << endl;
		cout << "4. SeasomGreating : Rp. 300.000" << endl;
		cout << "5. CardHolder     : Rp. 200.000" << endl;
		cout << endl;		
	break ;
			
	case 2:
	{
		int jumlah_elemen = sizeof(daftar_barang)/sizeof(daftar_barang[0]);
		string key;
	
		cout << "Masukan Barang Yang Ingin Dicari (gunakan huruf kapital pada awal huruf) : ";
		cin >> key;
	
		int indeksbarang = sequentialsearch(daftar_barang, jumlah_elemen, key);
		if (indeksbarang==-1){
		cout << "Harga barang tidak tersedia" << endl;
		}
		else{
		cout << "Harga Barang Yang Dicari Adalah : " << daftar_harga[indeksbarang] << endl;
		}
	break;
	}
			
	case 3:	
	{
		cout << "=====    TOKO NYAI SOOMAN   =====" << endl;
		cout << "=================================" << endl;
		cout << "1. Album          : Rp. 250.000" << endl;
		cout << "2. Lightstick     : Rp. 600.000" << endl;
		cout << "3. Photocard      : Rp. 200.000" << endl;
		cout << "4. SeasomGreating : Rp. 300.000" << endl;
		cout << "5. CardHolder     : Rp. 200.000" << endl;
	
			
		cout << "Berapa jenis barang yang ingin kamu beli : " ; 
		cin >> jenis;
		cout << endl;
	
		if (jenis<1){
		cout << endl;
		cout << "Jumlah Barang Tidak Boleh 0 " << endl;
		}
		else {
		cout << "> Input " << jenis << " Jenis Barang : " << endl;
		
		for (i=0; i<jenis; i++){ 
		cout << "- Input Kode Barang Ke-"<< i+1 << " : "; 
		cin >> kodebarang[i];
		cout << "Masukkan Jumlah Barang ke-"<< i+1 << " (max 10) : "; 
		cin >> jumlahbarang[i];
		cout << endl;
				
		harga[i]=jumlahbarang[i]*daftar_harga[kodebarang[i]-1];
		cout << "Total Harga Barang Ke-" << i+1 << " : " << harga[i] << endl;
		cout << endl;
				
		total=total+harga[i];
		}
			
		cout << "Total harga yang harus dibayar : " << total << endl; 
		}
	break;
	}
		
	case 4:		
		if(jenis<1){
		cout << "Order Barang Terlebih Dahulu" << endl;
		}
		else {	
		cout << "Total Yang Harus Dibayar : Rp " << total << endl;
   		cout << "Masukan Jumlah Pembayaran : Rp ";
		cin >> bayar;
		kembali = bayar - total;
	
		if(bayar<total){
		cout << "Uang Anda Tidak Cukup" << endl;
		}	
		else{
		cout << "Kembalian Anda = Rp" << kembali << endl;
		lunas=true;
		}	
		}
	break;
			
	case 5:
		if (lunas!=true){
		cout << "Harap Lakukan Pembayaran Terlebih Dahulu" << endl;
		}
		
		else {
		cout << "=============== INVOICE ===============" << endl;
		cout << "No  |     Nama Barang      | Harga Barang/pc |  Jumlah  | Total "	<< endl;	
					
		for (i=0; i<jenis; i++){ 
		cout << i+1 << "   |" << daftar_barang[kodebarang[i]-1] << "                | Rp. " 
		<< daftar_harga[kodebarang[i]-1]<< "             |" << jumlahbarang[i]<< "       |" << harga [i] << endl;
		}
			
		cout << endl;
		cout << "Total harga yang harus dibayar : " << total << endl;
		cout << "Uang Pembayaran : " << bayar << endl;
		cout << "Kembalian : " << kembali << endl;
		cout << endl;
		cout << "TERIMA KASIH TELAH BERBELANJA DI TOKO NYAI SOOMAN  " << endl;
		}		
	break;
		
default:
		cout << "Masukkan anda salah" << endl;
		}
			
	cout << "Ingin memilih menu lain (y/t) ? ";
	cin >> ulang; 
	}
		
	while (ulang!='t');
	
		cout << endl;
		cout << "Terima kasih" << endl;
		
	return 0;
}

