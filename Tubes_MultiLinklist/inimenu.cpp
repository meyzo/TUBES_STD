#include "inimenu.h"
#include "relation.h"
#include "unistd.h"
#include "windows.h"
#include <iostream>
using namespace std;
/*   Nama: Meyzo Naufal Romzi//Gready Michael
      NIM:  1301184299//1301180188  */


void tampilanAwal(ListP &L, ListJ &L2, Listrel &L3)
{
    int opsi;
    string sudah;
    string pilihan1;
    system("CLS");
    cout<<"==========================="<<endl;
    cout<<"KERETA API KENCAJA DJOYO"<<endl;
    cout<<"==========================="<<endl;
    cout<<"1.Masukan Data Diri"<<endl;
    cout<<"2.Memilih Jadwal Keberangkatan"<<endl;
    cout<<"3.Menampilkan Seluruh Data Penumpang "<<endl;

    cout<<"4.Menghapus Data Penumpang"<<endl;

    cout<<"5.Menampilkan Penumpang dengan Jadwal Tertentu"<<endl;
    cout<<"6.Exit Program"<<endl;
    cout<<"Masukkan Opsi: "<<endl;
    cin>>opsi;

    switch (opsi)
    {
    case 1:
    {
        system("CLS");
        string asdasd;
        cout<<"Masukan Data Diri Anda"<<endl;
        cout<<"Inputkan YES untuk melanjutkan, NO untuk kembali ke main menu"<<endl;
        cin>>pilihan1;
        if ((pilihan1=="YES"))
        {
            cin.ignore();
            menuAddPeg(L);
            cin.ignore();
            cout<<"Data Diri Berhasil Dimasukan"<<endl;
            cout<<"Input YES"<<endl;
            cin>>asdasd;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(2000);
            system("CLS");
            tampilanAwal(L,L2,L3);
        }
        else
        {
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(2000);
            system("CLS");
            tampilanAwal(L,L2,L3);
        }
    }
    break;





    case 2:
    {
        string pilihan2;
        system("CLS");
        if (firstP(L)!=NULL)
        {
            cout<<"Silahkan Pilih Jadwal Keberangkatan"<<endl;
            cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
            cin>>pilihan2;
            if ((pilihan2=="YES") || (pilihan2=="yes"))
            {
                cin.ignore();
                menuAddRel(L,L2,L3);
                cin.ignore();
                cout<<"Data Telah Direkam"<<endl;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
            else
            {
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
        }
        else
        {
            cout<<"Belum ada data yang kami terima.Silahkan ke no 1 dan masukan data diri anda"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);
        }
    }
    break;


    case 3:
    {
        string pilihan3;
        system("CLS");
        if (firstP(L)!=NULL)
        {
            cout<<"berikut adalah daftar penumpang yang telah memasukan datanya"<<endl;
            printInfoPnmpng(L);
            cout<<"Prosedur telah selesai"<<endl;
            cout<<"Input YES"<<endl;
            cin>>pilihan3;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(2000);
            system("CLS");
            tampilanAwal(L,L2,L3);
        }
        else
        {
            cout<<"Belum ada data yang kami terima.Silahkan ke no 1 dan masukan data diri anda"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);

        }
    }
    break;






    case 4:
    {
        string pilihan5;
        if (firstP(L)!=NULL)
        {
            system("CLS");
            string asdasd;
            cout<<"Anda akan menghapus data anda"<<endl;
            cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
            cin>>pilihan5;
            if ((pilihan5=="YES") || (pilihan5=="yes"))
            {
                cin.ignore();
                deletePeg(L,L3);
                cin.ignore();
                cout<<"prosedur telah selesai"<<endl;
                //cout<<"Cek nama anda apakah masih terdaftar di Kereta Api Kencana Djoyo"<<endl;
                //showPeg(L,L3);
                cout<<"Input YES"<<endl;
                cin>>asdasd;
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }

            else
            {
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
        }

        else
        {
            cout<<"Belum ada data yang kami terima.Silahkan ke no 1 dan masukan data diri anda"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);
        }
    }
    break;



    case 5:
    {
        string pilihan7;
        system("CLS");
        if (firstP(L)!=NULL)
        {
            cout<<"Anda akan menampilkan penumpang"<<endl;
            cout<<"Inputkan YES untuk melanjutkan, Inputkan NO untuk kembali ke menu"<<endl;
            cin>>pilihan7;
            if ((pilihan7=="YES") || (pilihan7=="yes"))
            {
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
            else
            {
                cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
                Sleep(2000);
                system("CLS");
                tampilanAwal(L,L2,L3);
            }
        }
        else
        {
            cout<<"Belum ada data yang kami terima.Silahkan ke no 1 dan masukan data diri anda"<<endl;
            cout<<"redirecting back to main menu... this process may take 2 seconds"<<endl;
            Sleep(3000);
            tampilanAwal(L,L2,L3);
        }
    }
    break;


    }
}
















