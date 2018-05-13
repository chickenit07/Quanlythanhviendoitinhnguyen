#include<stdio.h>
#include<conio.h>
struct thanh_vien
{
	int ID;
	char ho_ten[34];
	int tuoi;
	int group;
	
};
void Nhap (thanh_vien *tv)
{
	printf("\n Nhap ID: ");
	scanf("%d",&tv->ID);
	printf("\n Nhap ho va ten sinh vien:  ");
	fflush(stdin);
	gets(tv->ho_ten);
	printf("\n Nhap tuoi: ");
	scanf("%d",&tv->tuoi);
	printf("\n Nhap group: ");
	scanf("%d",&tv->group);
	
}
void In(thanh_vien *tv)
{
	printf("\n Ten thanh vien:\t %s",tv->ho_ten);
	printf("\n ID: \t %d",tv->ID);
	printf("\n Tuoi: \t %d",tv->tuoi);
	printf("\n Group: \t %d",tv->group);
}
void Them (thanh_vien *tv,int them,int *sl)
{
	int i;
	for (i=*sl;i< (*sl+them);i++)
		Nhap (&tv[i]);
	*sl=*sl+them;
}
main()
{
    thanh_vien sv[100];
	int i,j,sl,ma,k,them;
	printf(" Nhap so luong thanh vien: \t ");
	scanf("%d",&sl);
	for(i=0;i<sl;i++)
	{
		Nhap (&sv[i]);
	};
	for (j=0;j<sl;j++)
	{
		In(&sv[j]);
	};
	printf("\n Nhap so thanh vien can them:\t ");
	scanf("%d",&them);
	Them(&sv[0],them,&sl);
	for(k=0;k<sl;k++)
	{
		In (&sv[k]);
	}
}


	


	

