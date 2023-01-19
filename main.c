#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int icinde_mi(int eleman,int dizi[]) {
    for(int i = 0;i<4;i++) {
        if(dizi[i]==eleman) {
            return 1;
        }
    }
    return 0;
}

int ata(int *a_i,int *b_i,int *c_i,int *d_i,int nums[],int *num_count) { 
    int a = *a_i;
    int b = *b_i;
    int c = *c_i;
    int d = *d_i;

    if(a!=-1) {
        while (1) {
            b = rand()%*num_count;
            if(icinde_mi(b,nums)==0) {
                nums[1] = b;
                break;
            }
        }

        while (1) {
            c = rand()%*num_count;
            if(icinde_mi(c,nums)==0) {
                nums[2] = c;
                break;
            }
        }
        while (1) {
            d = rand()%*num_count;
            if(icinde_mi(d,nums)==0) {
                nums[3] = d;
                break;
            }
        }


    }

    else if (b!=-1) {
        while (1) {
            a = rand()%*num_count;
            if(icinde_mi(a,nums)==0) {
                nums[1] = a;
                break;
            }
        }

        while (1) {
            c = rand()%*num_count;
            if(icinde_mi(c,nums)==0) {
                nums[2] = c;
                break;
            }
        }
        while (1) {
            d = rand()%*num_count;
            if(icinde_mi(d,nums)==0) {
                nums[3] = d;
                break;
            }
        }

    }
    else if (c!=-1) {
        while (1) {
            a = rand()%*num_count;
            if(icinde_mi(a,nums)==0) {
                nums[1] = a;
                break;
            }
        }

        while (1) {
            b = rand()%*num_count;
            if(icinde_mi(b,nums)==0) {
                nums[2] = b;
                break;
            }
        }
        while (1) {
            d = rand()%*num_count;
            if(icinde_mi(d,nums)==0) {
                nums[3] = d;
                break;
            }
        }

    }
    else if (d!=-1) {
        while (1) {
            a = rand()%*num_count;
            if(icinde_mi(a,nums)==0) {
                nums[1] = a;
                break;
            }
        }

        while (1) {
            c = rand()%*num_count;
            if(icinde_mi(c,nums)==0) {
                nums[2] = c;
                break;
            }
        }
        while (1) {
            b = rand()%*num_count;
            if(icinde_mi(b,nums)==0) {
                nums[3] = b;
                break;
            }
        }

    }
    *a_i = a;
    *b_i = b;
    *c_i = c;
    *d_i = d;
}


int main()
{
    srand(time(0));

    char *ing[] = {"accuse","achieve","acknowledge","acquiere","adjust","adore","aim","anticipate","appear","approach","arise","arrange","assume","assure","attach","avoid","attract","attend","attempt","assuming","bird","bounce","breed","claim","commit","compete","complain","concern","consent","consist","consult","contain","criticise","delay","demand","doubt","drag","drill","emphasize","enable","enhance","ensure","entail","establish","examine","expand","extend","fit","generate","hestitate","improve","incorporate","indicate","intend","involve","justify","kneel","knit","lack","lay","lean","lend","prove","pull","pursue","qualify","recall","recollect","recommend","reduce","refer","reflect","relate","relieve","rely","remain","represent","require","resent","settle","sew","sink","snore","specify","stict","sting","submit","supply"};
    char *turkce[] = {"suclamak","basarmak","kabul etmek","elde etmek","ayarlamak","tapmak","amac","beklemek","gorunmek","yaklasmak","ortaya cikmak","duzenlemek","varsaymak","saglamak","ilistirmek","kacinmak","cekmek","katilmak","girmek","varsaymak","kus","sicramak","dogurmak","iddia etmek","taahhut etmek"," rekabet etmek","sikayet etmek","endiselenmek","izin vermek","olusmak","danismak","icermek","elestiri","geciktirmek","talep","suphe","suruklemek","matkap","vurgulamak","etkinlestirmek","gelistirmek","saglamak","gerektirmek","kurmak","incelemek","genisletmek","uzatmak","sigdirmak","uretmek","tereddut etmek"," gelistirmek"," dahil etmek"," belirtmek"," niyet etmek"," dahil etmek"," hakli cikarmak"," diz cokmek"," ormek"," eksiklik"," yatirmak"," yalin"," odunc vermek"," kanitlamak"," cekmek"," takip etmek"," nitelendirmek"," geri cagirmak"," hatirlamak"," tavsiye etmek"," azaltmak"," basvurmak"," yansitmak"," iliskilendirmek"," rahatlatmak"," guvenmek"," kalmak","temsil etmek","gerektirmek","yeniden gondermek","yerlestirmek","dikmek","batmak","horlamak","belirtmek","surdurmek","sokmak","gondermek","tedarik"};

    char a[20];
    char b[20];
    char c[20];
    char d[20];

    char correct_ans; //'a' 'b' 'c' 'd'
    char user_ans; //'a' 'b' 'c' 'd'

    char quest[20];

    int soru_index;

    int ihtimal;
    int sans;

    int a_i = -1; //basarmak -> 1
    int b_i = -1; //yaklasmak -> 9 
    int c_i = -1; //suclamak -> 0
    int d_i = -1; //ayarlamak ->

    int num_count = 88;

    int nums[4];

    while (1) {
        ihtimal = rand()%2; //0 veya 1

        for(int i = 0;i<4;i++) {
            nums[i] = -1;
        }

        a_i = -1;
        b_i = -1;
        c_i = -1;
        d_i = -1;


        if(ihtimal==1) {
            soru_index = rand()%num_count; //0 ve 87 arasında değer döner
            strcpy(quest,turkce[soru_index]);

            printf("%s ne demektir?\n",quest);

            sans = rand()%4; //0 1 2 3

            if(sans==0) {

                correct_ans = 'a';

                a_i = soru_index;

                strcpy(a,ing[soru_index]);

                nums[0] = soru_index; //45 -1 -1 -1

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(b,ing[b_i]);
                strcpy(c,ing[c_i]);
                strcpy(d,ing[d_i]);

            }
            if(sans==1) {

                correct_ans = 'b';

                b_i = soru_index;

                strcpy(b,ing[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(a,ing[a_i]);
                strcpy(c,ing[c_i]);
                strcpy(d,ing[d_i]);

            }
            if(sans==2) {

                correct_ans = 'c';

                c_i = soru_index;

                strcpy(c,ing[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(b,ing[b_i]);
                strcpy(a,ing[a_i]);
                strcpy(d,ing[d_i]);

            }
            if(sans==3) {

                correct_ans = 'd';

                d_i = soru_index;

                strcpy(d,ing[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(b,ing[b_i]);
                strcpy(c,ing[c_i]);
                strcpy(a,ing[a_i]);

            }
            
            printf("a:%s       b:%s       c:%s       d:%s\n",a,b,c,d);
            scanf("%c",&user_ans);
            fflush(stdin);

            if(user_ans=='q') {
                exit(0);
            }

            if(correct_ans==user_ans) {
                printf("\nDogru cevap!\n\n");
            }
            else {
                printf("\nBilemedin.Dogru cevap %s olacakti\n\n",ing[soru_index]);
            }


        }
        else {
            soru_index = rand()%num_count;
            strcpy(quest,ing[soru_index]);

            printf("%s ne demektir?\n",quest);

            sans = rand()%4;

            if(sans==0) {

                correct_ans = 'a';

                a_i = soru_index;

                strcpy(a,turkce[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(b,turkce[b_i]);
                strcpy(c,turkce[c_i]);
                strcpy(d,turkce[d_i]);

            }
            if(sans==1) {

                correct_ans = 'b';

                b_i = soru_index;

                strcpy(b,turkce[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(a,turkce[a_i]);
                strcpy(c,turkce[c_i]);
                strcpy(d,turkce[d_i]);

            }
            if(sans==2) {

                correct_ans = 'c';

                c_i = soru_index;

                strcpy(c,turkce[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(b,turkce[b_i]);
                strcpy(a,turkce[a_i]);
                strcpy(d,turkce[d_i]);

            }
            if(sans==3) {

                correct_ans = 'd';

                d_i = soru_index;

                strcpy(d,turkce[soru_index]);

                nums[0] = soru_index;

                ata(&a_i,&b_i,&c_i,&d_i,nums,&num_count);

                strcpy(b,turkce[b_i]);
                strcpy(c,turkce[c_i]);
                strcpy(a,turkce[a_i]);

            }

            printf("a:%s       b:%s       c:%s       d:%s\n",a,b,c,d);
            scanf("%c",&user_ans);
            fflush(stdin);

            if(user_ans=='q') {
                exit(0);
            }

            if(correct_ans==user_ans) {
                printf("\nDogru cevap!\n\n");
            }
            else {
                printf("\nBilemedin.Dogru cevap %s olacakti\n\n",turkce[soru_index]);
            }
        }

    }

    return 0;
}
