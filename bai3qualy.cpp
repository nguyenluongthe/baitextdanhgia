#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// khai bao
struct SV{
char ht[30];
int namSinh;
float dToan, dLy,dHoa,dTB;
};
SV a[20],*p;
int n;// so sinh vien
// Nhap thong tin sinh vien

void Nhap(){
p=a;
// nhap so sinh vien
do{
cout<<"\n Nhap so sinh vien: "; cin>>n;
if(n<2||n>20) cout<<"\n Nhap lai so sinh vien";
}while(n<2||n>20);
// Nhap thong tin sinh vien

cout<<"\n Nhap thong tin sinh vien: ";
for(int i=0;i<n;i++)
{
fflush(stdin);
cout<<"\n + Nhap thong tin co sinh vien thu "<<i+1<<": ";
cout<<"\n - Ho ten: "; gets((p+i)->ht);
cout<<"\n - Diem toan: "; cin>>(p+i)->dToan;
cout<<"\n - Diem ly: "; cin>>(p+i)->dLy;
cout<<"\n - Diem hoa: "; cin>>(p+i)->dHoa;
}
}
// Tinh diem tong ket
void TinhDiem(){
p=a;
for(int i=0;i<n;i++)
(p+i)->dTB=(((p+i)->dToan)*3+((p+i)->dLy)*4+((p+i)->dTDC)*5)/12;
}
// Dem so sinh vien co diem tb>=8
void DemDTB_LonHon8(){
p=a;
int dem=0;
for(int i=0;i<n;i++)
if((p+i)->dTB>=8) dem++;
cout<<"\n * So sinh vien co diem trung binh >= 8: "<<dem;
}
main(){
Nhap();
TinhDiem();
DemDTB_LonHon8();
}