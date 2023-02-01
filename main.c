
/* EBUBEKÝR KURT 2204040183 YAZILIM MÜHENDÝSLÝÐÝ 1.2 PROGRAMLAMAYA GÝRÝÞ 1.DÖNEM 2.PROJESÝ */

#include<stdio.h>
#include<string.h>


int main(int argc, char *argv[]){
	
	int dogru ,yanlis,count,counter,i;
	int skor;
    char secenekler;
    char kullaniciAdi[15];
	
	mainhome:
	
	system("cls");
		
	printf("\n\t\t________________________________________________");	
    printf("\n\t\t\t   TRIVIA OYUNUMA HOSGELDINIZ      ");
    printf("\n\n\t\t -> OYUNA BASLAMAK ICIN S TUSUNA BAS");
    printf("\n\t\t_______________________________________________\n\n");
	
	secenekler=toupper(getch());
	 
	 if (secenekler=='S')
	 {
	 	printf("\n\n\n\n\n\t LUTFEN KULLANICI ADINI GIR = ");
	 	scanf("%s",&kullaniciAdi);
	 	
	 	system("cls");
	 	
	 	printf("\n\t\t Oyuna tekrardan hosgeldin");
	 	printf("\n\t\t Oyunda toplamda 25 soru bulunmaktadir.");	 	
	 	printf("\n\t\t Tum sorulari dogru cevaplayan bir kisinin kazanacagi miktar = 2.5 MILYON TURK LIRASI ");
	 	printf("\n\t\t >> !! AMA UNUTMA KI BU YARISMADAN BORCLU OLARAK DA AYRILABILIRSIN !! << ");
	 	printf("\n\t\t Sorular coktan secmeli olup size 4 adet secenek verilecektir");
	 	printf("\n\t\t Bildiginiz her sorudan sonra kazandiginiz para katlanarak artacaktir");
	 	printf("\n\t\t Her soruya verilen dogru cevabin degeri 100000 TURK LIRASI !");
	 	printf("\n\t\t Her soruya verilen yanlis cevabin degeri -50000 TURK LIRASI !");
	 	printf("\n\t\t Y tusuna basarak yonetmeliklerini anladginizi kabul eder ve oyuna baslarsiniz.");
	 	printf("\n\n\t\t\t BOL SANS, IHTIYACIN OLACAK ! ");

	 	
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     counter=0;
     for(i=1;i<=25;i++)
     {
    system("cls");
    
     	switch(i){
     		
     	case 1:
		printf("\nThe Real Slim Shady sarkisi kime aittir?");
		printf("\na)Kayne West b)Eminem c)One Direction d)Tarkan");
		
			if (toupper(getch())=='B')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap b)Eminem");
     			getch();
     			counter++;
     			getch();
     			break;
			 }
	 	case 2:
		printf("\nGunes sistemindeki en sicak gezegen hangisidir?");
		printf("\na)Merkur b)Venus c)Uranus d)Gunes");
		
			if (toupper(getch())=='B')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap b)Venus");
     			getch();
     			counter++;
     			getch();
     			break;
			}
		case 3:
		printf("\nKunduz hangi ulkenin resmi maskotudur?");
		printf("\na)Kanada b)Amerika c)Avusturya d)Iskocya");
		
			if (toupper(getch())=='A')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)Kanada");
     			getch();
     			counter++;
     			getch();
     			break;
			}
		case 4:
		printf("\nDunyanin capi kac mil dir?");
		printf("\na)7000 b)7500 c)8000 d)8500");
		
			if (toupper(getch())=='C')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)8000");
     			getch();
     			counter++;
     			getch();
     			break;
			}
		case 5:
		printf("\nEn kurak kita hangisidir?");
		printf("\na)Antartika b)Guney Amerika c)Avrupa d)Afrika");
		
			if (toupper(getch())=='A')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)Antartika");
     			getch();
     			counter++;
     			getch();
     			break;
			} 
		 case 6:
		printf("\nBir ahtapotun kac kalbi vardir?");
		printf("\na)1 b)2 c)3 d)4");
		
			if (toupper(getch())=='C')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)3");
     			getch();
     			counter++;
     			getch();
     			break;
			}
		case 7:
		printf("\nEn uzun uluslarasi siniri paylasan iki ulke?");
		printf("\na)Kanada-ABD b)Paraguay-Brezilya c)Avusturya-Almanya d)Fransa-Ispanya");
		
			if (toupper(getch())=='A')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)Kanada-ABD");
     			getch();
     			counter++;
     			getch();
     			break;
			} 
		case 8:
		printf("\nBildigim tek sey hicbir sey bilmedigimdir sozu kime aittir?");
		printf("\na)Democritos b)Harezmi c)Platon d)Sokrates");
		
			if (toupper(getch())=='D')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap d)Sokrates");
     			getch();
     			counter++;
     			getch();
     			break;
			} 
		case 9:
		printf("\nHangi hayvan dili ile kulagini temizleyebilir?");
		printf("\na)Baykus b)Aslan c)Zurafa d)Fil");
		
			if (toupper(getch())=='C')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)Zurafa");
     			getch();
     			counter++;
     			getch();
     			break;
			} 
		case 10:
		printf("\nDunyada bilinen en zehirli balik hangisidir?");
		printf("\na)Pelikan Baligi b)Pirana c)Kopek Baligi d)Tas Baligi");
		
			if (toupper(getch())=='D')
			{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     		else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap d)Tas Baligi");
     			getch();
     			counter++;
     			getch();
     			break;
			}
		case 11:
		printf("\nKoprastastafobi neyin korkusudur?");
		printf("\na)Asiri karanlik b)Sokak hayvanlari c)Bilgisayar d)Kabizlik");
		if (toupper(getch())=='D')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap d)Kabizlik");
     			getch();
     			counter++;
     			getch();
     			break;
		} 

		case 12:
		printf("\nCekirdekleri disarda olan tek meyve hangisidir ?");
		printf("\na)Domates b)Cilek c)Mandalina d)Elma");
		if (toupper(getch())=='B')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap b)Cilek");
     			getch();
     			counter++;
     			getch();
     			break;
		} 	
		case 13:
		printf("\nBreaking Bad dizisinde Gustavo Fring karakterini canlandiran aktorun ismi nedir?");
		printf("\na)Bryan Cranston b)Anna Gunn c)Dean Horris d)Giancarlo Esposito");
		if (toupper(getch())=='D')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap d)Giancarlo Esposito");
     			getch();
     			counter++;
     			getch();
     			break;
		} 
		case 14:
		printf("\nTanklar ilk olarak hangi savasta kullanilmistir?");
		printf("\na)Birinci Dunya Savasi b)Balkan Savasi c)Hacli Seferleri d)Kirim Savasi");
		if (toupper(getch())=='A')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)Birinci Dunya Savasi");
     			getch();
     			counter++;
     			getch();
     			break;
		}
		case 15:
		printf("\nOzgurluk Aniti ABDye hangi ulke tarafindan verilmistir?");
		printf("\na)Kimse vermedi b)Fransa c)Italya d)Kanada");
		if (toupper(getch())=='B')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap b)Fransa");
     			getch();
     			counter++;
     			getch();
     			break;
		} 		
	
		case 16:
		printf("\nNoel Babayi reklamcilikta ilk kullanan firma hangisidir?");
		printf("\na)Coca-cola b)Pepsi c)Sprite d)Cheetos");
		if (toupper(getch())=='A')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				counter++;
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)Coca-cola");
     			getch();
     			counter++;
     			getch();
     			break;
		} 
		case 17:
		printf("\nDunyaca unlu gemi Titanic ne zaman batti?");
		printf("\na)19 Haziran 1915 b)23 Eylul 1914 c)15 Nisan 1912 d)26 Mayis 1916");
		if (toupper(getch())=='C')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)15 Nisan 1912");
     			getch();
     			counter++;
     			getch();
     			break;
		} 
		case 18:
		printf("\nSirada kolay ve guncel bir soru var: Elon Musk Twitteri kac milyar dolara satin aldi?");
		printf("\na)44  b)42 c)40 d)38");
		if (toupper(getch())=='A')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)44");
     			getch();
     			counter++;
     			getch();
     			break;
		} 	
		case 19:
		printf("\nAtom numarasi 78 olan element hangisidir?");
		printf("\na)Tungsten b)Altin c)Platin d)Gumus");
		if (toupper(getch())=='C')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)Platin");
     			getch();
     			counter++;
     			getch();
     			break;
		} 	
		case 20:
		printf("\n2013-2023 yillari arasindaki Dunya Satranc Dunya Sampiyonu kimdir?");
		printf("\na)Hikaru Nakamura b)Magnus Carlsen c)Ian Nepomniachti d)Teimur Radjabov");
		
		if (toupper(getch())=='B')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;
			}
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap b)Magnus Carlsen");
     			getch();
     			counter++;
     			getch();
     			break;
     	case 21:
    	printf("\nBugune kadar YouTubeda en cok izlenen video hangisidir?");
		printf("\na)Baby Shark b)Despacito c)Jhony Jhony Yes Papa d)Ed Sheeran-Shape of You");
		
		if (toupper(getch())=='A')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;}
			
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap a)Baby Shark");
     			getch();
     			counter++;
     			getch();
     			break;}
     	
     	case 22:
    	printf("\nGangnam Style sarkisi ile unlu olan sanatcinin ismi nedir?");
		printf("\na)G-IDLE b)Blackpink c)T-ARA d)PSY");
		
		if (toupper(getch())=='D')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;}
			
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap d)PSY");
     			getch();
     			counter++;
     			getch();
     			break;}
     	case 23:
    	printf("\nTarihin en iyi futbolcusu olan Cristiano Ronaldo, Real Madride hangi yilda imza atti?");
		printf("\na)2007 b)2009 c)2011 d)2013");
		
		if (toupper(getch())=='B')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;}
			
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap b)2009");
     			getch();
     			counter++;
     			getch();
     			break;}
     	case 24:
    	printf("\nTarihteki en iyi Arjantinli futbolcu olan Lionel Messinin boyu kac santimetredir?");
		printf("\na)166 b)168 c)170 d)172");
		
		if (toupper(getch())=='C')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;}
			
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)170");
     			getch();
     			counter++;
     			getch();
     			break;}
		
		case 25:
    	printf("\nRonaldo Nazario kariyeri boyunca kac gol atmistir?");
		printf("\na)189 b)277 c)352 d)413");
		
		if (toupper(getch())=='C')
		{
				printf("\nBravo, dogru cevap"); 
				count++ ;
				getch();
				break;}
			
     	else 
     		{
     			printf("\nUzgunum, yanlis cevap verdin.");
     			printf("\nDogru cevap c)352");
     			getch();
     			counter++;
     			getch();
     			break;}
     			
		}}}
		
		
	system("cls");
	dogru=count;
	yanlis=counter;
	
	skor=count*100000 - counter*50000;
	
	
	printf("\n\n\n\n\t\t\t\t------------------------------------------------\n");
	printf("\t\t\t\t|  >> TEBRIKLER, OYUNU TAMAMLADIN !!           |\n");
	printf("\t\t\t\t|  >> SANA SORULAN 25 SORUYA DA SABIRLA CEVAP  |\n");
	printf("\t\t\t\t|       VERDIGIN ICIN TESEKKURLER !!           |\n");
	printf("\t\t\t\t|  >> DOGRU SAYIN : %d                l         |\n",dogru);
	printf("\t\t\t\t|  >> YANLIS SAYIN : %d                         |\n",yanlis-1);
	printf("\t\t\t\t|  >> KAZANDIGIN PARA : %d TL             |\n",skor);
	printf("\t\t\t\t|  >> KATILDIGIN ICIN TESEKKURLER              |\n");
	printf("\t\t\t\t|  >> SONRAKI PROJELERDE GORUSMEK UZERE        |\n");
	printf("\t\t\t\t------------------------------------------------");
	
	printf("\n\t\t\t\t------------------------------------------------\n");
	printf("\t\t\t\t|    >>    EBUBEKIR KURT 2204040183   <<      |\n");
	printf("\t\t\t\t------------------------------------------------\n");
	
	
	
	}}

	    
