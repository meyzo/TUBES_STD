#include "relation.h"
#include <iostream>
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define firstR(L) L.firstR
#define lastR(L) L.lastR
#define nil NULL
#include <string>
#define str string
/*   Nama: Meyzo Naufal Romzi//Gready Michael
      NIM:  1301184299//1301180188  */
using namespace std;

void createlistR(Listrel &L)
{
    firstR(L)=NULL;
    lastR(L)=NULL;
}

reladd alokasirel(Listrel &L, pnmpng x, jdwl y)
{
    reladd P =new elmrel;
    info(P).infoPeg=x;
    info(P).infoShi=y;
    next(P)=NULL;
    prev(P)=NULL;

    return P;
}

void insertRel (Listrel &L, reladd &P)
{
    if ((firstR(L)==NULL)&&(lastR(L)==NULL)&&(P!=NULL))
    {
        firstR(L)=P;
        lastR(L)=P;
    }
    if ((firstR(L)!=NULL)&&(lastR(L)!=NULL) && (info(P).infoPeg!=NULL) && (info(P).infoShi)!=NULL)
    {
        next(lastR(L))=P;
        prev(P)=lastR(L);
        lastR(L)=P;
        next(P)=NULL;
    }
}

void printinfoRel(Listrel &L)
{
    if ((firstR(L)!=NULL)&&(lastR(L)!=NULL))
    {
        if(firstR(L)==lastR(L))
        {
            reladd P=firstR(L);
            cout<<info(info(P).infoPeg).nama<<endl;
            cout<<info(info(P).infoPeg).NIP<<endl;
            cout<<info(info(P).infoShi).hari<<endl;
            int time = info(info(P).infoShi).idjdwl;
            switch(time)
            {
            case 1:
                cout<<"Jam pagi: 06.30 - 11.30"<<endl;
                break;
            case 2:
                cout<<"Jam siang: 12.30 - 18.00"<<endl;
                break;
            case 3:
                cout<<"Jam malam: 18.30 - 22.00"<<endl;
                break;
            default:
                cout<<"Tipe tidak cocok"<<endl;
            }
        }
        else
        {
            reladd P=firstR(L);
            while(P!=NULL)
            {
                cout<<info(info(P).infoPeg).nama<<endl;
                cout<<info(info(P).infoPeg).NIP<<endl;

                cout<<info(info(P).infoShi).hari<<endl;
                int time = info(info(P).infoShi).idjdwl;
                switch(time)
                {
                case 1:
                    cout<<"Jam pagi: 06.30 - 11.30"<<endl;
                    break;
                case 2:
                    cout<<"Jam siang: 12.30 - 18.00"<<endl;
                    break;
                case 3:
                    cout<<"Jam malam: 18.30 - 22.00"<<endl;
                    break;
                default:
                    cout<<"Tipe tidak cocok"<<endl;
                }
                P=next(P);
            }
        }
    }
    else
        cout<<"List kosong"<<endl;
}

bool findRelasi(Listrel L, pnmpng x, jdwl y)
{
    reladd P;
    if(firstR(L)!=NULL && lastR(L)!=NULL)
    {
        P = firstR(L);
        while(P!=lastR(L))
        {
            if(info(P).infoPeg==x && info(P).infoShi==y)
            {
                cout<<"Relasi ditemukan"<<endl;
                return false;
            }
            else
                P=next(P);
        }
        if(info(P).infoPeg!=x && info(P).infoShi!=y)
        {
            return true;
        }
    }
    else
        return true;
}

void menuAddPeg(ListP &L)
{
    penumpang x;
    char input;
    do
    {
        system("CLS");
        cout<<"    Masukan Data  "<<endl;
        cout<<"===================="<<endl;
        cout<<"Masukkan nama : ";
        getline(cin, x.nama);
        cout<<"Masukkan Nomor ID: ";
        getline(cin, x.NIP);
        x.jumlah = 0;
        cout<<endl;
        pnmpng P = alokasipnmpng(x);
        insertPnmpng(L,P);
        cout<<"Data penumpang berhasil ditambahkan"<<endl;
        cout<<"Apakah ingin menambahkan lagi? (y/n)"<<endl;
        cout<<"Masukan: ";
        cin>>input;
        cin.ignore();
    }
    while (input=='y');
}

void menuAddRel(ListP L1, ListJ L2, Listrel &L3)
{
    char input;
    pnmpng x;
    jdwl y;
    do
    {
        system("CLS");
        do
        {
            x = findPnmpng(L1);
        }
        while(x==NULL);

        do
        {
            y = findjdwl(L2);
        }
        while(y==NULL);

        if (findRelasi(L3,x,y))
        {
            reladd P = alokasirel(L3, x, y);
            insertRel(L3, P);
            cout<<"Relasi telah ditambahkan"<<endl;
            info(x).jumlah = info(x).jumlah+1;
        }
        else
        {
            cout<<"Relasi sudah ada"<<endl;
        }
        cout<<"Tambah lagi?(y/n)"<<endl;
        cout<<"Masukan: ";
        cin>>input;
        cin.ignore();
    }
    while(input=='y');
}

void showDay(Listrel L)
{
    string day;
    bool status=true;
    cout<<"Cari hari (dengan awalan huruf kapital): ";
    cin>> day;
    if ((day!="Senin") && (day!="Selasa") && (day!="Rabu") && (day!="Kamis") && (day!="Jumat" ) && (day!="Sabtu"))
    {
        cout<<"Anda menginputkan nama hari yang tidak valid"<<endl;
    }
    else
    {
        reladd P = firstR(L);
        while(P!=NULL)
        {
            if(day == info(info(P).infoShi).hari)
            {
                cout<<info(info(P).infoPeg).nama<<endl;
                cout<<info(info(P).infoPeg).NIP<<endl;
                int time = info(info(P).infoShi).idjdwl;
                switch(time)
                {
                case 1:
                    cout<<"Jam pagi: 06.30 - 11.30"<<endl;
                    break;
                case 2:
                    cout<<"Jam siang: 12.30 - 18.00"<<endl;
                    break;
                case 3:
                    cout<<"Jam malam: 18.30 - 22.00"<<endl;
                    break;
                default:
                    cout<<"Tipe tidak cocok"<<endl;
                }
                cout<<endl;
                P=next(P);
                status=false;
            }
            else
            {
                P=next(P);
            }
        }
    }
    if (status)
    {

        cout<<"Belum ada penumpang di hari tersebut"<<endl;
    }
}

void deleteFirstR(Listrel &L, reladd &P)
{
    if(firstR(L)!=NULL && lastR(L)!=NULL)
    {
        if (firstR(L)==lastR(L))
        {
            firstR(L)=NULL;
            lastR(L)=NULL;
            delete P;
        }
        else
        {
            P=firstR(L);
            firstR(L)=next(P);
            prev(next(P))=NULL;
            next(P)=NULL;
            delete P;
        }
    }
    else
    {
        cout<<"Relasi Kosong"<<endl;
    }
}


void deleteLastR(Listrel &L, reladd &P)
{
    if(firstR(L)!=NULL && lastR(L)!=NULL)
    {
        P=lastR(L);
        lastR(L)=prev(P);
        prev(P)=NULL;
        next(lastR(L))=NULL;
        delete P;
    }
    else
    {
        cout<<"Relasi Kosong"<<endl;
    }
}

void deleteAfterR(Listrel &L, reladd prec, reladd &P)
{
    if(firstR(L)!=NULL && lastR(L)!=NULL)
    {
        next(prec)=next(P);
        prev(next(P))=prec;
        next(P)=NULL;
        prev(P)=NULL;
        delete P;
    }
    else
    {
        cout<<"Relasi Kosong"<<endl;
    }
}

void deleteRelasi(Listrel &L, reladd P)
{
    if ((firstR(L)!=NULL) &&(lastR(L)!=NULL))
        if (P==firstR(L))
        {
            deleteFirstR(L,P);
        }
        else if (P==lastR(L))
        {
            deleteLastR(L,P);
        }
        else
        {
            reladd Q=prev(P);
            deleteAfterR(L, Q, P);
        }
}

void deletePeg(ListP &L, Listrel &L2)  //hapus elemen di list relasi dan pegawai
{
    pnmpng P;
    reladd Q;
    P=findPnmpng(L);
    string a=info(P).nama;
    cout<<endl;
    Q=firstR(L2);
    while(Q!=NULL)
    {
        if(info(info(Q).infoPeg).nama==a)
        {
            reladd s = Q;
            Q=next(Q);
            deleteRelasi(L2,s);
        }
        else
        {
            Q=next(Q);
        }
    }
    if (P!=NULL)
    {
        if(P==firstP(L))
        {
            deleteFirstP(L,P);
        }
        else if(next(P)==NULL)
        {
            deleteLastP(L,P);
        }
        else
        {
            pnmpng r = firstP(L);
            while(next(r)!=NULL)
            {
                r=next(r);
            }
            deleteAfterP(L,r,P);
        }
    }
}

void deletejdwl(ListJ &L, Listrel &L2)
{
    jdwl p;
    reladd q;
    string day;
    int id;
    p=findjdwl(L);
    day=info(p).hari;
    id=info(p).idjdwl;
    cout<<endl;
    q=firstR(L2);
    while(q!=NULL)
    {
        if(info(info(q).infoShi).hari==day && info(info(q).infoShi).idjdwl==id)
        {
            reladd s = q;
            (info(info(q).infoPeg).jumlah)=((info(info(q).infoPeg).jumlah)-1);
            q=next(q);
            deleteRelasi(L2,s);

        }
        else
        {
            q=next(q);
        }
    }
}

void showPeg(ListP L, Listrel L2)
{
    //string name;
    bool status=true;
    //cout<<"Cari nama pegawai: "; getline(cin, name);
    if(firstP(L)!=NULL)
    {
        pnmpng p=findPnmpng(L);
        if(p!=NULL)
        {
            cout<<info(p).nama<<endl;
            cout<<info(p).NIP<<endl;
            if(firstR(L2)!=NULL)
            {
                reladd q = firstR(L2);
                while(q!=NULL)
                {
                    if(info(q).infoPeg==p)
                    {
                        cout<<info(info(q).infoShi).hari<<endl;
                        int time = info(info(q).infoShi).idjdwl;
                        switch(time)
                        {
                        case 1:
                            cout<<"Jam pagi: 06.30 - 11.30"<<endl;
                            break;
                        case 2:
                            cout<<"Jam siang: 12.30 - 18.00"<<endl;
                            break;
                        case 3:
                            cout<<"Jam malam: 18.30 - 22.00"<<endl;
                            break;
                        default:
                            cout<<"Tipe tidak cocok"<<endl;
                        }
                        cout<<endl;
                        status = false;
                        q=next(q);
                    }
                    else
                        q=next(q);
                }
                if(status)
                {
                    cout<<info(p).nama<<" belum memilih jadwal"<<endl;
                }
            }
            else
                cout<<"Belum ada yang memilih jadwal"<<endl;
        }
    }
    else
    {
        cout<<"List penumpang kosong"<<endl;
    }
}
