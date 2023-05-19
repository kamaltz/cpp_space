//Import library yg dibutuhkan
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <cctype>

//Utk mempersingkat sintaks cin & cout
using namespace std;

//Deklarasi tipe data pada variabel
string nilai[101]={""};
string matakul[101]={""};
char mutu;
string pass, name, predikat, status, ps, jwb, hapus, matkul;
int tugas, uts, uas, user, num, banyak, akhir, i, n, temp, tgs, hasiltugas;
double hadir, absen, jumlah;
int ekor=101;


//Deklarasi nilai ke variabel
int nim[5] = {2206072, 2206079, 2206076, 2206090, 2206092};

//fungsi reset nilai variabel
void reset_int(int &integers){
	integers=0;
}
void reset_db(double &doubles){
	doubles=0;
}
void reset_str(string &strings){
	strings="";
}


//fungsi judul
void judul()
{
cout << "\n\n\t <=> PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA <=> \n" << endl;
cout << "\t=================================================\n"<< endl;
}


//fungsi line
void line(){
	cout <<"\n\t=================================================\n"<<endl;
}

//fungsi header
void header()
{
cout<<"============================================================================================================"<<endl;
cout<<"======  ====  ==        ==  ==========    ====  =====  ==       =====    ====  ====  ========       ========"<<endl;
cout<<"======  ===  ===  ========  =========  ==  ===   ===   ==  ====  ===  ==  ===  ===  ========  =====  ======="<<endl;
cout<<"======  ==  ====  ========  ========  ====  ==  =   =  ==  ====  ==  ====  ==  ==  =========  =============="<<endl;
cout<<"======  =  =====  ========  ========  ====  ==  == ==  ==  ====  ==  ====  ==  =  ==========       ========="<<endl;
cout<<"======     =====      ====  ========  ====  ==  =====  ==       ===  ====  ==     ==========   ===  ========"<<endl;
cout<<"======  ==  ====  ========  ========  ====  ==  =====  ==  ========  ====  ==  ==  =========  =====  ======="<<endl;
cout<<"======  ===  ===  ========  ========  ====  ==  =====  ==  ========  ====  ==  ===  ========  =====  ======="<<endl;
cout<<"======  ====  ==  ========  =========  ==  ===  =====  ==  =========  ==  ===  ====  ========  ===   ======="<<endl;
cout<<"======  ====  ==        ==        ====    ====  =====  ==  ==========    ====  ====  =========     ========="<<endl;
cout<<"============================================================================================================"<<endl;
cout<<"============================================================================================================"<<endl;
cout<<"==================     ==========================   ======      ======   ========   ========================"<<endl;
cout<<"=================  ===  =======================   =   ===   ==   ===   =   ====   =   ======================"<<endl;
cout<<"================  ============================   ===   ==  ====  ==   ===   ==   ===   ====================="<<endl;
cout<<"================  =================================   ===  ====  =======   ========   ======================"<<endl;
cout<<"================  =============        ===========   ====  ====  ======   ========   ======================="<<endl;
cout<<"================  ===============================   =====  ====  =====   ========   ========================"<<endl;
cout<<"================  ==============================   ======  ====  ====   ========   ========================="<<endl;
cout<<"=================  ===  =======================   =======   ==   ===   ========   =========================="<<endl;
cout<<"==================     =======================        ====      ===        ===        ======================"<<endl;
cout<<"============================================================================================================"<<endl;
judul();
 
}

//fungsi clr
void clr(){
 system("cls"); header();	
}

//fungsi red
void red(){
	system("color 04");
}

//fungsi green
void green(){
	system("color 0A");
}

//fungsi nim_check utk pencocokan username dengan nim terdaftar
void nim_check(){
	
	if (user == 2206090){
		 name = "Dena Kamal";
	}else if(user == 2206072){
		name = "Givari";
	}else if  (user == 2206079){
		  name = "Bimo";
	}else if (user == 2206076){
			name = "Rina";
	}else if (user == 2206092){
			 name = "Rizky Faisal";
	}else{
	}
}

//fungsi agar tdk melebihi
void tdk_lebih (int &inputan, int nilai_max, string kata2){
	int tester;
	do{	tester=0;
		red();
		clr();
		cout<<"\tInputan melebihi batas maksimal "<<kata2<<", yaitu "<<nilai_max<<". ";
		cout<<"\n\tMasukkan "<<kata2<<" yang benar!";
		cout<<"\n\t=> ";
		cin>>tester;

	}while(tester>nilai_max);
	inputan = tester;
}
		
	
	
//fungsi login
void login(){
	
	 //deklarasi variabel
 pass = "itg@garut";
 
 //Output dan input
 cout << "\tMasukkan username: ";
 cin >> user;
 system("cls"); header();
 
 //Percabangan utk mencocokan username
 if (user == nim[0] && user == nim[1] && user == nim[2] && user == nim[3] && user == nim[4]) {
    	nim_check();
	} else {
		
  //Perulangan utk antisipasi invalidnya username
        while (user != nim[0] && user != nim[1] && user != nim[2] && user != nim[3] && user != nim[4]) {
        	red();
            cout <<"\tUsername Invalid! Masukan username yang benar! "<<endl;
            cout<<"\n\t=> ";
            cin >> user; clr();
           	green();
        }
    }

 //Form password
 cout <<"\tMasukkan password: ";
 cin >> ps;
 system("cls"); header();
 
 //Perintah jika passwd salah
 if (ps == pass){bool signin = true;
 } else {
  while (ps != pass){
  	red();
   cout <<"\tPassword Invalid! Masukan password yang benar! ";
   cout<<"\n\t=>";
   cin >> ps;
   system("cls"); header();
  }
 }
green();	
}

//fungsi headername
void headername(){
	
	nim_check();
	
	cout <<"\tSelamat Datang, " << name << endl;
}

// Fungsi loading
	void loadingbar()
	{
		using namespace std;
		string str1, str2, str3;
		// 0 - black background,
		// A - Green Foreground
		system("color 0A");
	
		// Initialize char for printing
		// loading bar
		char a = 177, b = 219;
	
		printf("\n\n\n\n");
		str1="\n\n\n\n\t\t\t\t\t";
		str2="Loading...\n\n";
		str3= str1 + str2;
		cout << str3;
		printf("\t\t\t\t\t");
	
		// Print initial loading bar
		for (int i = 0; i < 26; i++)
			printf("%c", a);
	
		// Set the cursor again starting
		// point of loading bar
		printf("\r");
		printf("\t\t\t\t\t");
	
		// Print loading bar progress
		for (int i = 0; i < 26; i++) {
			printf("%c", b);
	
			// Sleep for 1 second
			Sleep(100);
		}

	}


//fungsi notif
void notif(){
	 //Notif jika login berhasil
 cout <<"\tLogin Berhasil" << endl;
}


//fungsi tambah array
void tambah_array(string arr[],int &n, string value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == "") {
            arr[i] = value;
            return;
        }
    }
	n++;
    arr[n - 1] = value;
}

//Penggunaan fungsi utk hitung nilai matkul
int nilai_matkul() {
 reset_db(absen);
 
 //Form matkul
 cout <<"\tMasukkan nama mata kuliah: ";
 cin.ignore();
 getline(cin, matkul);
 system("cls"); header();
 
 //Form absen
	  	do{
	    cout << "\tMasukkan jumlah kehadiran: ";
	    cin >> hadir;
    	if (hadir > 14)
    	red();clr();
        cout << "\tJumlah kehadiran maksimal hanya 14. Silahkan masukkan kembali." << endl;
		} while (hadir > 14);	  	
	  
green();

 system("cls"); header();
 //Form tugas
    tugas = 0;

	  	do{
	    cout << "\tMasukkan jumlah tugas: ";
	    cin >> jumlah;
    	if (jumlah > 14)
    	red();clr();
        cout << "\tJumlah tugas maksimal hanya 14. Silahkan masukkan kembali." << endl;
		} while (jumlah > 14);	  	
	
	     green();

	for (i=1;i<=jumlah;i++){
		 system("cls"); header();
		cout << "\tMasukkan nilai tugas "<<i<<" : ";
		cin>>tgs;
		if (tgs>100){tdk_lebih(tgs,100,"nilai tugas");
		}	
		green();
		clr();
 		//Kalkulasi nilai tugas
		tugas=tugas+tgs;
	}
	system("cls"); header();
 //Form uts, uas
 cout <<"\tMasukkan nilai UTS: ";
 cin >> uts;
 if (tgs>100){tdk_lebih(uts,100,"nilai UTS");
		}	
		green();
		clr();
  system("cls"); header();
 cout <<"\tMasukkan nilai UAS: ";
 cin >> uas;
 if (uas>100){tdk_lebih(uas,100,"nilai UAS");
		}	
		green();
		clr();
	system("cls"); header();
 

 if (hadir == 14){
  absen = 100;
 } else{
 	  while(hadir>0){
  
        absen = absen + 7.14;
        hadir--;}
 }
 

        

 
 //Menghitung nilai rata2 tugas
tugas = tugas / jumlah;
 
 //Penentuan kelulusan, predikat & nilai akhir

 
  akhir = absen * 1 / 10 + float(tugas * 2) / 5 + float(uts * 1) / 5 + float(uas * 6) / 20;
  	    if (absen < 75) {
		  	 predikat = "E";
			 status = "Tidak Lulus";
			 } else{
			 
	  	if (akhir >= 90 && akhir <= 100){
	   predikat = "A";
	   status = "Lulus";
	  }else if(akhir >=80 && akhir < 90){
	   predikat = "B";
	   status = "Lulus";
	  }else if (akhir >= 70 && akhir < 80){
	   predikat = "C";
	   status = "Lulus";
	  }else if (akhir >= 60 && akhir < 70){
	   predikat = "D";
	   status = "Tidak Lulus";
	  }else {
	   predikat = "E";
	   status = "Tidak Lulus";}
		}
  
 cout <<"\tAnda " << status << " pada mata kuliah " << matkul << " dengan predikat " << predikat << endl;
 cout <<"\tDengan detail nilai: " << endl;
 cout <<"\tPresentasi Kehadiran: " << absen << "% | " << "Nilai Rata-rata Tugas: " << tugas <<endl;
 cout<< "\tNilai UTS: " << uts <<" | Nilai UAS: " << uas << " dengan total nilai akhir "<< akhir << endl;
 line();

	tambah_array(nilai,ekor,predikat);
	tambah_array(matakul,ekor,matkul);
return 0;
}

//fungsi delete array
void delete_array(){
	   for (int i = 0; i < 21; i++) {
        nilai[i] = "";
        matakul[i] = "";
    }


}

// Cek apakah array sudah kosong
int cek_array(){
    bool isEmpty = true;
    for (int i = 0; i <ekor; i++) {
        if (nilai[i] != "") {
            isEmpty = false;
            break;
        }
    }

    if (isEmpty) {
        cout << "\nt\t Database berhasil dibersihkan!" << endl;
    } else {
        cout << "\nt\t Database gagal berhasil dibersihkan!" << endl;
    }
    return 0;
}
//fungsi daftar nilai
int daftar_nilai() {
    cout << "\tDaftar Nilai " << std::endl;
  for (int i = 0; i < 21; i++) {
    if (!matakul[i].empty()) {
      cout <<"\n\t"<<i+1<<". "<< matakul[i] << " : "<<nilai[i]<<endl;
    }
  }

  return 0;
}


//fungsi konfirmasi
int konfirmasi(string hapus){
	red();
	cout <<"\n\t"<<"Anda yakin akan menghapus "<<hapus<<" ? [y/t]"<<endl;
	cout<<"\n\t=> ";
	cin >>jwb;
	return 0;
}


//Fungsi menu
int menu(){

	green();
	system("cls");
    header();
    headername();
    line();
    double choice;
    string matkulname;
    int remove;
    int countnum;
    vector<string> nilai;
    vector<string> matakul;

    do{
        cout <<"\n\t  [1] Tambah Nilai Mata Kuliah " << endl;
        cout <<"\t  [2] Tampilkan Semua Nilai " << endl;
        cout <<"\t  [3] Hapus Semua Database Nilai " << endl;     
        cout <<"\t  [4] Refresh " << endl; 
        cout <<"\t  [0] Exit " << endl;
        line();
        cout << "\t=> ";
        cin >> choice;
        if(choice == 0 ) {
            printf("\t Terminating the program...");
        }
        else{clr();}
            if(choice == 1){
			nilai_matkul();
            }else if(choice == 3){
            	nilai_matkul();
				konfirmasi("semua database");
				if(jwb=="y"){clr();
					;
	                green();
	                delete_array();
	                cek_array();
				ekor=0;
            	}else{green();clr();
				}
            }else if(choice == 2){
			
                daftar_nilai();

            }else if(choice== 4) {
				system("cls");header();							
					
				}
				

            	
			
        }while(choice != 0);

    return 0;
}


//fungsi utama

int main(){
	header();
	bool signin = false;
	login();
	if (signin = true){
	loadingbar();
	clr();
	notif();
	headername();
	cout <<"\tTekan <Enter> untuk melanjutkan..";
	getch();
	system("cls");
	menu();
	}while (signin = false){login();
	}

	}

