void capital()  //print the capitals of the choosen countries
{
     system("cls");
     struct country
     {
        char name[40];
        char capital[40];

     };

    struct country cont_list[100]=
    {
        "amman","jordan",
        "amsterdam","nertherlands",
        "athens","greece",
        "bangkok","thailand",
        "beijing","china",
        "berlin","germany",
        "cairo","egypt",
        "canberra","australia",
        "copenhagen","denmark",
        "dhaka","bangladesh",
        "doha","qatar",
        "dublin","ireland",
        "helsinki","finland",
        "jakarta","indonesia",
        "kabul","afghanistan",
        "kingston","jamaica",
        "kuala lumpur","malaysia",
        "london","unitedkingdom",
        "lisbon","portugal",
        "madrid","spain",
        "manila","philippines",
        "mexico city","mexico",
        "moscow","russia",
        "nairobi","kenya",
        "nassau","bahamas",
        "new delhi","india",
        "ottawa","canada",
        "oslo","norway",
        "paris","france",
        "prague","czech republic",
        "pretoria","africa",
        "pristina","kosovo",
        "pyonyang","north korea",
        "riyadh","saudi arabia",
        "rome","italy",
        "colombo","sri lanka",
        "santiago","chile",
        "seoul","south korea",
        "singapore","singapore",
        "sofia","bulgaria",
        "stockholm","sweden",
        "suva","fiji",
        "taipei","taiwan",
        "tashkent","uzbekistan",
        "tbilisi","georgia",
        "tehran","iran",
        "tirana","albania",
        "tokyo","japan",
        "tripoli","libya",
        "tunis","tunisia",
        "ulaanbaatar","mongolia",
        "vienna","austria",
        "vientiane","laos",
        "warsaw","poland",
        "washington d.c","united states of america",
        "wellington","new zealand",
        "zagreb","crotia",
    };

    int i,choice;
    int pos;
    char inval[20];

    system("cls");
    printf("Enter the name of the Country : ");
    gets(inval);
    pos=-1;

    for(i=0;i<=50;i++)
    {   
        if(strcmp(inval,cont_list[i].name)==0)
           pos=i;   
    }

    if(pos>-1)      
    {
        printf("capital= ");
        printf("%x", cont_list[pos].capital);
        getch();
    }
    else
        printf("\n\t Sorry, Country not in database");

    askover();
    system("pause");

    // End function
}
