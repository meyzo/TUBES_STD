/*#include "menunya.h"
//#include "relasi.h"
#include "unistd.h"
#include "windows.h"
#include <iostream>
using namespace std;



void tampilanAwal(ListP &L, ListS &L2, Listrel &L3){
    int opsi;
    string sudah;
    string pilihan1;
    system("CLS");
    cout<<"==========================="<<endl;
    cout<<"Aplikasi Data Kerja Pegawai"<<endl;
    cout<<"==========================="<<endl;
    cout<<"1.Menambahkan karyawan pada perusahaan"<<endl;
    cout<<"2.Menjadwalkan karyawan pada shift tertentu"<<endl;
    cout<<"3.Menampilkan seluruh karyawan pada perusahaan"<<endl;
    cout<<"4.Menampilkan nama karyawan dengan jadwal shift paling banyak & paling sedikit"<<endl;
    cout<<"5.Menghapus data karyawan pada perusahaan"<<endl;
    cout<<"6.Meliburkan jadwal shift tertentu"<<endl;
    cout<<"7.Menampilkan karyawan yang mengambil jadwal tertentu"<<endl;
    cout<<"8.Exit Program"<<endl;
    cout<<"Masukkan Opsi: "<<endl;
    cin>>opsi;

    switch (opsi) {
        case 1:{
            system("CLS");
            string asdasd;
            cout<<"Anda akan menambahkan data karyawan pada perusahaan"<<endl;
            cout<<"Inputkan YES untuk melanjutkan, NO untuk kembali ke main menu"<<endl;
            cin>>pilihan1;
            if ((pilihan1=="YES")){
                cin.ignore();
                menuAddPeg(L);
                cin.ignore();
                cout<<"prosedur telah selesai"<<endl;
                cout<<"Input YES"<<endl;
                cin>>asdasd;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
            else {
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
   }
    break;





        case 2:{
            string pilihan2;
            system("CLS");
            if (firstP(L)!=NULL){
                cout<<"Anda akan menjadwalkan karyawan pada shift tertentu"<<endl;
                cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
                cin>>pilihan2;
                if ((pilihan2=="YES") || (pilihan2=="yes")){
                    cin.ignore();
                    menuAddRel(L,L2,L3);
                    cin.ignore();
                    cout<<"Prosedur telah selesai"<<endl;
                    cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                    Sleep(2000);
                    system("CLS");
                    tampilanAwal(L,L2,L3);
                    }
                else {
                    cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                    Sleep(2000);
                    system("CLS");
                    tampilanAwal(L,L2,L3);
                }
            }
        else {
            cout<<"belum ada pegawai di perusahaan, harap menuju prosedur 1 terlebih dahulu untuk mendaftarkan karyawan"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);
        }
    }
        break;


        case 3: {
            string pilihan3;
            system("CLS");
            if (firstP(L)!=NULL){
                cout<<"berikut adalah daftar seluruh pegawai yang bekerja di PT. Informatika"<<endl;
                printInfoPeg(L);
                cout<<"Prosedur telah selesai"<<endl;
                cout<<"Input YES"<<endl;
                cin>>pilihan3;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
             }
        else {
                cout<<"belum ada pegawai di perusahaan, harap menuju prosedur 1 terlebih dahulu untuk mendaftarkan karyawan"<<endl;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(3000);
                tampilanAwal(L,L2,L3);

        }
    }
         break;



        case 4 :{
             if (firstP(L)!=NULL){
                system("CLS");
                findMax(L);
                findMin(L);
                cout<<"Prosedur telah selesai"<<endl;
                string a;
                cout<<"Input YES"<<endl;
                cin>>a;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }

            else {
               cout<<"belum ada pegawai di perusahaan, harap menuju prosedur 1 terlebih dahulu untuk mendaftarkan karyawan"<<endl;
               cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
               Sleep(3000);
               tampilanAwal(L,L2,L3);
            }
            break;
    }


        case 5:{
            string pilihan5;
            if (firstP(L)!=NULL){
                system("CLS");
                string asdasd;
                cout<<"Anda akan menghapus data karyawan pada perusahaan"<<endl;
                cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
                cin>>pilihan5;
                if ((pilihan5=="YES") || (pilihan5=="yes")){
                    cin.ignore();
                    deletePeg(L,L3);
                    cin.ignore();
                    cout<<"prosedur telah selesai"<<endl;
                    cout<<"Setelah dihapus berikut adalah nama pegawai yang masih bekerja di PT. Informatika"<<endl;
                    showPeg(L,L3);
                    cout<<"Input YES"<<endl;
                    cin>>asdasd;
                    cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                    Sleep(2000);
                    system("CLS");
                    tampilanAwal(L,L2,L3);
               }

              else {
                    cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                    Sleep(2000);
                    system("CLS");
                    tampilanAwal(L,L2,L3);
               }
            }

         else{
                cout<<"belum ada pegawai di perusahaan, harap menuju prosedur 1 terlebih dahulu untuk mendaftarkan karyawan"<<endl;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(3000);
                tampilanAwal(L,L2,L3);
        }
    }
    break;


    case 6:{
        string pilihan6;
        system("CLS");
        if (firstP(L)!=NULL){
            cout<<"Anda akan membuat kosong jadwal pada shift yang ditentukan"<<endl;
            cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
            cin>>pilihan6;
            if ((pilihan6=="YES") || (pilihan6=="yes")){
                cin.ignore();
                deleteShi(L2,L3);
                cin.ignore();
                cout<<"Prosedur telah selesai"<<endl;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
            else {
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(2000);
            system("CLS");
            tampilanAwal(L,L2,L3);
            }
        }
        else {
            cout<<"belum ada pegawai di perusahaan, harap menuju prosedur 1 terlebih dahulu untuk mendaftarkan karyawan"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);
        }
    }
        break;

        case 7:{
        string pilihan7;
        system("CLS");
         if (firstP(L)!=NULL){
            cout<<"Anda akan menampilkan karyawan pada perusahaan"<<endl;
            cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
            cin>>pilihan7;
            if ((pilihan7=="YES") || (pilihan7=="yes")){
                cin.ignore();
                showDay(L3);
                cin.ignore();
                cout<<"Prosedur telah selesai"<<endl;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                cout<<"press enter"<<endl;
                cin.ignore();
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
            else {
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
                }
        }
        else {
            cout<<"belum ada pegawai di perusahaan, harap menuju prosedur 1 terlebih dahulu untuk mendaftarkan karyawan"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);
            }
        }
        break;


    }
}



*/












