#include <iostream>
#include <string.h>
#include <ctype.h>
#include <cmath>
using namespace std;

void dafharga()
{
	int shd,r,req[11],qua[11],me,za,ro,hu ;
	string ron,sun[11],harga[11] = {"Casing       = Rp. 500000","Keyboard     = Rp. 200000","Mouse        = Rp. 200000","CD ROM       = Rp. 250000","Monitor      = Rp. 1000000","Power Supply = Rp. 500000","CPU          = Rp. 1500000","Hard Drive   = Rp. 800000","RAM          = Rp. 800000","VGA         = Rp. 2000000","Sound Card  = Rp. 200000"};
	cout << endl;
	cout << "=============================================" <<endl;
	cout << "==   Daftar Harga Bagian-bagian Komputer   ==" <<endl;
	cout << "=============================================" <<endl;
	for(r=0;r<11;r++)
    {
        req[r]=r;
    }
    for(r=0;r<11;r++)
    {
        qua[r]=harga[r].length();
    }
    for(r=0;r<11;r++)
    {
        me=qua[r];
        sun[r]=harga[r];
    }
    for(za=1;za<11;za++)
    {
        ron=sun[za];
        ro=req[za];
        hu=za-1;
        while(hu >= 0 && ron < sun[hu])
        {
            sun[hu+1]=sun[hu];
            req[hu+1]=req[hu];
            hu=hu-1;
        }
        sun[hu+1]=ron;
        req[hu+1]=ro;
    }
    for(r=0;r<11;r++)
    {
        cout<<"   "<<r+1<<". "<<harga[req[r]]<<endl;
    }
}

void pembl()
{
	char nama[10],hp[15],tgl[12];
	int psn,ray;
	int hh;
	int tpn;
	tpn=0;
	cout<<"Masukkan Nama Pelanggan    = " ;cin>>nama;
	cout<<"Masukkan No.HP Pelanggan   = " ;cin>>hp;
	cout<<"Masukkan Tanggal Pembelian = " ;cin>>tgl;
	cout<<"================================"<<endl;
	cout<<endl;
	do
	{
	cout<<"Masukkan Pesanan = "; cin>>psn;
		switch(psn)
		{
			case 1:
			cout<<"Casing = 500000"<<endl;
			hh=500000;break;
			
			case 2:
			cout<<"Keyboard = 200000"<<endl;
			hh=200000;break;
			
			case 3:
			cout<<"Mouse = 200000"<<endl;
			hh=200000;break;
			
			case 4:
			cout<<"CD ROM = 250000"<<endl;
			hh=250000;break;
			
			case 5:
			cout<<"Monitor = 1000000"<<endl;
			hh=1000000;break;
			
			case 6:
			cout<<"Power Supply = 500000"<<endl;
			hh=500000;break;
			
			case 7:
			cout<<"CPU = 1500000"<<endl;
			hh=1500000;break;
			
			case 8:
			cout<<"Hard Drive = 800000"<<endl;
			hh=800000;break;
			
			case 9:
			cout<<"RAM = 800000"<<endl;
			hh=800000;break;
			
			case 10:
			cout<<"VGA = 2000000"<<endl;
			hh=2000000;break;
			
			case 11:
			cout<<"Sound Card = 200000"<<endl;
			hh=200000;break;
			}
			if (psn > 12)
			{
				cout << "Pilihan Tidak Valid"<< endl;
			}
			else
			tpn = tpn+hh;
			}
			while(psn != 12);
			cout << endl;
			cout << "============================================================"<<endl;
			cout << "==================    STRUK PEMBAYARAN    =================="<<endl;
			cout << "============================================================"<<endl;
			cout << endl;
			cout << "Nama Pelanggan    = " << nama << endl;
			cout << "No.HP Pelanggan   = " << hp << endl;
			cout << "Tanggal Pembelian = " << tgl <<endl;
			cout << "Pesanan Anda"<<endl;
			cout << "Total Bayar       = " << tpn <<endl;
			cout << "============================================================"<<endl;
			cout<< endl;
}

int main()
{
	int menu;
	cout<<"=========================================="<<endl;
	cout<<"==        TOKO KOMPUTER SEJAHTERA       =="<<endl;
	cout<<"==   Jl.Kelapa Molek VI,Kelapa Gading   =="<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	cout<<"Silahkan Pilih Menu Yang Tersedia"<<endl;
	cout<<"1.Daftar Harga"<<endl;
	cout<<"2.Menu Pembelian"<<endl;
	cout<<"3.Keluar"<<endl;
	do
	{
	cout<<endl;
	cout<<"Masukkan Pilihan = ";cin>>menu;
		switch(menu)
		{
			case 1: dafharga(); break;
			case 2: pembl(); break;
		}
		if (menu > 3)
		cout<<"Pilihan Tidak Valid"<<endl;
	}
	while (menu != 3);
	
	cin.get();
}
