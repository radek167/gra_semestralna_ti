#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <stdlib.h>
#include <time.h>

int main()
{
    int start, country, charAra, charKras, charTra;
    printf("Witaj w grze Przetrwanie!\n\nWybierz opcje:\n1. Rozpocznij rozgrywke\n2. Wyjdz z gry\n\n");
    start = 1;
    do {
        if (!(start > 0 && start < 3))
            printf("Niepoprawny format\n");
        printf("Wprowadz liczbe:");
        scanf("%d", &start);
    } while (!(start > 0 && start < 3));
    switch (start)
    {
    case 1: {
        system("cls");/*clear ekran*/
        printf("\nWybierz krolestwo:\n1. Aranvale\n2. Krasnograd\n3. Tramonto\n");
        country = 1;
        do {
            if (!(country > 0 && country < 4))
                printf("Niepoprawny format\n");
            printf("\nWprowadz liczbe:");
            scanf("%d", &country);
        } while (!(country > 0 && country < 4));
        switch (country)
        {
        case 1: {
            system("cls");
            printf("\nWybierz bohatera:\n1. Rolnik\n2. Posel\n");
            charAra = 1;
            do {
                if (!(charAra > 0 && charAra < 3))
                    printf("\nNiepoprawny format\n");
                printf("\nWprowadz liczbe:");
                scanf("%d", &charAra);
            } while (!(charAra > 0 && charAra < 3));
            switch (charAra)
            {
            case 1: {
                printf("\n\nWitaj w Krolestwie Aranvale. Jako rolnik do twoich obowiazkow nalezy uprawianie pola i dbanie o sad z drzewami\npomaranczy.Twoja kraina charakteryzuje sie wysokimi temperaturami, zmuszajacymi do pozostawania w domach w godzinach\npopoludniowych.Choc twojemu krolestwu daleko do technologicznej czy militarnej dominacji, dzieki temu zyje ci sie le-\n-piej, a atmosfera nie jest tak napieta, mimo panujacej w Europie Zimnej Wojny.\nPamietaj, ze od kazdej twojej decyzji zalezy, czy przezyjesz ten okrutny dla ludzkosci czas.");
                printf("\n\nBudzisz sie o poranku. Dzien jak co dzien o poranku jesz sniadanie, pijesz\n kawe i sluchasz wiadomosci z radia.\n\n*Witajcie ARANVALE! Dzis mamy 10 marca 1982 roku, dzis bedzie dosc goraco, nie zapominajcie pic sporo wody!\nMamy garsc wiesci dla was. W sasiednim krolestwie TRAMONTO doszlo do wybuchu epidemii nieznanego pochodzenia. Ludzie\nchoruja najprawdopodobniej po kontakcie z woda, dlatego zachowajcie ostroznosc na zapas. Poki co nie wiadomo wiecej\nna ten temat, w naszym krolestwie na ta chwile jest zupelnie bezpiecznie. Zostancie z AranRadio, bedziemy was informo-\nwac na biezaco! Pogodnego dnia!*\n\n");
                char pyt1;
                pyt1 = 'n';
                do {
                    if (!(pyt1 == 't' || pyt1 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nZaniepokoila cie ta wiadomosc, dlatego idziesz sprawdzic jak sie miewaja plony.\nZ uwagi na cieplo zastanawiasz sie czy butelka wody bedzie konieczna. Bierzesz ja ze soba?: ([T]ak/[N]ie)");
                    scanf(" %c", &pyt1);
                    pyt1 = tolower(pyt1);
                } while (!(pyt1 == 't' || pyt1 == 'n'));
                switch (pyt1)
                {
                case 't': {
                    printf("Wypijasz spora ilosc wody, ale przynajmniej bez problemu znosisz upal, okazuje sie ze z polem jak i sadem wszystko w porzadku.\nWracasz do domu schowac sie przed upalem.");
                    break;
                }
                case 'n': {
                    srand(time(NULL));
                    int los = rand() % 10;
                    if (los > 4) {
                        printf("\nNiestety bylo tak goraco, ze z odwodnienia umarles. Przegrales! Koniec gry!");
                        return 0;
                    }
                    else {
                        printf("\nCudem udalo ci sie przezyc ten skwar, pole i sad cale i zdrowe, jest ci slabo, ale wracasz do domu i oprozniasz cala butle wody bardzo szybko.");
                        break;
                    }
                }
                }
                printf("\nDzien konczy sie. Jednak z stresu wywolanym obawa przybycia choroby do Aranvale ciezko jest ci przespac noc.\n");
                printf("Nacisnij ENTER, aby kontynuowac...");
                getchar();
                getchar();
                system("cls");
                printf("Zmeczony budzisz sie nastepnego dnia, dzien jak co dzien z rana jesz sniadanie, wypijasz kawe i sluchasz porannych\nwiadomosci w radiu.\n\n *Witajcie ARANVALE! Dzis jest 11 marca 1982r. Pogoda dzis pozwoli nieco odpoczac, bedzie poch-\nmurno, ale nadal cieplo.\n[ksshshsht..] !WIADOMOSC Z OSTATNIEJ CHWILI! W Aranvale wykryto pierwszy przypadek zachorowania z wody, wystepuja te\nsame objawy co u chorych w Tramonto. Podaje objawy.... dusznosc, wysypka, ból głowy, goršczka. Jesli ktos zauwazy u sie-\nbie badz u kogos z rodziny takie symptomy, nalezy zglosic sie do lekarza. On poinstruuje co i jak. Wazne jest aby wode\nprzed spozyciem przegotowac, aby zmniejszyc ryzyko zarazenia. [ksshshsht..]\n\nTo tyle na dzis! AranRadio zyczy pogodnego dnia!");
                printf("\nW panice o zdrowie dzwonisz do znajomego posla. \n\n\n -Hej.. wiem, ze pewnie to poufne informacje, ale czy wiesz moze, kto to jest tym zarazonym zero?\n-Hej, ogolnie to jest scisle poufna informacja, ale dobrze, powiem... zachorowal sam Krol Antonio, jest z nim zle. Tylko nikomu nic nie mow, wiesz jak to jest.. pewnie to jest zasadzka Krasnogradu na Tramonto a Krol oberwal rykoszetem.\n-Jasne, w porzadku. Buzia na klodke!\n-Jedynie co ci moge doradzic, zacznij gromadzic zapasy do schronu, nie da sie przewidziec co sie wydarzy. I zdrowka tam.. Trzymaj sie!\n-Dzieki ci! Tez sie trzymaj!\n\n\n Czules ze cos jest nie tak, ale zgodnie z sugestia zaczynasz gromadzic zapasy. Cos ci podpowiada, zeby zlamac obietnice i rozpowiedziec wiesci.");
                char pyt2;
                pyt2 = 'n';
                do {
                    if (!(pyt2 == 't' || pyt2 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz N, jesli nie.\n");
                    }
                    printf("\nWybierasz sie do centrum miasta rozpowiedziec wiesci (RYZYKOWNE! - Grozi to wiezieniem za zlamanie tajemnicy panstwowej)?: ([T]ak/[N]ie)");
                    scanf(" %c", &pyt2);
                    pyt2 = tolower(pyt2);
                } while (!(pyt2 == 't' || pyt2 == 'n'));
                switch (pyt2)
                {
                case 'n': {
                    printf("Nie zdecydowales sie tego zrobic, lepiej dla ciebie, tlumisz w sobie skrajne emocje, ale wiesz, ze tak bedzie dla ciebie bezpieczniej.\nZgromadziles potrzebne zapasy i dzien dobiegl konca.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    printf("Nadchodzi kolejny dzien. Jest inaczej niz zwykle, robi sie nienaturalnie ciemno. Wlaczasz AranRadio.\n\n***WAZNY KOMUNIKAT*** Drodzy mieszkancy Aranvale, znacznie wzroslo rozprzestrzenianie sie choroby w spoleczenstwie, pro-\nsimy pozostac w domach na tyle ile to mozliwe. Nie korzystajcie z wody kranowej bezposrednio, zalecane przefiltrowanie\ni przegotowanie 3-krotnie przed uzyciem. Krol Antonio jest zarazony rowniez. Badacze z Uniwersytetu Aranvale podejrze-\nwaja skazenie wody niebezpieczna toksyna przez Krolestwo Krasnograd.\n\nW panice chowasz sie w domowym schronie, ponadto\ndowiadujesz sie, ze czesc spoleczestwa protestuje i zada konkretnych dzialan Palacu wobec sasiada Aranvale.\n\nCaly dzien spedzasz we wlasnym schronie, dla wlasnego bezpieczenstwa.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    system("cls");
                    break;
                }
                case 't': {
                    srand(time(NULL));
                    int los = rand() % 10;
                    if (los > 2) {
                        printf("\n\nSluzba krolewska zatrzymala cie podczas twojej manifestacji na srodku placu, ludzie popadli w panike, a tym samym w tem-\npie ekspresowym wyslano cie do wiezienia na dozywocie za zlamanie tajemnicy panstwowej. Moze cie wypuszcza warunkowo\nza dobre sprawowanie, ale kto wie...\n");
                        printf("Nacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                        printf("Spedzasz w wiezieniu okolo 2 dni. Straznik wypuszcza cie w zwiazku z zagrozeniem atomowym. Okazuje sie, ze wsciekly\nKrasnograd grozi zrzuceniem bomby atomowej na Tramonto, jednak z tego co wiadomo, skutki zrzucenia jej dotkna wszystkie\nkrolestwa.\n");
                        printf("Nacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                    }
                    else {
                        printf("Udalo ci sie uciec przed sluzba, ale wywolales panike. Ludzie, ktorzy zwykle byli pogodni, zaczynaja watpic w sytuacje,\njednak pewna czesc podejrzewa, ze moze to byc dzielo Krasnogradu. Z powodu ogolnie dobrych stosunkow z kazdym z panstw,\ntemat milknie. Dzien dobiega konca.\n");
                    }
                    if (pyt2 == 't' && los < 3) {
                        printf("Nadchodzi kolejny dzien. Jest inaczej niz zwykle, robi sie nienaturalnie ciemno. Wlaczasz AranRadio.\n\n***WAZNY KOMUNIKAT*** Drodzy mieszkancy Aranvale, znacznie wzroslo rozprzestrzenianie sie choroby w spoleczenstwie,\nprosimy pozostac w domach na tyle ile to mozliwe. Nie korzystajcie z wody kranowej bezposrednio, zalecane przefiltrowa-\nnie i przegotowanie 3-krotnie przed uzyciem. Krol Antonio jest zarazony rowniez. Badacze z Uniwersytetu Aranvale podej-\nrzewaja skazenie wody niebezpieczna toksyna przez Krolestwo Krasnograd.\n\nW panice chowasz sie w domowym schronie, po-\nnadto dowiadujesz sie, ze czesc spoleczestwa protestuje i zada konkretnych dzialan Palacu wobec sasiada Aranvale.\n\nCaly dzien spedzasz we wlasnym schronie, dla wlasnego bezpieczenstwa.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                    }
                }
                }
                printf("Jest 13 marca 1982r. Okazuje sie, ze ze zgromadzone zapasy sa niewystarczajace\nZastanawiasz sie, czy wyjsc na zewnatrz po kolejna porcje zapasow.");
                char pyt3;
                pyt3 = 'n';
                do {
                    if (!(pyt3 == 't' || pyt3 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nWychodzisz na zewnatrz? (ryzykujesz zachorowaniem): ([T]ak/[N]ie)");
                    scanf(" %c", &pyt3);
                    pyt3 = tolower(pyt3);
                } while (!(pyt3 == 't' || pyt3 == 'n'));
                switch (pyt3) {
                case 'n': {
                    printf("\n\nPozostales w schronie. Nic ci sie nie stalo, jednak slyszysz dzwiek alarmu bombowego.");
                    break;
                }
                case 't': {
                    srand(time(NULL));
                    int los = rand() % 10;
                    if (los > 5) {
                        printf("\nMomentalnie odczules objawy choroby, o ktorej bylo tak glosno. Twoj stan momentalnie sie pogarsza, probujesz wezwac pomoc, ale nie dociera ona na czas.\n\n Umarles! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nCudem nie zachorowales, ale zaczely wyc syreny alarmu bombowego. Uciekasz do swojego schronu ile sil w nogach.");
                    }
                    break;
                }
                }
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                getchar();
                system("cls");
                printf("BUUUUUM!\n\nOszolomiony wybuchem tracisz pojecie co sie dzieje. Dzien dobiega konca.");
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                system("cls");
                printf("Budzisz sie. Nie wiesz co wlasciwie sie wydarzylo, dlatego wlaczasz radio.\n\n*Drodzy Obywatele Krolestwa Aranvale. Chcielibysmy poinformowac, ze wczorajszego dnia stalo sie historyczne wydarzenie.\nKrolestwo Krasnograd uzylo swojego arsenalu atomowego, aby unicestwic nieprzyjaciela - Krolestwo Tramonto. Niestety sila\nrazenia byla na tyle silna, ze praktycznie nie istnieja wszystkie zabudowania na terenach skonfliktowanych krolestw,\na niestety rowniez naszego. Sporo osob zginelo, wiec jesli to slyszycie to macie szczescie. Zalecamy przystosowac sie do\nzycia w schronach, dopoki poziom promieniowania nie spadnie do poziomu bezpiecznego dla czlowieka. W sytuacjach krytycz-\nnych, mozna wyjsc na zewnatrz pod warunkiem ubranego olowianego stroju. PRZYPOMINAMY! Jesli miernik Geigera wskazuje\nwiecej niz 50 rentgenow, jest to skrajnie niebezpieczne wychodzic bez stroju, w stroju natomiast jesli wskazuje wiecej\nniz 100. To tyle na dzis! Pogodnego dnia!");
                srand(time(NULL));
                int atom = rand() % 500;
                printf("\nAktualny poziom promieniowania [w rentgenach]: %d", atom);
                printf("\n\nChcesz wyjsc z schronu, aby zobaczyc jak wyglada swiat po wybuchu bomby Krasnogradu.\nPamietaj, ze wychodzac mozesz ryzykowac zyciem!!");
                char pyt4;
                pyt4 = 'n';
                do {
                    if (!(pyt4 == 't' || pyt4 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nWychodzisz na zewnatrz? ([T]ak/[N]ie):");
                    scanf(" %c", &pyt4);
                    pyt4 = tolower(pyt4);
                } while (!(pyt4 == 't' || pyt4 == 'n'));
                switch (pyt4) {
                case 'n':
                {
                    printf("Ku trosce o wlasne bezpieczenstwo pozostales w schronie.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                case 't': {
                    if (atom >= 100) {
                        printf("Bylo to skrajnie nieodpowiedzialne, promieniowanie bylo za wysokie zeby przezyc. Nie zdazyles zobaczyc swiata,\nzanim cie ono zabilo.\n\nUmarles! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        if (atom >= 0 && atom < 100) {
                            printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                            printf("\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            printf("\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres. Konflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja.\nOd dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                            printf("\nNacisnij ENTER, aby zakonczyc...");
                            getchar();
                            return 0;
                        }
                    }
                }
                }
                srand(time(NULL));
                int atom1 = rand() % 100;
                printf("Minelo juz kilka dni od wybuchu. Postanawiasz w koncu wyjsc na zewnatrz.\n");
                printf("Aktualny poziom promieniowania [w rentgenach]: %d", atom1);
                char pyt5;
                pyt5 = 'n';
                do {
                    if (!(pyt5 == 't' || pyt5 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nZakladasz olowiany stroj? ([T]ak/[N]ie):");
                    scanf(" %c", &pyt5);
                    pyt5 = tolower(pyt5);
                } while (!(pyt5 == 't' || pyt5 == 'n'));
                switch (pyt5) {
                case 'n': {
                    if (atom1 >= 50) {
                        printf("Bylo juz tak blisko wyjscia.. jednak nie zalozyles olowianego stroju i promieniowanie cie zabilo..\n\nPrzegrales! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nWyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        printf("\n\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                }
                case 't': {
                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    printf("\n\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                    printf("\nNacisnij ENTER, aby zakonczyc...");
                    getchar();
                    return 0;
                }
                }
            }
            case 2: {
                printf("\n\nWitaj w Krolestwie Aranvale. Jako posel do twoich obowiazkow nalezy praca na rzecz krolestwa i doradzanie Krolowi.\nMajac taka posade masz realny wplyw na rozwoj wydarzen w krolestwie. Twoja kraina charakteryzuje sie wysokimi temperatu-\n-rami,zmuszajacymi do pozostawania w domach w godzinach popoludniowych. Choc twojemu krolestwu daleko do technologicznej\n czy militarnej dominacji, dzieki temu zyje ci sie lepiej, a atmosfera nie jest tak napieta, mimo panujacej w Europie\nZimnej Wojny");
                printf("\nDzis jest 10 marca 1982r.Dzien jak co dzien, pracujesz na dworze krolewskim i wykonujesz swoje codzienne obowiazki.\nDowiadujesz sie tez, ze w sasiedzkim krolestwie Tramonto dochodzi do zakazen poprzez kontakt z woda, jednak zrodlo nie\njest znane.Monitorujesz sytuacje, ale poki co w Aranvale nie wykryto zadnych przypadkow.\nNiestety klimatyzacja w twoim\nbiurze poselskim zepsula sie.\nCo robisz ? \n1.Ignorujesz temat i starasz sie przezyc bez klimatyzacji w tym upale.\n2.Wzywasz serwis do naprawy klimatyzacji");
                    int pyt1;
                pyt1 = 1;
                do {
                    if (!(pyt1 == 1 || pyt1 == 2))
                        printf("Niepoprawny format\n");
                    printf("\nTwoj wybor: ");
                    scanf("%d", &pyt1);
                } while (!(pyt1 == 1 || pyt1 == 2));
                switch (pyt1) {
                case 1: {
                    srand(time(NULL));
                    int los = (rand() % 10);
                    if (los > 8) {
                        printf("Upal byl na tyle wyczerpujacy, ze nie udalo ci sie go przezyc.\n\nUmarles!\n\nKONIEC GRY!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nUpal byl ciezki do przezycia, ale ledwo udalo ci sie go zniesc. ");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                    }
                    break;
                }
                case 2: {
                    printf("\nSerwis przyjezdza i naprawia klimatyzacje. Upal nie staje sie uciazliwy.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                }
                printf("Masz wrazenie, ze skroplona woda z klimatyzatora ma nienaturalna won, ale ignorujesz problem. Dzien dobiega konca.");
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                system("cls");
                printf("Nachodzi kolejny dzien. Jest 11 marca 1982r. Dowiadujesz sie, ze krol Antonio z ciekawosci zaczal szukac w nocy w palacu\nzrodla nieprzyjemnego aromatu wody, ktora byla cieknaca woda z twojego klimatyzatora. Ubrudzil sie przy tym, dlatego tez\nchcac umyc sie umyc, uzyl wody. Okazalo sie, ze ta woda byla najprawdopodbniej juz skazona. Doznal on identycznych sym-\nptomow co chorujacy w Tramonto.");
                printf("\nOd ciebie zalezy czy uznasz to za alarmujacy przypadek, czy raczej problem jednostkowy i czekasz na rozwoj sytuacji.\nCo robisz?\n1. Ukrywasz temat calkowicie.\n2. Informujesz spoleczenstwo o pierwszym wykryciu, ale ukrywasz, kto jest pierwszym zarazonym\n3. Informujesz spoleczestwo o pierwszym wykryciu i oglaszasz, ze jest nim Krol.\n(Narazasz sie na gniew Krola, mozesz stracic posade)");
                int pyt2;
                pyt2 = 1;
                do {
                    if (!(pyt2 > 0 && pyt2 < 4)) {
                        printf("Niepoprawny format\n");
                    }
                    printf("\nTwoj wybor: ");
                    scanf("%d", &pyt2);
                } while (!(pyt2 >= 1 && pyt2 <= 3));
                switch (pyt2) {
                case 1: {
                    printf("Zaczelo coraz wiecej ludzi chorowac. Oni sa zli na ciebie, poniewaz odkryli, ze to ty ukryles informacje o chorobie.\nW zwiazku z tym, dopadli cie i zatlukli na smierc.\n\nUmarles!!\n\n KONIEC GRY!");
                    printf("\nNacisnij ENTER, aby zakonczyc...");
                    getchar();
                    getchar();
                    return 0;
                }
                case 2: {
                    printf("\nSpoleczenstwo sie niepokoi, zaczyna gromadzic zapasy. Ponadto zalecasz, aby tworzyli schrony w celu zmniejszenia ryzyka\nzarazenia i gromadzili zapasy. Ty jednak podejrzewasz, ze zrodlem choroby moze byc toksyna spuszczona przez Krasnograd,\naby zaatakowac w ten sposob krolestwo Tramonto, ale nie podajesz tej informacji do publicznosci. Dzien dobiega konca.");
                    break;
                }
                case 3: {
                    int los1 = (rand() % 10);
                    if (los1 > 5) {
                        printf("\nSpoleczenstwo sie niepokoi, zaczyna gromadzic zapasy. Ponadto zalecasz, aby tworzyli schrony w celu zmniejszenia ryzyka zarazenia i gromadzili zapasy. Ty jednak podejrzewasz, ze zrodlem choroby moze byc toksyna spuszczona przez Krasnograd, aby zaatakowac w ten sposob krolestwo Tramonto, ale nie podajesz tej informacji do publicznosci.\nKrol sie wsciekl, poniewaz nie chcial, aby ta informacja wyplynela teraz, bo grozi jego reputacji. W zwiazku z tym, zwalnia cie i wydala z dworu.\n\nZalamales sie i popelniles samobojstwo.\n\n\Przegrales! Koniec gry!");
                        printf("Nacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nSpoleczenstwo sie niepokoi, zaczyna gromadzic zapasy. Ponadto zalecasz, aby tworzyli schrony w celu zmniejszenia ryzyka zarazenia i gromadzili zapasy. Ty jednak podejrzewasz, ze zrodlem choroby moze byc toksyna spuszczona przez Krasnograd, aby zaatakowac w ten sposob krolestwo Tramonto, ale nie podajesz tej informacji do publicznosci. Udalo ci sie zachowac prace po konfrontacji z krolem. Dzien dobiega konca.");
                        break;
                    }
                }
                }
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                getchar();
                system("cls");
                printf("Nadchodzi kolejny dzien. Choroba rozprzestrzenila sie w spoleczestwie, dlatego zalecasz spoleczestwu, aby pozostawali\nw domach na tyle ile to mozliwe. Niestety dowiadujesz sie tez, ze twoje przypuszczenia dotyczace Krasnogradu potwier-\ndzil wywiad, ktory przebywa w Krasnogradzie. Sytuacja pomiedzy Tramonto i Krasnogradem staje sie coraz bardziej napieta.\nKrasnograd grozi zrzuceniem bomby.\n\nDzien dobiega konca.");
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                system("cls");
                printf("Jest 13 marca 1982r. Przyszla informacja o planowym zrzuceniu bomby atomowej. Wszyscy wiezniowie zostaja zwolnieni,\noglasza sie alarm bombowy. Zaleca sie przebywanie wszystkich mieszkancow w schronach.");
                printf("Wykorzystujac funkcje posla, masz plan udac sie dyplomatycznie do Krasnogradu, aby powstrzymac tamtejsza wladze przed\nzrzuceniem smiercionosnej bomby.");                char pyt3;
                pyt3 = 'n';
                do {
                    if (!(pyt3 == 'n' || pyt3 == 't'))
                        printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie.");
                    printf("\nCzy decydujesz sie tam udac[T/N]?");
                    scanf(" %c", &pyt3);
                } while (!(pyt3 == 'n' || pyt3 == 't'));
                switch (pyt3) {
                case 'n': {
                    printf("\mNie udajesz sie do Krasnogradu, zrzucenie bomby to kwestia czasu.");
                    break;
                }
                case 't': {
                    printf("Jako sojusznik Krasnogradu udajesz sie jako dyplomata. Przedstawiajac solidne argumenty udaje ci sie przekonac\ntamtejsza wladze do porzucenia planu zrzucenia bomby.");
                    printf("\n\nTym sposobem opanowales napieta sytuacje w regionie. Ludzie sa ci wdzieczni za ten czyn. Zycie toczy sie beztrosko, jak dawniej.\n\n Gratuluje! Przetrwales do konca tego trudnego okresu!\nKoniec gry!");
                    printf("\nNacisnij ENTER, aby zakonczyc...");
                    getchar();
                    getchar();
                    return 0;
                }
                }
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                getchar();
                system("cls");
                printf("BUUUUUUM!\n\n");
                printf("\nNacisnij ENTER, aby kontynuowac...");
                getchar();
                system("cls");
                printf("Tak jak planowal Krasnograd, tak tez uczynil. sila razenia bomby byla na tyle silna, ze we wszystkich krolestwach\nnie ostal sie zaden budynek. Na ziemi nie ma nic. Ci, ktorzy przebywali na zewnatrz, nie przezyli. Ty sam zas halasem\nwybuchu zostales oszolomiony i straciles pojecie co sie dzieje. Przed wyjsciem upewnij sie, ze nie ma wysokiego poziomu\npromieniowania. Zalecane jest, aby nie wychodzic z schronu jesli przekracza ono poziom 100 rentgenow, jesli\nprzekracza 50, nalezy zalozyc olowiany stroj. Jesli nie przekracza obu wartosci, mozna bezpiecznie wyjsc.\n\n");
                srand(time(NULL));
                int atom = rand() % 500;
                printf("\nAktualny poziom promieniowania [w rentgenach]: %d", atom);
                printf("\n\nChcesz wyjsc z schronu, aby zobaczyc jak wyglada swiat po wybuchu bomby Krasnogradu.\nPamietaj, ze wychodzac mozesz ryzykowac zyciem!!");
                char pyt4;
                pyt4 = 'n';
                do {
                    if (!(pyt4 == 't' || pyt4 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nWychodzisz na zewnatrz? ([T]ak/[N]ie):");
                    scanf(" %c", &pyt4);
                    pyt4 = tolower(pyt4);
                } while (!(pyt4 == 't' || pyt4 == 'n'));
                switch (pyt4) {
                case 'n':
                {
                    printf("Ku trosce o wlasne bezpieczenstwo pozostales w schronie.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                case 't': {
                    if (atom >= 100) {
                        printf("Bylo to skrajnie nieodpowiedzialne, promieniowanie bylo za wysokie zeby przezyc.\nNie zdazyles zobaczyc swiata, zanim cie ono zabilo.\n\nUmarles! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        if (atom >= 0 && atom < 100) {
                            printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                            printf("\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                            printf("\nNacisnij ENTER, aby zakonczyc...");
                            getchar();
                            return 0;
                        }
                    }
                }
                }
                srand(time(NULL));
                int atom1 = rand() % 100;
                printf("Minelo juz kilka dni od wybuchu. Postanawiasz w koncu wyjsc na zewnatrz.\n");
                printf("Aktualny poziom promieniowania [w rentgenach]: %d", atom1);
                char pyt5;
                pyt5 = 'n';
                do {
                    if (!(pyt5 == 't' || pyt5 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nZakladasz olowiany stroj? ([T]ak/[N]ie):");
                    scanf(" %c", &pyt5);
                    pyt5 = tolower(pyt5);
                } while (!(pyt5 == 't' || pyt5 == 'n'));
                switch (pyt5) {
                case 'n': {
                    if (atom1 >= 50) {
                        printf("Bylo juz tak blisko wyjscia.. jednak nie zalozyles olowianego stroju i promieniowanie cie zabilo..\n\nPrzegrales! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nWyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        printf("\n\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                }
                case 't': {
                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                    printf("\nNacisnij ENTER, aby zakonczyc...");
                    getchar();
                    return 0;
                }
                }
            }
            }
        }
        case 2: {
            system("cls");
            printf("\nWybierz bohatera:\n1. Hydraulik\n2. Wladca\n");
            charKras = 1;
            do {
                if (!(charKras > 0 && charKras < 3))
                    printf("\nNiepoprawny format\n");
                printf("\nWprowadz liczbe:");
                scanf("%d", &charKras);
            } while (!(charKras > 0 && charKras < 3));
            switch (charKras)
            {
            case 1: {
                printf("\n\nWitaj w Krolestwie Krasnogradu. Jako hydraulik z wyksztalcenia, ludzie darza cie zaufaniem pomimo ogolnego braku zau-\nfania i wszechobecnego donosicielstwa. To od ciebie zalezy, czy to zaufanie wobec spoleczenstwa dobrze wykorzystasz\nw tej nedznej krainie, mocno zaangazowanej w Zimna Wojne w Europie. Sroga pogoda, ciazaca nad Krasnogradem,\nnie ulatwia w probach uzyskania dobrych zniw, przez co ludzie gloduja i zyja biednie.");
                printf("\n\nJest 10 marca 1982r. Budzisz sie o 6 rano jak co dzien. Jesz sniadanie popijajac herbata i sluchasz radia.\n\n*Witajcie Towarzysze, dzis jest 10 marca 1982r. Dzis nalezy zachowac ostroznosc z powodu zlych warunkow atmosferycznych.\nSilne mgle nie ulatwiaja poruszania sie po miescie. To tyle w wiadomosciach Radia Sojuz!\nPamietajcie, Krasnograd to nie tylko narod, Krasnograd to potega!*");
                printf("\nDochodzi godzina 7:00. Dostajesz telefon. Jestes zdziwiony, ze tak wczesnie, poniewaz prace rozpoczynasz o 8 rano.");
                char pyt1;
                pyt1 = 'n';
                do {
                    if (!(pyt1 == 'n' || pyt1 == 't')) {
                        printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie.");
                    }
                    printf("\nOdbierasz?[T/N]: ");
                    scanf(" %c", &pyt1);
                    pyt1 = tolower(pyt1);
                } while (!(pyt1 == 'n' || pyt1 == 't'));
                switch (pyt1) {
                case 't':
                {
                    printf("-Dddzien dobry..??\n-Witajcie Towarzyszu Wodnikow. Przepraszamy, ze tak wczesnie, ale jest to sprawa wysokiej wagi. Wiemy, ze trudnicie sie\nw hydraulice i prace wykonujecie dobrze, dlatego tez mamy dla Was zlecenie specjalne.\n-Jakie?\n-Towarzyszu, musicie stawic sie u Najwyzszego Wladcy za 2 godziny. Szczegolow dowiecie sie na miejscu,\nradze sie nie sprzeciwiac.\n-Dobrze, pojde sie juz przygotowywac. Do zobaczenia.\nDo widzenia.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                case 'n':
                {
                    printf("\nNie odbierajac telefonu nie jestes w porzadku wobec wladzy. Przychodza do twojego mieszkania agenci Federalnej Sluzby\nBezpieczenstwa i znmuszaja cie do pojechania z nimi na dwor Wladcy. Informuja cie, ze ma on dla ciebie zlecenie\nspecjalne, szczegolow dowiesz sie na miejscu.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                }
                }
                printf("Znajdujesz sie w kancelarii Najwyzszego Wladcy. Doprowadzono cie z ochroniarzami. Na miejscu opuszczaja cie\ni zostajesz sam z Wladca.\n\n-Dzien dobry..\n-Dzien dobry Towarzyszu, dobrze cie widziec. Jak juz wiesz, mam dla ciebie zlecenie specjalne. Nie mowilem tego\nprzez telefon dlatego, ze jest to sprawa najwyzszej wagi. Wierze, ze masz swiadomosc, ze Tramonto jest naszym wrogiem.\nDlatego w zwiazku z tym, twoim zadaniem jest 'niby' naprawienie rur wodociagowych na rzece. Tak zostanie to podane\nw mediach, natomiast realnie to po prostu przyjdziesz i poluzujesz pare srubek, a my kiedy robota zostanie wykonana,\nzamiast wody wylejemy chemikalia. Tym sposobem cale Tramonto, ktore jak wiadomo korzysta glownie z tej wody,\nzostanie wyeliminowane.");
                char pyt2;
                pyt2 = 'n';
                do {
                    if (!(pyt2 == 'n' || pyt2 == 't')) {
                        printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie.");
                    }printf("Podejmujesz sie zadania?[T/N]: ");
                    scanf(" %c", &pyt2);
                    pyt2 = tolower(pyt2);
                } while (!(pyt2 == 'n' || pyt2 == 't'));
                switch (pyt2) {
                case 'n':
                {
                    printf("\nNie zgadzajac sie na wspolprace z Wladca, automatycznie samowolnie zostajesz skazany za znieslawienie przywodcy.\nTrafiasz do wiezienia na dozywocie.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    printf("Umarles w torturach.\n\nKoniec gry!");
                    printf("\nNacisnij ENTER, aby zakonczyc...");
                    getchar();
                    getchar();
                    return 0;
                }
                case 't':
                {
                    printf("Wladca jest z ciebie zadowolony. Informuje, ze ponadto jesli cel zostanie spelniony, zostaniesz odznaczony orderem.");
                    printf("Nacisnij ENTER, aby kontynowac...");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                }
                printf("Dotarles do przepieknego miejsca, doliny, co jest pewnym paradoksem, kiedy spogladasz na ponure miasto na nizinach,\nw ktorym mieszkasz. Okolica jest otoczona wysokimi gorami, na ktorych zalega jeszcze snieg na ich szczytach. W dolinie\nznajduje sie rwaca rzeka, z ktorej jest wyprowadzana woda do calego Krasnogradu, jak i reszty krolestw.\nZgodnie z zadaniem, wykonujesz swoja prace pomyslnie. Dzien dobiega konca.");
                printf("Nacisnij ENTER, aby kontynowac...");
                getchar();
                system("cls");
                printf("Jest 11 marca. W Radiu Sojuz, jak codziennie o 6 rano nadaja wiadomosci z swiata. \n\n*Witamy Towarzyszy w tym pieknym kolejnym dniu. We wczorajszym dniu doszlo do awarii wodociagow, na wskutek czego\nzalecane jest zachowanie ostroznosci podczas kontaktu z woda w zwiazku z wyciekiem. Podejrzewa sie, ze to dywersanci\nz Tramonto brali w tym udzial. Odnotowano juz pierwsze przypadki zachorowania nieznana substancja, ale na szczescie nie\nu nas. To tyle na dzis. Pamietajcie, Krasnograd to nie tylko narod - Krasnograd to potega!*\n\nTy zas po prostu wykonujesz prace dzien jak co dzien jako hydraulik. Dzien dobiega konca.");
                printf("Nacisnij ENTER, aby kontynowac...");
                getchar();
                system("cls");
                printf("Jest 12 marca. Obawiasz sie, ze prawda wyjdzie na jaw i pod pretekstem zlego samopoczucia, nie pracujesz dzis. Nie zmie-\nnia to faktu, ze pozostajesz w ciagu codziennej rutyny i wstajesz o 6, jesz sniadanie popijajac herbata i sluchasz wia-\ndomosci w Radiu Sojuz. *Witajcie Towarzysze! Wiadomosc z ostatniej chwili! Krolestwo Tramonto oskarza nasz Narod o rze-\nkome celowe zanieczyszczenie wody. Tamtejsza ludnosc protestuje, oskarza nas, a my Krasnograd nie lubimy bezpodstawnych\noskarzen. Ich zdaniem to my przyczynilismy sie do tylu zachorowan w zwiazku z toksyna w wodzie. Najwyzszy Wladca\nostrzegl tamtejsze wladze, ze za takie oskarzenia odpowiedz bedzie adekwatna i nie bedzie sie wahal uzyc naszego arse-\nnalu atomowego. Przypominamy, ze bomba najnowszej generacji ma spoooora sile razenia.*\n\nSpedzasz caly dzien w domu,\njak gdyby nigdy nic. Dzien dobiega konca.");
                printf("Nacisnij ENTER, aby kontynowac...");
                getchar();
                system("cls");
                printf("Budzisz sie w nocy. Nie mozesz dalej spac. Uswiadomiles sobie, ze bomba o ktorej byla mowa, jest niszczycielska.\nZastanawiasz sie, czy ostrzec sasiadow i zachecic ich do schowania sie w schronie.");
                char pyt3;
                pyt3 = 'n';
                do {
                    if (!(pyt3 == 'n' || pyt3 == 't')) {
                        printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie.");
                    }printf("Ostrzegasz ich?[T/N]: ");
                    scanf(" %c", &pyt3);
                    pyt3 = tolower(pyt3);
                } while (!(pyt3 == 'n' || pyt3 == 't'));
                switch (pyt3) {
                case 't':
                {
                    srand(time(NULL));
                    int los2 = rand() % 6;
                    if (los2 > 2) {
                        printf("Ludzie ci dziekuja, ze ich ostrzegasz i razem z toba ida sie przygotowywac przed ewentualna bomba.\nChowaja sie razem z toba w schronie.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                    }
                    else {
                        printf("Ludzie uwazaja cie za panikarza i cie ignoruja, ale nie powstrzymuje cie to przed dalszym przygotowywaniem sie\ndo schronu.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                    }
                    break;
                }
                case 'n':
                {
                    printf("Ludzie uwazaja cie za kogos, kto planuje jakas konspiracje i donosza na ciebie.\nZbiera cie sluzba FSB i zamyka w wiezieniu z tytulu konspiracji wobec Narodu na dozywocie");
                    printf("Nacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    printf("\nUmarles w celi. Koniec gry!");
                    printf("Nacisnij ENTER, aby zakonczyc...");
                    getchar();
                    getchar();
                    return 0;
                }
                }
                printf("Miales dobre przeczucie...");
                printf("Nacisnij ENTER, aby kontynuowac...");
                getchar();
                printf("BUUUUM!");
                printf("Nacisnij ENTER, aby kontynuowac...");
                getchar();
                printf("Wiekszosc ludnosci nie spodziewalo sie, ze bomba dotknie rowniez Krasnograd. Ci, ktorzy pozostali w mieszkaniach\nnie przezyli. Ty na szczescie pozostales w schronie i jestes caly. Informacja publiczna informuje, ze niebezpieczne jest\nteraz wychodzic na zewnatrz, jesli to konieczne zalecane jest zalozenie olowianego stroju, jednak dopuszczalna niezabi-\njajaca wartosc promieniowania, aby wyjsc w stroju to 100 rentgenow, natomiast bez stroju to 50 rentgenow.");
                srand(time(NULL));
                int atom = rand() % 500;
                printf("\nAktualny poziom promieniowania [w rentgenach]: %d", atom);
                printf("\n\nChcesz wyjsc z schronu, aby zobaczyc jak wyglada swiat po wybuchu bomby Krasnogradu.\nPamietaj, ze wychodzac mozesz ryzykowac zyciem!!");
                char pyt4;
                pyt4 = 'n';
                do {
                    if (!(pyt4 == 't' || pyt4 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nWychodzisz na zewnatrz? ([T]ak/[N]ie):");
                    scanf(" %c", &pyt4);
                    pyt4 = tolower(pyt4);
                } while (!(pyt4 == 't' || pyt4 == 'n'));
                switch (pyt4) {
                case 'n':
                {
                    printf("Ku trosce o wlasne bezpieczenstwo pozostales w schronie.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    break;
                }
                case 't': {
                    if (atom >= 100) {
                        printf("Bylo to skrajnie nieodpowiedzialne, promieniowanie bylo za wysokie zeby przezyc.\nNie zdazyles zobaczyc swiata, zanim cie ono zabilo.\n\nUmarles! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        if (atom >= 0 && atom < 100) {
                            printf("Wyszedles na zewnatrz i jestes w wielkim szoku.\nNie ma totalnie nic, a pyl po wybuchu nadal sie unosi. Jestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                            printf("\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            printf("\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                            printf("\nNacisnij ENTER, aby zakonczyc...");
                            getchar();
                            return 0;
                        }
                    }
                }
                }
                srand(time(NULL));
                int atom1 = rand() % 100;
                printf("Minelo juz kilka dni od wybuchu. Postanawiasz w koncu wyjsc na zewnatrz.\n");
                printf("Aktualny poziom promieniowania [w rentgenach]: %d", atom1);
                char pyt5;
                pyt5 = 'n';
                do {
                    if (!(pyt5 == 't' || pyt5 == 'n')) {
                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                    }
                    printf("\nZakladasz olowiany stroj? ([T]ak/[N]ie):");
                    scanf(" %c", &pyt5);
                    pyt5 = tolower(pyt5);
                } while (!(pyt5 == 't' || pyt5 == 'n'));
                switch (pyt5) {
                case 'n': {
                    if (atom1 >= 50) {
                        printf("Bylo juz tak blisko wyjscia.. jednak nie zalozyles olowianego stroju i promieniowanie cie zabilo..\n\nPrzegrales! Koniec gry!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nWyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        printf("\n\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                        printf("\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                }
                case 't': {
                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                    printf("\nNacisnij ENTER, aby zakonczyc...");
                    getchar();
                    return 0;
                }
                }
            }
            case 2: {
                printf("\n\nWitaj w Krolestwie Krasnogradu. Jako wladca i tym samym najwazniejsza glowa tejze krainy, jestes odpowiedzialny za cale\nspoleczenstwo, to na twoich barkach spoczywa obowiazek zapewnienia bezpieczenstwa i dobrobytu. Skupiasz sie jednak\nza bardzo na panujacej w Europie Zimnej Wojnie, co skutkuje ogolnym glodem i nedza, z czego twoi poddani nie sa\nzadowoleni. Sroga pogoda, ciazaca nad twoim krolestwem, nie ulatwia w probach uzyskania dobrych zniw.");
                printf("Jest 10 marca 1982r. Kazdy przynalezny twojej wladzy wie, ze odwiecznym wrogiem Krasnogradu jest Tramonto.\nW zwiazku z tym planujesz, jak utrzec nosa wrogowi. Masz do wyboru dwie opcje:\n1. Zrzucic bombe atomowa na teren Tramonto (ryzykowne!)\n2. Skazic wode chemikaliami - spowoduje wywolanie choroby u osob, ktore mialy kontakt z ta woda.");
                int pyt1;
                pyt1 = 1;
                do {
                    if (!(pyt1 > 0 && pyt1 < 3))
                        printf("Niepoprawny format");
                    printf("\nCo wybierasz?: ");
                    scanf("%d", &pyt1);
                } while (!(pyt1 > 0 && pyt1 < 3));
                switch (pyt1)
                {
                case 1:
                {
                    printf("Postanawiasz zrzucic bombe atomowa. Twoi podwladni infomuja cie, ze ma ona taka moc, ze teren Krasnogradu,\nTramonto oraz Aranvale moze zniknac z powierzchni ziemi.");
                    char pyt2;
                    pyt2 = 't';
                    do {
                        if (!(pyt2 == 'n' || pyt2 == 't'))
                            printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie.");
                        printf("\nCzy zarzadzasz alarm bombowy aby cala ludnosc Krasnogradu poszla do schronow([T]ak/[N]ie)?");
                        scanf(" %c", &pyt2);
                        pyt2 = tolower(pyt2);
                    } while (!(pyt2 == 'n' || pyt2 == 't'));
                    switch (pyt2) {
                    case 'n':
                    {
                        printf("Zrzuciles bombe, ale nikogo nie wyslales do schronu. Zabiles wszystkich, ale przy tym tez siebie.");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        printf("\nUmarles! Koniec gry!!\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                    case 't':
                    {
                        printf("\nZrzuciles bombe, ale twoi ludzie sa bezpieczni. Zabiles wszystkich, ktorzy pozostali na zewnatrz. Zrownales z ziemia\nwszystkie zabudowania na terenach wszystkich krolestw. Dawka smiertelna promieniowania z zalozonym olowianym strojem\nwynosi 100 rentgenow. Bez zalozonego stroju wynosi 50 rentgenow.");
                        srand(time(NULL));
                        int atom = rand() % 500;
                        printf("\nAktualny poziom promieniowania [w rentgenach]: %d", atom);
                        printf("\n\nChcesz wyjsc z schronu, aby zobaczyc jak wyglada swiat po wybuchu bomby. Pamietaj, ze wychodzac mozesz ryzykowac zyciem!!");
                        char pyt4;
                        pyt4 = 'n';
                        do {
                            if (!(pyt4 == 't' || pyt4 == 'n')) {
                                printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                            }
                            printf("\nWychodzisz na zewnatrz? ([T]ak/[N]ie):");
                            scanf(" %c", &pyt4);
                            pyt4 = tolower(pyt4);
                        } while (!(pyt4 == 't' || pyt4 == 'n'));
                        switch (pyt4) {
                        case 'n':
                        {
                            printf("Ku trosce o wlasne bezpieczenstwo pozostales w schronie.");
                            printf("\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            system("cls");
                            srand(time(NULL));
                            int atom1 = rand() % 100;
                            printf("Minelo juz kilka dni od wybuchu. Postanawiasz w koncu wyjsc na zewnatrz.\n");
                            printf("Aktualny poziom promieniowania [w rentgenach]: %d", atom1);
                            char pyt5;
                            pyt5 = 'n';
                            do {
                                if (!(pyt5 == 't' || pyt5 == 'n')) {
                                    printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                                }
                                printf("\nZakladasz olowiany stroj? ([T]ak/[N]ie):");
                                scanf(" %c", &pyt5);
                                pyt5 = tolower(pyt5);
                            } while (!(pyt5 == 't' || pyt5 == 'n'));
                            switch (pyt5) {
                            case 'n': {
                                if (atom1 >= 50) {
                                    printf("Bylo juz tak blisko wyjscia.. jednak nie zalozyles olowianego stroju i promieniowanie cie zabilo..\n\nPrzegrales! Koniec gry!");
                                    printf("\nNacisnij ENTER, aby zakonczyc...");
                                    getchar();
                                    getchar();
                                    return 0;
                                }
                                else {
                                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nCieszysz sie z faktu, ze zyjesz, a glowny wrog zostal wyeliminowany.");
                                    printf("\nNacisnij ENTER, aby kontynuowac...");
                                    getchar();
                                    getchar();
                                    printf("\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                    printf("\nNacisnij ENTER, aby zakonczyc...");
                                    getchar();
                                    return 0;
                                }
                            }
                            case 't': {
                                printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nCieszysz sie z faktu, ze zyjesz, a glowny wrog zostal wyeliminowany.");
                                printf("\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                getchar();
                                printf("\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                printf("\nNacisnij ENTER, aby zakonczyc...");
                                getchar();
                                return 0;
                            }
                            }
                        }
                        case 't': {
                            if (atom >= 100) {
                                printf("Bylo to skrajnie nieodpowiedzialne, promieniowanie bylo za wysokie zeby przezyc. Nie zdazyles zobaczyc swiata, zanim cie ono zabilo.\n\nUmarles! Koniec gry!");
                                printf("\nNacisnij ENTER, aby zakonczyc...");
                                getchar();
                                getchar();
                                return 0;
                            }
                            else {
                                if (atom >= 0 && atom < 100) {
                                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nCieszysz sie z faktu, ze zyjesz, a glowny wrog zostal wyeliminowany.");
                                    printf("\nNacisnij ENTER, aby kontynuowac...");
                                    getchar();
                                    getchar();
                                    printf("\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                    printf("\nNacisnij ENTER, aby zakonczyc...");
                                    getchar();
                                    return 0;
                                }
                            }
                        }
                        }
                    }
                    }
                }
                case 2: {
                    printf("Wynajales fachowca od hydrauliki. Prace przebiegly pomyslnie. Dzien dobiegl konca.\n");
                    printf("\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    printf("Jest 11 marca 1982r. Wszystko idzie zgodnie z planem, coraz wiecej osob choruje na nieznana chorobe w wyniku kontaktu\nczlowieka z woda skazona chemikaliami. Dzien dobiega konca\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    system("cls");
                    printf("Jest 12 marca 1982r. Dochodza do ciebie sygnaly protestow ludzi z Tramonto, oskarzaja Twoj narod, ze to wlasnie zrodlo\nskazenia wody ma miejsce w Krasnogradzie. Oczywiste jest to, ze to prawda, ale zeby nie spalic sie publicznie, zaprze-\nczasz tym informacjom i taka narracje przekazujesz do lokalnych mediow. Dla zaprzyjaznionego Aranvale jest to pewne, ze\nbedziesz chcial zrzucic bombe na Tramonto, dlatego dyplomatycznie przychodzi do ciebie posel z tamtego Krolestwa\ni probuje argumentami powstrzymac cie od tego czynu.");
                    srand(time(NULL));
                    int los1 = rand() % 4;
                    if (los1 >= 2) {
                        printf("\nPoslowi z Aranvale nie udalo sie ciebie powstrzymac. Przechodzisz do procedury zakonczenia batalii\npomiedzy Krasnogradem a Tramonto. Dzien dobiegl konca.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                        printf("Jest 13 marca 1982r. Ten dzien odznaczy sie w dziejach historii (o ile ktos przezyje). Podejmiesz sie detonacji\nnajnowszej generacji bomby atomowej na Tramonto.\n\nPrzechodzisz do specjalnego pomieszczenia przygotowanego do detonacji bomby.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                        printf("Widzisz przed soba konsole z ekranem obslugi bomby. \n\nBomba gotowa do detonacji. Nacisnij [D] (mala litera), aby zdetonowac: ");
                        while (getchar() != 'd');

                        char bomb1;
                        bomb1 = 't';
                        do {
                            if (!(bomb1 == 't')) {
                                printf("Potwierdzic mozna tylko litera (t). Sprobuj ponownie.\n");
                            }
                            printf("Potwierdz[T]: ");
                            scanf(" %c", &bomb1);
                            bomb1 = tolower(bomb1);
                        } while (!(bomb1 == 't'));
                        printf("Bomba zdetonowana.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                        printf("Byles tak zdeterminowany, aby unicestwic wroga, ze zrzucajac bombe unicestwiles samego siebie.\nBomba zdetonowala wszystkie trzy krolestwa wokol wraz z twoim.\n\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        printf("\nUmarles! Koniec gry!\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                    else {
                        printf("\nPoslowi z Aranvale udalo sie ciebie powstrzymac. Postanawiasz porzucic pomysl bombowy oraz pogodzic sie z Tramonto.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        printf("\n\nGratulacje! Koniec gry! Kazdy zyje, jak rowniez i ty!\nNacisnij ENTER, aby zakonczyc");
                        getchar();
                        return 0;
                    }
                }
                }
            }
            }
        }
        case 3: {
                system("cls");
                printf("\nWybierz bohatera:\n1. Rybak\n2. Zolnierz\n");
                charTra = 1;
                do {
                    if (!(charTra > 0 && charTra < 3))
                        printf("\nNiepoprawny format\n");
                    printf("\nWprowadz liczbe:");
                    scanf("%d", &charTra);
                } while (!(charTra > 0 && charTra < 3));
                switch (charTra)
                {
                case 1: {
                    printf("\n\nWitaj w Krolestwie Tramonto. Jako rybak jestes zobowiazany do kilkudniowych wypraw na glebokie morze. Twoje krolestwo\njest jednym z mrozniejszych, polozone nad owym morzem. Zycie tutaj toczy sie powolnie i z dnia na dzien. Nie panuje\nwielki podzial spoleczenstwa, a wszyscy w wiekszym lub mniejszym stopniu zyja na podobnym poziomie. Mimo braku narze-\nkania na krolestwo jako indywidualne, nie mozna przeoczyc napietej atmosfery, ktora aktualnie panuje w Europie. Masz na-\ndzieje, ze ten rok bedzie lepszy niz wszystkie poprzednie pod tym względem.");
                    printf("\nJest 10 marca. Dzien jak co dzien, zbierasz sie do wyplyniecia na morze. Zabierasz ze soba potrzebny asortyment\ntaki jak np. sieci na ryby, paliwo do kutra, skrzynki na zdobycze i jakis noz, bo lubisz czasem taka swieza rybke zjesc.\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    getchar();
                    system("cls");
                    printf("Wyplywasz na wode, jednak zauwazasz, ze ma ona podejrzanie chemiczny zapach. Ponadto widzisz, ze nie jest ona przej-\nrzysta jak zawsze, wyglada jakby zostal spuszczony jakis olej albo benzyna. Nie stanowi to jednak powodu do zmartwień,\nbo ryby ktore wyciagasz z sieci nadal sa zywe, tak jak zawsze i zgodnie z tradycja bierzesz jedna rybe na sprobowanie.\n\n");
                    char pyt1;
                    pyt1 = 't';
                    do {
                        if (!(pyt1 == 'n' || pyt1 == 't'))
                            printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie. ");
                        printf("Czy podejmujesz sie jej konsumpcji? [T/N]:");
                        scanf(" %c", &pyt1);
                        pyt1 = tolower(pyt1);
                    } while (!(pyt1 == 'n' || pyt1 == 't'));
                    switch (pyt1) {
                    case 'n': {
                        printf("\nPowachales rybe, jednak wydziela sie z niej silny odor. Postanowiles, ze nie zjesz jej bo mogloby byc to zbyt ryzykowne.\nPorzucasz dalsze polowy, a ryby zlowione zrzucasz do morza i wracasz kutrem do portu.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                        break;
                    }
                    case 't': {
                        printf("\nPowachales rybe, jednak odor wydzielajacy sie z niej nie przeszkodzil ci w konsumpcji.\n");
                        int los;
                        srand(time(NULL));
                        los = rand() % 10;
                        if (los > 2) {
                            printf("Zignorowales nieprzyjemny posmak tej ryby. Okazalo sie, ze w rybie, jak i wodzie byla trucizna. Zmarles z skutkiem natychmiastowym.\n\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            printf("\nUmarles! Koniec gry!!\n\nNacisnij ENTER, aby zakonczyc...");
                            getchar();
                            return 0;
                        }
                        else {
                            printf("Zignorowales nieprzyjemny posmak tej ryby. Okazalo sie, ze w rybie, jak i wodzie byla trucizna. Cudem twoj organizm\ndal rade ja zmetabolizowac i zyjesz. Aby nie ryzykowac zyciem innych, postanawiasz wyrzucic do wody to co zlowiles\ni wracasz kutrem do portu. Nie byl to udany dzien na polowy.\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            system("cls");
                        }
                        break;
                    }
                    }
                    printf("\nPo powrocie do domu, niezwlocznie bierzesz telefon, dzwonisz na numer alarmowy i zglaszasz to niebezpieczne odkrycie.\nOkazuje sie, ze nie jestes pierwszy. Ludzie choruja wlasnie po kontakcie z woda. Specjalne jednostki jada zweryfikowac\nzrodlo skazenia.\n\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    printf("\nJednostki specjalne potwierdzaja skazenie wody. Ich zdaniem zrodlem skazenia najprawdopodobniej moze byc zrzut chemi-\nkaliow na terenie Krasnogradu. I taka informacja jest kierowana do rzadu. Dzien dobiega konca.\n\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    system("cls");
                    printf("Jest 11 marca. Wstajesz jak zwykle rano i wlaczasz wiadomosci poranne w telewizji. Dowiadujesz sie, ze faktycznie pot-\nwierdzono zakazenie chemikaliami wszystkich akwenow wodnych w Tramonto, zrodlem skazenia jest spust chemikaliow na tere-\nnie Krasnogradu. Rzad oglosil, ze wysle odpowiednie pismo do wladz Krasnogradu, w mysl ktorego zada wyjasnien. Sporo-\nludzi zachorowalo, dlatego tez rzad zaleca stosowanie wody butelkowanej do wszelakich czynnosci.\n\nW zwiazku z takimi wiesciami postanawiasz pozostac w domu, zajac sie innymi rzeczami. Dzien dobiega konca.\n\nNacisnij ENTER, aby kontynuowac...");
                    getchar();
                    system("cls");
                    printf("Jest 12 marca. Wstajesz i ogladasz poranne wiadomosci. Sytuacja staje sie rozwojowa. Krasnograd nie przyznaje sie do\nrzekomego spustu chemikaliow i uwaza, ze to wina Tramonto. Ponadto informuje, ze za takie oskarzenia, ktore sa wedlug\nnich bezpodstawne, odpowie stanowczo i skutecznie.\n\nDostajesz od sasiada informacje, zeby zaczac gromadzic rzeczy do\nschronu, a najlepiej sie do niego przeniesc. Wytlumaczyl ci, ze Krasnograd jest nieobliczalny i posiada spory arsenal\natomowy, ponadto sytuacja polityczna miedzy Tramonto i Krasnogradem ciagle pozostaje napieta, wiec jego zdaniem rozsadne\nbedzie przewidziec ewentualny zrzut bomby atomowej na Tramonto.\n");
                    char pyt2;
                    pyt2 = 'n';
                    do {
                        if (!(pyt2 == 'n' || pyt2 == 't'))
                            printf("Nie tak! Wpisz N, jesli nie lub T, jesli tak.");
                        printf("\nSluchasz sie sasiada i organizujesz rzeczy do schronu?[T/N]: ");
                        scanf(" %c", &pyt2);
                        pyt2 = tolower(pyt2);
                    } while (!(pyt2 == 'n' || pyt2 == 't'));
                    switch (pyt2) {
                    case 'n': {
                        printf("\nWydaje ci sie, ze to co ci mowi sasiad to sa jakies brednie i nie wierzysz mu.\nChcesz przeczekac i przekonac sie na wlasnej skorze, co sie wydarzy. Dzien dobiega konca.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                        printf("Jest 13 marca. Rozlega sie glosny alarm bombowy, jednak tobie sie wydaje, ze to znowu tylko cwiczenia.\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                        printf("BUUUUUM!!\n\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                        printf("Niestety, tym razem to byla prawdziwa bomba. Wszyscy, ktorzy nie schowali sie do schronow nie przezyli.\nSila razenia byla tak silna, ze wszystkie zabudowania zniknely z powierzchni ziemi.\n\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        printf("\n\nUmarles!! Koniec gry!\n\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                        break;
                    }
                    case 't':
                    {
                        printf("\nPosluchales sie sasiada. Bierzesz wszystkie niezbedne przedmioty i pozywienie do schronu. Dzien dobiega konca.\n\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        system("cls");
                        printf("Jest 13 marca. Rozlega sie glosny alarm bombowy. Przyznajesz racje sasiadowi. Dobrze przewidzial, co sie knuje\nza granica. Po chwili slychac wielki huk\n\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                        printf("BUUUUUUM!\n");
                        printf("\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        system("cls");
                        printf("Tak jak planowal Krasnograd, tak tez uczynil. sila razenia bomby byla na tyle silna, ze we wszystkich krolestwach\nnie ostal sie zaden budynek. Na ziemi nie ma nic. Ci, ktorzy przebywali na zewnatrz, nie przezyli. Ty sam zas halasem\nwybuchu zostales oszolomiony i straciles pojecie co sie dzieje. Przed wyjsciem upewnij sie, ze nie ma wysokiego poziomu\npromieniowania. Zalecane jest, aby nie wychodzic z schronu jesli przekracza ono poziom 100 rentgenow, jesli\nprzekracza 50, nalezy zalozyc olowiany stroj. Jesli nie przekracza obu wartosci, mozna bezpiecznie wyjsc.\n\n");
                        srand(time(NULL));
                        int atom = rand() % 500;
                        printf("\nAktualny poziom promieniowania [w rentgenach]: %d", atom);
                        printf("\n\nChcesz wyjsc z schronu, aby zobaczyc jak wyglada swiat po wybuchu bomby Krasnogradu.\nPamietaj, ze wychodzac mozesz ryzykowac zyciem!!");
                        char pyt4;
                        pyt4 = 'n';
                        do {
                            if (!(pyt4 == 't' || pyt4 == 'n')) {
                                printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                            }
                            printf("\nWychodzisz na zewnatrz? ([T]ak/[N]ie):");
                            scanf(" %c", &pyt4);
                            pyt4 = tolower(pyt4);
                        } while (!(pyt4 == 't' || pyt4 == 'n'));
                        switch (pyt4) {
                        case 'n':
                        {
                            printf("Ku trosce o wlasne bezpieczenstwo pozostales w schronie.");
                            printf("\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            system("cls");
                            break;
                        }
                        case 't': {
                            if (atom >= 100) {
                                printf("Bylo to skrajnie nieodpowiedzialne, promieniowanie bylo za wysokie zeby przezyc.\nNie zdazyles zobaczyc swiata, zanim cie ono zabilo.\n\nUmarles! Koniec gry!");
                                printf("\nNacisnij ENTER, aby zakonczyc...");
                                getchar();
                                getchar();
                                return 0;
                            }
                            else {
                                if (atom >= 0 && atom < 100) {
                                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                                    printf("\nNacisnij ENTER, aby kontynuowac...");
                                    getchar();
                                    getchar();
                                    printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                    printf("\nNacisnij ENTER, aby zakonczyc...");
                                    getchar();
                                    return 0;
                                }
                            }
                        }
                        }
                        srand(time(NULL));
                        int atom1 = rand() % 100;
                        printf("Minelo juz kilka dni od wybuchu. Postanawiasz w koncu wyjsc na zewnatrz.\n");
                        printf("Aktualny poziom promieniowania [w rentgenach]: %d", atom1);
                        char pyt5;
                        pyt5 = 'n';
                        do {
                            if (!(pyt5 == 't' || pyt5 == 'n')) {
                                printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                            }
                            printf("\nZakladasz olowiany stroj? ([T]ak/[N]ie):");
                            scanf(" %c", &pyt5);
                            pyt5 = tolower(pyt5);
                        } while (!(pyt5 == 't' || pyt5 == 'n'));
                        switch (pyt5) {
                        case 'n': {
                            if (atom1 >= 50) {
                                printf("Bylo juz tak blisko wyjscia.. jednak nie zalozyles olowianego stroju i promieniowanie cie zabilo..\n\nPrzegrales! Koniec gry!");
                                printf("\nNacisnij ENTER, aby zakonczyc...");
                                getchar();
                                getchar();
                                return 0;
                            }
                            else {
                                printf("\nWyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                                printf("\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                getchar();
                                printf("\n\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                printf("\nNacisnij ENTER, aby zakonczyc...");
                                getchar();
                                return 0;
                            }
                        }
                        case 't': {
                            printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                            printf("\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                            printf("\nNacisnij ENTER, aby zakonczyc...");
                            getchar();
                            return 0;
                        }
                        }
                    }
                    }
                }
                case 2: {
                    printf("\n\nWitaj w Krolestwie Tramonto. Jako zolnierz jestes zobowiazany pelnienia sluzby i ochrony w Palacu Krolewskim. Twoje kro-\nlestwo jest jednym z mrozniejszych, polozone nad morzem. Zycie tutaj toczy sie powolnie i z dnia na dzien. Nie panuje\nwielki podzial spoleczenstwa, a wszyscy w wiekszym lub mniejszym stopniu zyja na podobnym poziomie. Mimo braku narze-\nkania na krolestwo jako indywidualne, nie mozna przeoczyc napietej atmosfery, ktora aktualnie panuje w Europie. \nMasz nadzieje, ze ten rok bedzie lepszy niz wszystkie poprzednie pod tym wzgledem.");
                    printf("\nJest 10 marca. Przebywasz na dworze Krola Harolda - krola Tramonto. Dostajesz wezwanie z centrali.\nRzekomo sa rozlane chemikalia w rzece, ponadto dostaly sie one juz do morza.\n");
                    char pyt1;
                    pyt1 = 'n';
                    do {
                        if (!(pyt1 == 'n' || pyt1 == 't'))
                            printf("Nie tak!, Wpisz T, jesli tak lub N, jesli nie.");
                        printf("\nPodejmujesz sie wezwania? [T/N]: ");
                        scanf(" %c", &pyt1);
                        pyt1 = tolower(pyt1);
                    } while (!(pyt1 == 'n' || pyt1 == 't'));
                    switch (pyt1) {
                    case 'n': {
                        printf("Wykazales sie nieposluszenstwem wobec narodu. Dlatego tez, zostales wyslany do wiezienia z powodu niewypelnienia czyn-\nnosci istotnych dla zachowania bezpieczestwa narodu na dozywocie!\nNacisnij ENTER, aby kontynuowac...");
                        getchar();
                        getchar();
                        printf("Tak dlugo siedziales w wiezieniu, az umarles ze starosci.\n\nNacisnij ENTER, aby zakonczyc...");
                        getchar();
                        return 0;
                    }
                    case 't':
                    {
                        printf("Pojechales z swoja jednostka nad morze. Rzeczywiscie okazuje sie, ze doszlo do skazenia. Woda ma bardzo chemiczna won,\nciezko przy niej oddychac. Plyniesz rowniez sprawdzic, jak sytuacja wyglada na rzece. Okazuje sie, ze tam won\njest bardziej intensywniejsza. Podejrzewasz, ze zrodlem chemikaliow jest najprawdopodobniej Krasnograd.\nZastanawiasz sie, co z tym zrobic.\nJaka opcje wybierasz?\n1. Zignorowac temat (grozi epidemia oraz smiercia ludnosci)\n2. Zglosic stan faktyczny do rzadu (grozi napieciem stosunkow pomiedzy Krasnogradem a Tramonto)\n");
                        int pyt2;
                        pyt2 = 1;
                        do {
                            if (!(pyt2 > 0 && pyt2 < 3))
                                printf("\nNiepoprawny format");
                            scanf("%d", &pyt2);
                        } while (!(pyt2 > 0 && pyt2 < 3));
                        switch (pyt2) {
                        case 1: {
                            printf("Zignorowales temat. Choroba wywolana tymi toksynami zaczela szybko sie rozprzestrzeniac. Jest to pewnego rodzaju kleska\ndla narodu, poniewaz tym sposobem wybito cala ludnosc Tramonto. Tak, ty tez nie zyjesz.\n\n Umarles! Koniec gry!\n\nNacisnij ENTER, aby zakonczyc...");
                            getchar();
                            getchar();
                            return 0;
                            break;
                        }
                        case 2:
                        {
                            printf("\nPrzedstawiles sytuacje rzadowi. Zalecono wylaczenie wszelkich ujec wody na rzece oraz nakazanie ludnosci\nstosowanie wody butelkowanej. Dzien dobiega konca.\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            getchar();
                            system("cls");
                            printf("Jest 11 marca. Coraz wiecej ludzi choruje. Rzad zamierza wystosowac pismo do Krasnogradu, w ktorym bedzie zadac\nwyjasnien zwiazanych z zrzutem chemikaliow do wody. Wykonujesz swoje codzienne obowiazki na dworze, jak na co dzien.\nZachowujesz dodatkowe srodki ostroznosci, aby ustrzec sie przed zachorowaniem. Dzien dobiega konca\n\nNacisnij ENTER, aby kontynuowac...");
                            getchar();
                            system("cls");
                            printf("Jest 12 marca. Wiekszosc ludnosci choruje. Krasnograd odpowiada na pismo rzadu Tramonto, jakoby wina za chemikalia\nponosi Tramonto. Ponadto informuje, ze za bezpodstawne oskarzenia w strone Krasnogradu bedzie jednoznaczna\ni skuteczna odpowiedz.\n\nMasz swiadomosc, ze Krasnograd nie bedzie sie hamowac przed uzyciem swojego poteznego arsenalu atomowego.\nZastanawiasz sie, czy zasugerowac krolowi Tramonto, aby oglosil zagrozenie atomowe w celu ochrony ludnosci przed\npotencjalnym atakiem Krasnogradu.");
                            char pyt3;
                            pyt3 = 'n';
                            do {
                                if (!(pyt3 == 'n' || pyt3 == 't'))
                                    printf("Nie tak! Wpisz T, jesli tak lub N, jesli nie. ");
                                printf("Proponujesz krolowi ogloszenie zagrozenia?[T/N]: ");
                                scanf(" %c", &pyt3);
                                pyt3 = tolower(pyt3);
                            } while (!(pyt3 == 'n' || pyt3 == 't'));
                            switch (pyt3) {
                            case 't':
                            {
                                printf("\nKrol oglasza zagrozenie. Tym samym ludnosc gromadzi niezbedne przedmioty do przezycia w schronach, w tym zywnosc\ni narzedzia. Ponadto jeszcze tego samego dnia, chowaja sie do nich. Dzien dobiega konca.\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                getchar();
                                system("cls");
                                printf("Jest 13 marca. Zgodnie z twoimi przewidywaniami odpowiedz Krasnogradu bedzie dosc ostra.\nSlyszysz rozlegajacy sie na cale krolestwo alarm bombowy.\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                system("cls");
                                printf("BUUUUUUM!\n");
                                printf("\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                system("cls");
                                printf("Tak jak planowal Krasnograd, tak tez uczynil. sila razenia bomby byla na tyle silna, ze we wszystkich krolestwach\nnie ostal sie zaden budynek. Na ziemi nie ma nic. Ci, ktorzy przebywali na zewnatrz, nie przezyli. Ty sam zas halasem\nwybuchu zostales oszolomiony i straciles pojecie co sie dzieje. Przed wyjsciem upewnij sie, ze nie ma wysokiego poziomu\npromieniowania. Zalecane jest, aby nie wychodzic z schronu jesli przekracza ono poziom 100 rentgenow,\njesli przekracza 50, nalezy zalozyc olowiany stroj. Jesli nie przekracza obu wartosci, mozna bezpiecznie wyjsc.\n\n");
                                srand(time(NULL));
                                int atom = rand() % 500;
                                printf("\nAktualny poziom promieniowania [w rentgenach]: %d", atom);
                                printf("\n\nChcesz wyjsc z schronu, aby zobaczyc jak wyglada swiat po wybuchu bomby Krasnogradu.\nPamietaj, ze wychodzac mozesz ryzykowac zyciem!!");
                                char pyt4;
                                pyt4 = 'n';
                                do {
                                    if (!(pyt4 == 't' || pyt4 == 'n')) {
                                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                                    }
                                    printf("\nWychodzisz na zewnatrz? ([T]ak/[N]ie):");
                                    scanf(" %c", &pyt4);
                                    pyt4 = tolower(pyt4);
                                } while (!(pyt4 == 't' || pyt4 == 'n'));
                                switch (pyt4) {
                                case 'n':
                                {
                                    printf("Ku trosce o wlasne bezpieczenstwo pozostales w schronie.");
                                    printf("\nNacisnij ENTER, aby kontynuowac...");
                                    getchar();
                                    getchar();
                                    system("cls");
                                    break;
                                }
                                case 't': {
                                    if (atom >= 100) {
                                        printf("Bylo to skrajnie nieodpowiedzialne, promieniowanie bylo za wysokie zeby przezyc. Nie zdazyles zobaczyc swiata, zanim cie ono zabilo.\n\nUmarles! Koniec gry!");
                                        printf("\nNacisnij ENTER, aby zakonczyc...");
                                        getchar();
                                        getchar();
                                        return 0;
                                    }
                                    else {
                                        if (atom >= 0 && atom < 100) {
                                            printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                                            printf("\nNacisnij ENTER, aby kontynuowac...");
                                            getchar();
                                            getchar();
                                            printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                            printf("\nNacisnij ENTER, aby zakonczyc...");
                                            getchar();
                                            return 0;
                                        }
                                    }
                                }
                                }
                                srand(time(NULL));
                                int atom1 = rand() % 100;
                                printf("Minelo juz kilka dni od wybuchu. Postanawiasz w koncu wyjsc na zewnatrz.\n");
                                printf("Aktualny poziom promieniowania [w rentgenach]: %d", atom1);
                                char pyt5;
                                pyt5 = 'n';
                                do {
                                    if (!(pyt5 == 't' || pyt5 == 'n')) {
                                        printf("Nie tak! Wpisz T, jesli tak lub wpisz n, jesli nie.\n");
                                    }
                                    printf("\nZakladasz olowiany stroj? ([T]ak/[N]ie):");
                                    scanf(" %c", &pyt5);
                                    pyt5 = tolower(pyt5);
                                } while (!(pyt5 == 't' || pyt5 == 'n'));
                                switch (pyt5) {
                                case 'n': {
                                    if (atom1 >= 50) {
                                        printf("Bylo juz tak blisko wyjscia.. jednak nie zalozyles olowianego stroju i promieniowanie cie zabilo..\n\nPrzegrales! Koniec gry!");
                                        printf("\nNacisnij ENTER, aby zakonczyc...");
                                        getchar();
                                        getchar();
                                        return 0;
                                    }
                                    else {
                                        printf("\nWyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                                        printf("\nNacisnij ENTER, aby kontynuowac...");
                                        getchar();
                                        getchar();
                                        printf("\n\nGRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                        printf("\nNacisnij ENTER, aby zakonczyc...");
                                        getchar();
                                        return 0;
                                    }
                                }
                                case 't': {
                                    printf("Wyszedles na zewnatrz i jestes w wielkim szoku. Nie ma totalnie nic, a pyl po wybuchu nadal sie unosi.\nJestes zalamany, bo straciles caly dorobek zycia, jednak cieszysz sie z faktu, ze zyjesz.");
                                    printf("\nNacisnij ENTER, aby kontynuowac...");
                                    getchar();
                                    getchar();
                                    printf("GRATULACJE! Udalo ci sie przezyc przez ten napiety okres.\nKonflikty zanikly, gdyz ci ktorzy je tworzyli, nie zyja. Od dzis wszystkie krolestwa zyja w zgodzie.\n\n\n KONIEC GRY!!");
                                    printf("\nNacisnij ENTER, aby zakonczyc...");
                                    getchar();
                                    return 0;
                                }
                                }
                            }
                            case 'n':
                            {
                                printf("Utailes ta sugestie. Tym samym przyczyniles sie do cierpienia ludzi. Juz nie tylko zagrozeniem staje sie toksyna\nw wodzie, ale teraz tez nim jest ewentualna bomba Krasnogradu. Dzien dobiega konca.\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                getchar();
                                system("cls");
                                printf("Jest 13 marca. Slyszysz z daleka, ze nadciaga bomba. Niczego nieswiadomi ludzie, ktorzy przejmuja sie tym, aby nie za-\nchorowac trucizna z wody kontynuuja zycie jak dotychczas.\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                system("cls");
                                printf("BUUUUUUUM!\n\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                printf("\n\nNie sugerujac ogloszenia zagrozenia atomowego, a tym samym nie zostal uruchomiony alarm bombowy, przyczyniles sie\ndo unicestwienia calej ludnosci Tramonto. Z Krolestwa, ktore zylo 'spokojnie' nie zostalo nic.\nNacisnij ENTER, aby kontynuowac...");
                                getchar();
                                system("cls");
                                printf("\n\nKoniec gry! Umarles!\nNacisnij ENTER, aby zakonczyc...");
                                getchar();
                                return 0;
                            }
                            }
                        }
                        break;
                        }
                    }
                    }
                    }
                }
                }
            }
        }
    case 2: {
        return 0;
    }
    }
}

