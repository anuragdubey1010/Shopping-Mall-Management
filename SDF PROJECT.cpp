
#include<iostream>
using namespace std;
void interface_entry()
{
cout<<"*********************WELCOME TO TIWARI MALL*********************"<<endl;
cout<<"           PLEASE SELECT THE SECTION YOU WANT TO VISIT          "<<endl;
cout<<"                      1.SHOES                                   "<<endl;
cout<<"                      2.GROCERY (UNDER MAINTAINANCE)            "<<endl;
cout<<"                      3.COSMETICS                               "<<endl;
cout<<"                      4.BOOKS                                   "<<endl;
cout<<"                      5.ELECTRONICS                             "<<endl;
cout<<"                      6.Exit                                    "<<endl;
}
void interface_bookstore()
{
cout<<"*********************WELCOME TO THE BOOK STORE*********************"<<endl;
cout<<"                                                                   "<<endl;
cout<<"                PLEASE SELECT YOUR GENRE OF READING                "<<endl;
cout<<"                                                                   "<<endl;
cout<<"                        1.Fiction                                  "<<endl;
cout<<"                        2.Non-Fiction                              "<<endl;
cout<<"                        3.Novel                                    "<<endl;
cout<<"                        4.Biography                                "<<endl;
cout<<"                        5.History                                  "<<endl;
cout<<"                        6.GENERATE BILL                            "<<endl;
cout<<"                        7.EXIT BOOK STORE                          "<<endl;
}
void interface_fiction()
{
cout<<"*********************WELCOME TO THE FICTION SECTION*********************"<<endl;
cout<<"                                                                        "<<endl;
cout<<"                     PLEASE SELECT YOUR BOOK                            "<<endl;
cout<<"                                                                        "<<endl;
cout<<" SL No.                BOOK NAME                      PRICE             "<<endl;
cout<<" 1.                    HAMLET                          600              "<<endl;
cout<<" 2.                    WAR AND PEACE                   500              "<<endl;
cout<<" 3.                    CATCHER IN THE RYE              450              "<<endl;
cout<<" 4.                    EAST OF EDAN                    300              "<<endl;
cout<<" 5.                    PRIDE AND PREJUDICE             520              "<<endl;
cout<<" 6.                    GO BACK TO GENRE SELECTION                       "<<endl;
}

void interface_nonfiction()
{
cout<<"*********************WELCOME TO THE NON-FICTION SECTION*********************"<<endl;
cout<<"                                                                            "<<endl;
cout<<"                         PLEASE SELECT YOUR BOOK                            "<<endl;
cout<<"                                                                            "<<endl;
cout<<" SL No.                    BOOK NAME                      PRICE             "<<endl;
cout<<" 1.                        CODE DEPENDANT                  200              "<<endl;
cout<<" 2.                        SOCIOPATH                       250              "<<endl;
cout<<" 3.                        GARDEN TO SAVE THE WORLD        300              "<<endl;
cout<<" 4.                        EVERYTHING MUST GO              250              "<<endl;
cout<<" 5.                        CHARLES III                     300              "<<endl;
cout<<" 6.                        GO BACK TO GENRE SELECTION                       "<<endl;
}
void interface_novel()
{
cout<<"**********************WELCOME TO THE NOVEL SECTION**********************"<<endl;
cout<<"                                                                        "<<endl;
cout<<"                     PLEASE SELECT YOUR BOOK                            "<<endl;
cout<<"                                                                        "<<endl;
cout<<" SL No.                BOOK NAME                      PRICE             "<<endl;
cout<<" 1.                    ANNA KERENIA                    300              "<<endl;
cout<<" 2.                    THE GREAT GATSBY                400              "<<endl;
cout<<" 3.                    A PASSAGE TO INDIA              340              "<<endl;
cout<<" 4.                    INVISIBLE MAN                   150              "<<endl;
cout<<" 5.                    BELOVED                         220              "<<endl;
cout<<" 6.                    GO BACK TO GENRE SELECTION                       "<<endl;
}
void interface_biography()
{
cout<<"**********************WELCOME TO THE BIOGRAPHY SECTION**********************"<<endl;
cout<<"                                                                            "<<endl;
cout<<"                         PLEASE SELECT YOUR BOOK                            "<<endl;
cout<<"                                                                            "<<endl;
cout<<" SL No.                  BOOK NAME                        PRICE             "<<endl;
cout<<" 1.                      A BEAUTIFUL MIND                  250              "<<endl;
cout<<" 2.                      ALEXANDER HAMILTON                250              "<<endl;
cout<<" 3.                      E=mc2                             200              "<<endl;
cout<<" 4.                      ENRIQUE'S JOURNEY                 300              "<<endl;
cout<<" 5.                      INTO THE WILD                     250              "<<endl;
cout<<" 6.                      GO BACK TO GENRE SELECTION                         "<<endl;
}
void interface_history()
{
cout<<"**********************WELCOME TO THE HISTORY SECTION**********************"<<endl;
cout<<"                                                                          "<<endl;
cout<<"                       PLEASE SELECT YOUR BOOK                            "<<endl;
cout<<"                                                                          "<<endl;
cout<<" SL No.   BOOK NAME                            PRICE                      "<<endl;
cout<<" 1.       WHAT IS HISTORY                      200                        "<<endl;
cout<<" 2.       THE COMMUNIST MANIFESTO              180                        "<<endl;
cout<<" 3.       ORIENTALISM                          200                        "<<endl;
cout<<" 4.       DEMOCRACY                            150                        "<<endl;
cout<<" 5.       SALT:A WORLD HISTORY                 250                        "<<endl;
cout<<" 6.                    GO BACK TO GENRE SELECTION                         "<<endl;
}
class product
{
public:
float price;
};
class books:public product
{
public:
int quantity;
string name;
public:
void setdata(string a,float e,int n)
{
name=a;
price=e;
quantity=n;
}
int price_return()
{
    return (price*quantity);
}
void bill(int i)
{
    cout<<i<<" BOOK NAME :-->  "<<name<<"|        PRICE :--> "<<price<<"|        QUANTITY :--> "<<quantity<<endl;
}
};
void interface_electronics()
{
    cout<<"***********WELCOME TO THE ELECTRONICS SECTION*** ******"<<endl;
    cout<<"                                                       "<<endl;
    cout<<"          ENTER YOUR CHOICE:                           "<<endl;
    cout<<"                  1.LAPTOP                             "<<endl;
    cout<<"                  2.MOBILE                             "<<endl;
    cout<<"                  3.TABLET                             "<<endl;
    cout<<"                  4.TV                                 "<<endl;
    cout<<"                  5.WATCH                              "<<endl;
    cout<<"                  6.GENERATE BILL                      "<<endl;
    cout<<"                  7. GO BACK                           "<<endl;
}
void interface_laptop()
{
     cout<<"************WELCOME TO THE LAPTOP SECTION***************"<<endl;
     cout<<"               ELECTRONICS-COMPANY       PRICE          "<<endl;
     cout<<"             1.SAMSUNG                   40000          "<<endl;
     cout<<"             2.LENEVO                    35000          "<<endl;
     cout<<"             3.ASUS                      65000          "<<endl;
     cout<<"             4.DELL                      60000          "<<endl;
     cout<<"             5.HP-PAVILLION              50000          "<<endl;
     cout<<"             6. GO BACK TO ELECTRONICS SELECTION          "<<endl;
}
void interface_mobile()
{
     cout<<"*************WELCOME TO THE MOBILE SECTION**************"<<endl;
     cout<<"               ELECTRONICS-COMPANY        PRICE         "<<endl;
     cout<<"             1.SAMSUNG                   40000          "<<endl;
     cout<<"             2.IPHONE                    35000          "<<endl;
     cout<<"             3.XIOMI                     25000          "<<endl;
     cout<<"             4.VIVO                      40000          "<<endl;
     cout<<"             5.REDMI                     20000          "<<endl;
     cout<<"             6. GO BACK TO ELECTRONICS SELECTION          "<<endl;
}

void interface_tablet()
{
     cout<<"************WELCOME TO THE TABLET SECTION****************"<<endl;
     cout<<"               ELECTRONICS-COMPANY        PRICE          "<<endl;
     cout<<"             1.SAMSUNG                    40000          "<<endl;
     cout<<"             2.ACER                       35000          "<<endl;
     cout<<"             3.ASUS                       25000          "<<endl;
     cout<<"             4.CROMA                      40000          "<<endl;
     cout<<"             5.DELL                       20000          "<<endl;
     cout<<"             6. GO BACK TO ELECTRONICS SELECTION           "<<endl;
}
void interface_tv()
{
     cout<<"************WELCOME TO THE TV SECTION*******************"<<endl;
     cout<<"               ELECTRONICS-COMPANY        PRICE         "<<endl;
     cout<<"             1.BPL-TV                    40000          "<<endl;
     cout<<"             2.HAIER                     35000          "<<endl;
     cout<<"             3.LG                        65000          "<<endl;
     cout<<"             4.MICROMAX                  60000          "<<endl;
     cout<<"             5.PANASONIC                 50000          "<<endl;
     cout<<"             6. GO BACK TO ELECTRONICS SELECTION          "<<endl;
}

void interface_watch()
{
     cout<<"************WELCOME TO THE WATCH SECTION****************"<<endl;
     cout<<"               ELECTRONICS-COMPANY        PRICE         "<<endl;
     cout<<"             1.SAMSUNG                   4000           "<<endl;
     cout<<"             2.BOAT                      3500           "<<endl;
     cout<<"             3.FASTRACK                  6500           "<<endl;
     cout<<"             4.NOISE                     6000           "<<endl;
     cout<<"             5.FIE-BOLTT                 5000          "<<endl;
     cout<<"             6. GO BACK TO ELECTRONICS SELECTION          "<<endl;
}
class electronics:public product
{
    string company;
    int quantity;
    public:
    void get(string a,int d,int n)
    {
        company=a;
        price=d;
        quantity=n;
    }
    int price_return()
{
    return (price*quantity);
}
void bill(int i)
{
    cout<<i<<" DEVICE NAME --> "<<company<<"|       PRICE :--> "<<price<<"|       QUANTITY:---->>"<<quantity<<endl;
}
};
void interface_shoestype()
{
    cout<<endl;
    cout<<endl;
    cout << "\033[0;32m*WELCOME TO THE SHOES SECTION**\033[0m" << endl;
    cout << "                                                       " << endl;
    cout << "          ENTER YOUR CHOICE:                           " << endl;
    cout << "                  1.LOAFER                             " << endl;
    cout << "                  2.BOOTS                              " << endl;
    cout << "                  3.SANDALS                            " << endl;
    cout << "                  4.SNEAKERS                           " << endl;
    cout << "                  5.SPORT SHOES                        " << endl;
    cout << "                  6.GENERATE BILL                      " << endl;
    cout << "                  7.EXIT SHOE STORE                    " << endl;
}
void interface_LOAFER()
{
    cout << "WELCOME TO THE LOAFER SECTION" << endl;
    cout << "                                                        " << endl;
    cout << "                  1.CAMPUS                              " << endl;
    cout << "                  2.PUMA                                " << endl;
    cout << "                  3.ADDIDAS                             " << endl;
    cout << "                  4.BACCA BUCCI                         " << endl;
    cout << "                  5.FLIPS                               " << endl;
    cout << "                  6.GENERATE BILL                      " << endl;
}

void interface_BOOTS()
{
    cout << "WELCOME TO THE BOOTS SECTION" << endl;
    cout << "                                                        " << endl;
    cout << "                   1.CALCEETO                           " << endl;
    cout << "                   2.CAMPUS                             " << endl;
    cout << "                   3.NIKE                               " << endl;
    cout << "                   4.BATA                               " << endl;
    cout << "                   5.LIBERTY                            " << endl;
    cout << "                   6.GENERATE BILL                      " << endl;
}

void interface_SANDALS()
{
    cout << "WELCOME TO SANDALS" << endl;
    cout << "                                                        " << endl;
    cout << "                   1.BATA                               " << endl;
    cout << "                   2.REEBOK                             " << endl;
    cout << "                   3.BACCA BUCCI                        " << endl;
    cout << "                   4.KHADIM                             " << endl;
    cout << "                   5.REDTAPE                            " << endl;
    cout << "                   6.GENERATE BILL                      " << endl;
}

void interface_SNEAKERS()
{
    cout << "WELCOME TO THE SNEAKERS*" << endl;
    cout << "                                                         " << endl;
    cout << "                   1.REDTAPE                             " << endl;
    cout << "                   2.GUCCI                               " << endl;
    cout << "                   3.LAKHANI                             " << endl;
    cout << "                   4.NIKE                                " << endl;
    cout << "                   5.PUMA                                " << endl;
    cout << "                   6.GENERATE BILL                      " << endl;
}
void interface_SPORTSHOES()
{
    cout << "WELCOME TO THE SPORT SHOES*" << endl;
    cout << "                                                         " << endl;
    cout << "                   1.NIKE                                " << endl;
    cout << "                   2.REDTAPE                             " << endl;
    cout << "                   3.BABA                                " << endl;
    cout << "                   4.BACCA BUCCI                         " << endl;
    cout << "                   5.CAMPUS                              " << endl;
    cout << "                   6.GENERATE BILL                      " << endl;
}
class shoes : public product
{
public:
    string type;
    string company;
    int size;
    int quantity;

    void get(string b, int c, float d, int n)
    {
        company = b;
        size = c;
        price = d;
        quantity = n;
    }
    int price_return()
    {
        return price;
    }
    void bill(int i)
    {
        cout << "      " << type << "       " << price << endl;
    }
};

void generate_bill(shoes s[], int sho) {
    float total = 0;
    cout << "-------------------------------BILL--------------------------------" << endl;
    for (int i = 0; i < sho; ++i) {
        cout << "Shoe " << i + 1 << ": " << s[i].company << " - Size: " << s[i].size << " - Price: " << s[i].price << " - Quantity: " << s[i].quantity << endl;
        total += s[i].price * s[i].quantity;
    }
    cout << "Total Bill: " << total << endl;
    cout << "--------------------------------------------------------------------" << endl;
}
void interface_cosmetics()
{
    cout<<"***********WELCOME TO THE COSMETICS SECTION************"<<endl;
    cout<<"                                                       "<<endl;
    cout<<"          ENTER YOUR CHOICE:                           "<<endl;
    cout<<"                  1.ORAL-CARE                          "<<endl;
    cout<<"                  2.SKIN-CARE                          "<<endl;
    cout<<"                  3.HAIR-CARE                          "<<endl;
    cout<<"                  4.EYE-MAKEUP                         "<<endl;
    cout<<"                  5.PERFUMES                           "<<endl;
    cout<<"                  6.GENERATE BILL                      "<<endl;
    cout<<"                  7. GO BACK                           "<<endl;
}
void interface_oral_care()
{
     cout<<"***************WELCOME TO THE ORAL-CARE SECTION*******************"<<endl;
     cout<<"                  COSMETIC-PRODUCT                    PRICE       "<<endl;
     cout<<"                  1.TOOTH-BRUSH                        50         "<<endl;
     cout<<"                  2.MOUTH-WASH                        150         "<<endl;
     cout<<"                  3.DENTAL-FLOSS                      200         "<<endl;
     cout<<"                  4.TEETH-WHITENING                  1000         "<<endl;
     cout<<"                  5.TOOTHPASTE                        200         "<<endl;
     cout<<"                  7. GO BACK TO COSMETICS SELECTION               "<<endl;
}

void interface_skin_care()
{
    cout<<"****************WELCOME TO THE SKIN-CARE**************************"<<endl;
    cout<<"                  COSMETIC-PRODUCT                    PRICE       "<<endl;
    cout<<"                   1.MOISTURIZER                       500        "<<endl;
    cout<<"                   2.TONER                             650        "<<endl;
    cout<<"                   3.SERUM                             200        "<<endl;
    cout<<"                   4.SUNSCREEN                        1000        "<<endl;
    cout<<"                   5.WEEKLY MASK                      1500        "<<endl;
    cout<<"                   7. GO BACK TO COSMETICS SELECTION              "<<endl;

}

void interface_hair_care()
{
    cout<<"*****************WELCOME TO THE HAIR-CARE************************"<<endl;
    cout<<"                  COSMETIC-PRODUCT                    PRICE      "<<endl;
    cout<<"                   1.SHAMPOO                          500        "<<endl;
    cout<<"                   2.CONDITIONER                      650        "<<endl;
    cout<<"                   3.HAIR-OIL                         200        "<<endl;
    cout<<"                   4.DYES                            1000        "<<endl;
    cout<<"                   5.HAIR-SERUM                      1500        "<<endl;
    cout<<"                   7. GO BACK TO COSMETICS SELECTION             "<<endl;
}

void interface_perfumes()
{
    cout<<"*****************WELCOME TO THE PERFUMES********************"<<endl;
    cout<<"                  COSMETIC-PRODUCT                    PRICE "<<endl;
    cout<<"                   1.CHANEL NO.5                       1200 "<<endl;
    cout<<"                   2.CLIVE CHRISTIAN                  65000 "<<endl;
    cout<<"                   3.BYREDO                           2000  "<<endl;
    cout<<"                   4.DENVER                            200  "<<endl;
    cout<<"                   5.MONT BLANC                       1500  "<<endl;
    cout<<"                   7. GO BACK TO COSMETICS SELECTION        "<<endl;
}
void interface_eye_makeup()
{
    cout<<"****************WELCOME TO THE EYE-MAKEUP*****************"<<endl;
   cout<<"                  COSMETIC-PRODUCT                    PRICE"<<endl;
    cout<<"                   1.MASCARA                          200 "<<endl;
    cout<<"                   2.CONCEALER                        650 "<<endl;
    cout<<"                   3.EYESHADOW                       2000 "<<endl;
    cout<<"                   4.EYELINER                         200 "<<endl;
    cout<<"                   5.KAJAL                           1500 "<<endl;
    cout<<"                   7.GO BACK TO COSMETICS SELECTION       "<<endl;
}
class cosmetics:public product
{
    string company;
    int quantity;
    string type;
    public:
    void get(string b,float d,int n)
    {
        company=b;
        price=d;
        quantity=n;
    }
    int price_return()
{
    return (price*quantity);
}
void bill(int i)
{
    cout<<i<<" PRODUCT NAME -->  "<<company<<"|      PRICE :--> "<<price<<"|      QUANTITY:----> "<<quantity<<endl;
}
};
int main()
{
int n_entry=0;
while(n_entry!=6)
    {
interface_entry();
cin>>n_entry;
switch(n_entry)
{
case 1:
    {
        shoes s[25];
    int sho = 0,x=1;
    while(x!=0)
    {
label:
    interface_shoestype();
    int type;
    cin >> type;
    switch (type)
    {
    case 1:
    {
onecase:
        interface_LOAFER();
        int a;
        cin >> a;
        int q;
        cout << "ENTER THE QUANTITY: ";
        cin >> q;
        int size;
        while (1)
        {
            cout << "Enter the Size between 1 to 14" << endl;
            cin >> size;
            if (size >= 1 && size <= 14)
            {
                break;
            }
            cout<<"enter correct size"<<endl;
        }
        switch (a)
        {
        case 1:
        {
            s[sho].get("CAMPUS", size, 900, q);
            sho++;
            break;
        }
        case 2:
        {
            s[sho].get("PUMA", size, 1050, q);
            sho++;
             break;
        }
        case 3:
        {
            s[sho].get("ADDIDAS", size, 1450, q);
            sho++;
             break;
        }
        case 4:
        {
            s[sho].get("BACCA BUCCI", size, 1350, q);
            sho++;
             break;
        }
        case 5:
        {
            s[sho].get("FLIPS", size, 1440, q);
            sho++;
             break;
        }
        case 6:
            {
                generate_bill(s,sho);
                break;
            }
        default:
        {
            cout<<"\033[0;31mEntered wrong output\033[0m"<<endl;
            goto onecase;
             break;
        }
        }
        break;
    }

    case 2:
    {
twocase:
        interface_BOOTS();
        int a;
        cin >> a;
        int q;
        cout << "ENTER THE QUANTITY: ";
        cin >> q;
        int size;
        while (1)
        {
            cout << "Enter the Size between 1 to 14" << endl;
            cin >> size;
            if (size >= 1 && size <= 14)
            {
                break;
            }
            cout<<"enter correct size"<<endl;
        }
        switch (a)
        {
        case 1:
        {
            s[sho].get("CALCEETO", size, 1200, q);
            sho++;
             break;
        }
        case 2:
        {
            s[sho].get("CAMPUS", size, 1250, q);
            sho++;
             break;
        }
        case 3:
        {
            s[sho].get("NIKE", size, 1850, q);
            sho++;
             break;
        }
        case 4:
        {
            s[sho].get("BATA", size, 1350, q);
            sho++;
             break;
        }
        case 5:
        {
            s[sho].get("LIBERTY", size, 1450, q);
            sho++;
             break;
        }
         case 6:
            {
                generate_bill(s,sho);
                break;
            }
        default:
        {
            cout<<"\033[0;31mEntered wrong output\033[0m"<<endl;
            goto twocase;
             break;
        }
        }
        break;
    }

    case 3:
    {
threecase:
        interface_SANDALS();
        int a;
        cin >> a;
        int q;
        cout << "ENTER THE QUANTITY: ";
        cin >> q;
        int size;
        while (1)
        {
            cout << "Enter the Size between 1 to 14" << endl;
            cin >> size;
            if (size >= 1 && size <= 14)
            {
                break;
            }
            cout<<"enter correct size"<<endl;
        }
        switch (a)
        {
        case 1:
        {
            s[sho].get("BATA", size, 800, q);
            sho++;
             break;
        }
        case 2:
        {
            s[sho].get("REEBOK", size, 1150, q);
            sho++;
             break;
        }
        case 3:
        {
            s[sho].get("BACCA BUCCI", size, 950, q);
            sho++;
             break;
        }
        case 4:
        {
            s[sho].get("KHADIM", size, 750, q);
            sho++;
             break;
        }
        case 5:
        {
            s[sho].get("REDTAPE", size, 1150, q);
            sho++;
             break;
        }
         case 6:
            {
                generate_bill(s,sho);
                break;
            }
        default:
        {
            cout<<"\033[0;31mEntered wrong output\033[0m"<<endl;
            goto threecase;
             break;
        }
        }
        break;
    }

    case 4:
    {
fourcase:
        interface_SNEAKERS();
        int a;
        cin >> a;
        int q;
        cout << "ENTER THE QUANTITY: ";
        cin >> q;
        int size;
        while (1)
        {
            cout << "Enter the Size between 1 to 14" << endl;
            cin >> size;
            if (size >= 1 && size <= 14)
            {
                break;
            }
            cout<<"enter correct size"<<endl;
        }
        switch (a)
        {
        case 1:
        {
            s[sho].get("REDTAPE", size, 1900, q);
            sho++;
             break;
        }
        case 2:
        {
            s[sho].get("GUCCI", size, 5150, q);
            sho++;
             break;
        }
        case 3:
        {
            s[sho].get("LAKHANI", size, 1500, q);
            sho++;
             break;
        }
        case 4:
        {
            s[sho].get("NIKE", size, 2750, q);
            sho++;
             break;
        }
        case 5:
        {
            s[sho].get("PUMA", size, 2150, q);
            sho++;
             break;
        }
         case 6:
            {
                generate_bill(s,sho);
                break;
            }
        default:
        {
            cout<<"\033[0;31mEntered wrong output\033[0m"<<endl;
            goto fourcase;
             break;
        }

        }
        break;
    }

    case 5:
    {
fivecase:
        interface_SPORTSHOES();
        int a;
        cin >> a;
        int q;
        cout << "ENTER THE QUANTITY: ";
        cin >> q;
        int size;
        while (1)
        {
            cout << "Enter the Size between 1 to 14" << endl;
            cin >> size;
            if (size >= 1 && size <= 14)
            {
                break;
            }
            cout<<"enter correct size"<<endl;
        }
        switch (a)
        {
        case 1:
        {
            s[sho].get("NIKE", size, 1800, q);
            sho++;
             break;
        }
        case 2:
        {
            s[sho].get("REDTAPE", size, 1550, q);
            sho++;
             break;
        }
        case 3:
        {
            s[sho].get("BABA", size, 2050, q);
            sho++;
             break;
        }
        case 4:
        {
            s[sho].get("BACCA BUCCI", size, 1750, q);
            sho++;
             break;
        }
        case 5:
        {
            s[sho].get("CAMPUS", size, 1450, q);
            sho++;
             break;
        }
         case 6:
            {
                generate_bill(s,sho);
                break;
            }
        default:
        {
            cout<<"\033[0;31mEntered wrong output\033[0m"<<endl;
            goto fivecase;
             break;
        }

        }
        break;
    }
     case 6:
            {
                generate_bill(s,sho);
                break;
            }
     case 7:
        {
            cout << "          THANK YOU FOR VISITING OUR SHOE STORE                 " << endl;
            x=0;
            break;
        }
    default:
    {
        cout<<"\033[0;31mEntered wrong output\033[0m"<<endl;
        goto label;
    }
    }
    char again;
    cout << "                  To add shoes press 1" << endl
         << "                         OR" << endl
         << "                 To exit press other" << endl;
    cin >>again;
    again=(int)again;
    if /*((again == 1) || */(again==49)
    {
        goto label;
    }
    else
    {
        generate_bill(s,sho);
        x=0;
    }
}
        break;
    }
case 2:
    {
        cout<<"                     STORE UNDER CONSTRUCTION"<<endl;
        cout<<"********** COMING SOON BY THE GRACE OF ANURAG DWIVEDI **********"<<endl;
        break;
    }
case 3:
    {
        cosmetics c[25];
    int cos=0;
    int choice;
    while(choice!=7)
    {
        back_to_cosmetics:
        interface_cosmetics();
        cin>>choice;
    switch(choice)
    {
        case 1:
        {
        back_to_oral_care:
        interface_oral_care();
        int m;
        cin>>m;
        int o;
         if(m!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>o;
                }
        switch(m)
        {
            case 1:
             {
                c[cos].get("oral_b",50,o);
            cos++;
            break;
            }
            case 2:
            {
                c[cos].get("pepsodent",150,o);
                cos++;
                break;
            }
            case 3:
            {
                c[cos].get("ORAL-B",200,o);
                cos++;
                break;
            }
            case 4:
            {
                c[cos].get("DAYBREAK",1000,o);
                cos++;
                break;
            }
            case 5:
            {
                c[cos].get("COLGATE",200,o);
                cos++;
                break;
            }
            case 6:
            {
                goto back_to_cosmetics;
                break;
            }
            default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_oral_care;
                        break;
                    }

        }
        break;
        }

        case 2:
        {
            back_to_skin_care:
            interface_skin_care();
            int m;
            cin>>m;
            int o;
            if(m!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>o;
                }
            switch(m)
        {
            case 1:
            {
                c[cos].get("LAKME",500,o);
                 cos++;
                 break;
            }
            case 2:
            {
                c[cos].get("SEREKO",650,o);
                cos++;
                break;
            }
            case 3:
            {
                c[cos].get("GARNIER",200,o);
                cos++;
                break;
            }
            case 4:
            {
                c[cos].get("LOTUS",1000,o);
                cos++;
            }
            case 5:
            {
                c[cos].get("MUL",1500,o);
                cos++;
                break;
            }
            case 6:
            {
                goto back_to_cosmetics;
                break;
            }

            default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_skin_care;
                        break;
                    }

        }
        break;
        }

        case 3:
        {
            back_to_hair_care:
            interface_hair_care();
            int m;
            cin>>m;
            int o;
            if(m!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>o;
                }
            switch(m)
        {
            case 1:
             {
                c[cos].get("LORIAL",500,o);
            cos++;
            break;
            }
            case 2:
            {
                c[cos].get("TRESSEMME",650,o);
                cos++;
                break;
            }
            case 3:
            {
                c[cos].get("EMAMI",200,o);
                cos++;
            }
            case 4:
            {
                c[cos].get("GODREJ",1000,o);
                cos++;
                break;
            }
            case 5:
            {
                c[cos].get("STREAX",1500,o);
                cos++;
                break;
            }
            case 6:
            {
                goto back_to_cosmetics;
                break;
            }
            default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_hair_care;
                        break;
                    }

        }
        break;
        }

        case 4:
        {
            back_to_eye_makeup:
            interface_eye_makeup();
            int m;
            cin>>m;
            int o;
            if(m!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>o;
                }
            switch(m)
        {
            case 1:
            {
                c[cos].get("MAYBELLINE",200,o);
            cos++;
            break;
            }
            case 2:
            {
                c[cos].get("SUGAR",650,o);
                cos++;
                break;
            }
            case 3:
            {
                c[cos].get("HUDA",2000,o);
                cos++;
                break;
            }
            case 4:
            {
                c[cos].get("LAKME",200,o);
                cos++;
                break;
            }
            case 5:
            {
                c[cos].get("PLUM",1500,o);
                cos++;
                break;
            }
            case 6:
            {
                goto back_to_cosmetics;
                break;
            }
            default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_eye_makeup;
                        break;
                    }

        }
        break;
        }

        case 5:
        {
            back_to_perfumes:
            interface_perfumes();
            int m;
            cin>>m;
            int o;
            if(m!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>o;
                }
            switch(m)
        {
            case 1:
            {
                c[cos].get("CHANEL NO.5",12000,o);
            cos++;
            break;
            }
            case 2:
            {
                c[cos].get("CLIVE CHRISTIAN  ",65000,o);
                cos++;
                break;
            }
            case 3:
            {
                c[cos].get("BYREDO",2000,o);
                cos++;
                break;
            }
            case 4:
            {
                c[cos].get("DENVER ",200,o);
                cos++;
                break;
            }
            case 5:
            {
                c[cos].get("MONT BLANC",1500,o);
                cos++;
                break;
            }
            case 6:
            {
                goto back_to_cosmetics;
                break;
            }
            default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_perfumes;
                        break;
                    }

        }
        break;
        }
        case 6:
            {
                if(cos == 0)
                {
                    cout<<"**********NO COSMETIC ITEMS PURCHASED ZERO BILL GENERATED,PLEASE ADD SOME PRODUCTS TO GENERATE THE BILL**********"<<endl;
                }
                else
                {
                float total_price_cos=0;
                for(int i=0;i<cos;i++)
                {
                    total_price_cos=total_price_cos+c[i].price_return();
                }
                cout<<"******************INVOICE******************"<<endl;
                cout<<"                                       "<<endl;
                for(int j=0;j<cos;j++)
                {
                    c[j].bill(j+1);

                }
                cout<<endl;
                cout<<"             TOTAL            :-->   "<<total_price_cos<<endl;
                }
                break ;
            }
        case 7:
            {
                cout<<"THANK YOU FOR VISITING OUR COSMETICS STORE"<<endl;
                break;
            }
        default:
            {
                cout<<"INVALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_cosmetics;
                break;
            }



    }
    }
        break;
    }
case 4:
    {
        books book_object[25];
        int n_bsc=0;
        int n_bq,c_books=0;
        while(n_bsc!=7)
        {
        back_to_bookstore :
        interface_bookstore();
        cin>>n_bsc;
        switch(n_bsc)
        {
        case 1:
            {
                int n_bs_f;
                back_to_fiction:
                interface_fiction();
                cin>>n_bs_f;
                if(n_bs_f!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>n_bq;
                }
                switch(n_bs_f)
                {
                case 1:
                    {
                        book_object[c_books].setdata("HAMLET",600,n_bq);
                        c_books++;
                        break;
                    }
                case 2:
                    {
                        book_object[c_books].setdata("WAR AND PEACE",500,n_bq);
                        c_books++;
                        break;
                    }
                case 3:
                    {
                        book_object[c_books].setdata("catcher in the rye",450,n_bq);
                        c_books++;
                        break;
                    }
                case 4:
                    {
                        book_object[c_books].setdata("east of edan",300,n_bq);
                        c_books++;
                        break;
                    }
                case 5:
                    {
                        book_object[c_books].setdata("pride and prejudice",520,n_bq);
                        c_books++;
                        break;
                    }
                case 6:
                    {
                        goto back_to_bookstore;
                        break;
                    }
                default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_fiction;
                        break;
                    }

                }
                break;
            }
        case 2:
            {
                int n_bs_nf;
                back_to_nonfiction :
                interface_nonfiction();
                cin>>n_bs_nf;
                if(n_bs_nf!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>n_bq;
                }
                switch(n_bs_nf)
                {
                case 1:
                    {
                        book_object[c_books].setdata("code dependent",200,n_bq);
                        c_books++;
                        break;
                    }
                case 2:
                    {
                        book_object[c_books].setdata("sociopath",250,n_bq);
                        c_books++;
                        break;
                    }
                case 3:
                    {
                        book_object[c_books].setdata("garden to save the world",300,n_bq);
                        c_books++;
                        break;
                    }
                case 4:
                    {
                        book_object[c_books].setdata("everything must go",250,n_bq);
                        c_books++;
                        break;
                    }
                case 5:
                    {
                        book_object[c_books].setdata("charles III",300,n_bq);
                        c_books++;
                        break;
                    }
                case 6:
                    {
                        goto back_to_bookstore;
                        break;
                    }
                default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_nonfiction;
                        break;
                    }
                }
                break;
            }
        case 3:
            {
                int n_bs_no;
                back_to_novel:
                interface_novel();
                cin>>n_bs_no;
                if(n_bs_no!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>n_bq;
                }
                switch(n_bs_no)
                {
                case 1:
                    {
                        book_object[c_books].setdata("Anna kerenia",300,n_bq);
                        c_books++;
                        break;
                    }
                case 2:
                    {
                        book_object[c_books].setdata("The Great Gatsby",400,n_bq);
                        c_books++;
                        break;
                    }
                case 3:
                    {
                        book_object[c_books].setdata("A Passage to India",340,n_bq);
                        c_books++;
                        break;
                    }
                case 4:
                    {
                        book_object[c_books].setdata("Invisible Man",150,n_bq);
                        c_books++;
                        break;
                    }
                case 5:
                    {
                        book_object[c_books].setdata("Beloved",220,n_bq);
                        c_books++;
                        break;
                    }
                case 6:
                    {
                        goto back_to_bookstore;
                        break;
                    }
                default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_novel;
                        break;
                    }
                }
                break;
            }
        case 4:
            {
                int n_bs_b;
                back_to_biography:
                interface_biography();
                cin>>n_bs_b;
                if(n_bs_b!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>n_bq;
                }
                switch(n_bs_b)
                {
                case 1:
                    {
                        book_object[c_books].setdata("A Beautiful Mind",250,n_bq);
                        c_books++;
                        break;
                    }
                case 2:
                    {
                        book_object[c_books].setdata("Alexander Hamilton",250,n_bq);
                        c_books++;
                        break;
                    }
                case 3:
                    {
                        book_object[c_books].setdata("E=mc2",200,n_bq);
                        c_books++;
                        break;
                    }
                case 4:
                    {
                        book_object[c_books].setdata("Enrique's Journey ",300,n_bq);
                        c_books++;
                        break;
                    }
                case 5:
                    {
                        book_object[c_books].setdata("Into the Wild",250,n_bq);
                        c_books++;
                        break;
                    }
                case 6:
                    {
                        goto back_to_bookstore;
                        break;
                    }
                default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_biography;
                        break;
                    }
                }
                break;
            }
        case 5:
            {
                int n_bs_h;
                back_to_history :
                interface_history();
                cin>>n_bs_h;
                if(n_bs_h!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>n_bq;
                }
                switch(n_bs_h)
                {
                case 1:
                    {
                        book_object[c_books].setdata("What Is History? ",200,n_bq);
                        c_books++;
                        break;
                    }
                case 2:
                    {
                        book_object[c_books].setdata("The Communist Manifesto",180,n_bq);
                        c_books++;
                        break;
                    }
                case 3:
                    {
                        book_object[c_books].setdata("Orientalism",200,n_bq);
                        c_books++;
                        break;
                    }
                case 4:
                    {
                        book_object[c_books].setdata("Democracy: A Life ",150,n_bq);
                        c_books++;
                        break;
                    }
                case 5:
                    {
                        book_object[c_books].setdata(" Salt: A World History",250,n_bq);
                        break;
                    }
                case 6:
                    {
                        goto back_to_bookstore;
                        break;
                    }
                default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_history;
                        break;
                    }
                }
                break;
            }
        case 6:
            {
                if(c_books == 0)
                {
                    cout<<"**********NO BOOKS PURCHASED ZERO BILL GENERATED,PLEASE ADD SOME BOOKS TO GENERATE THE BILL**********"<<endl;
                }
                else
                {
                float total_price_books=0;
                for(int i=0;i<c_books;i++)
                {
                    total_price_books=total_price_books+book_object[i].price_return();
                }
                cout<<"******************INVOICE******************"<<endl;
                cout<<"                                       "<<endl;
                for(int j=0;j<c_books;j++)
                {
                    book_object[j].bill(j+1);

                }
                cout<<endl;
                cout<<"             TOTAL            :-->   "<<total_price_books<<endl;
                }
                break ;
            }
        case 7:
            {
                cout<<"THANK YOU FOR VISITING OUR STORE"<<endl;
                break;
            }



                default :
                    {
                        cout<<"INVALID CHOICE"<<endl;
                        cout<<"PLEASE ENTER YOUR CHOICE AGAIN"<<endl;
                        goto back_to_bookstore;
                        break;
                    }
        }

    }
    break;
    }
case 5:
{
    electronics e[25];
    int choice=0,ele=0;
    while(choice!=7)
    {
    back_to_electronics:
    interface_electronics();

    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            back_to_laptop:
            interface_laptop();
        int q;
        cin>>q;
        int p;
        if(q!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>p;
                }

        switch(q)
        {
            case 1:
            {
                e[ele].get("SAMSUNG",40000,p);
                ele++;
                break;
            }
            case 2:
            {
                e[ele].get("LENEVO",35000,p);
                ele++;
                break;
            }
            case 3:
            {
                e[ele].get("DELL",65000,p);
                ele++;
                break;
            }
            case 4:
            {
                e[ele].get("ASUS",60000,p);
                ele++;
                break;
            }
            case 5:
            {
                e[ele].get("HP-PAVILLION",50000,p);
                ele++;
                break;
            }
            case 6:
            {
                goto back_to_electronics;
                break;
            }
            default :
            {
                cout<<"INVLALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_laptop;
                break;
            }
        }
        break;
        }

        case 2:
        {
            back_to_mobile:
            interface_mobile();
        int q;
        cin>>q;
        int p;
            if(q!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>p;
                }

        switch(q)
        {
            case 1:
             {
                e[ele].get("SAMSUNG",40000,p);
            ele++;
             break;
            }
            case 2:
            {
                e[ele].get("IPHONE",35000,p);
                ele++;
                break;
            }
            case 3:
            {
                e[ele].get("XIOMI",25000,p);
                ele++;
                break;
            }
            case 4:
            {
                e[ele].get("VIVO",40000,p);
                ele++;
                break;
            }
            case 5:
            {
                e[ele].get("REDMI",20000,p);
                ele++;
                break;
            }
            case 6:
            {
                goto back_to_electronics;
                break;
            }
            default :
            {
                cout<<"INVLALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_mobile;
                break;
            }
        }
        break;
        }

        case 3:
        {
            back_to_tablet:
            interface_tablet();
        int q;
        cin>>q;
        int p;
            if(q!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>p;
                }
        switch(q)
        {
            case 1:
             {
                e[ele].get("SAMSUNG",40000,p);
            ele++;
            break;
            }
            case 2:
            {
                e[ele].get("ACER",35000,p);
                ele++;
                break;
            }
            case 3:
            {
                e[ele].get("ASUS",25000,p);
                ele++;
                break;
            }
            case 4:
            {
                e[ele].get("CHROMA",40000,p);
                ele++;
                break;
            }
            case 5:
            {
                e[ele].get("DELL",20000,p);
                ele++;
                break;
            }
            case 6:
            {
                goto back_to_electronics;
                break;
            }
            default :
            {
                cout<<"INVLALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_laptop;
                break;
            }
        }
        break;
        }

        case 4:
        {
            back_to_tv:
            interface_tv();
        int q;
        int p;
        cin>>q;
            if(q!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>p;
                }
        switch(q)
        {
            case 1:
             {
                e[ele].get("BPL-TV",40000,p);
            ele++;
            break;
            }
            case 2:
            {
                e[ele].get("HAIER",350000,p);
                ele++;
                break;
            }
            case 3:
            {
                e[ele].get("LG",25000,p);
                ele++;
                break;
            }
            case 4:
            {
                e[ele].get("MICROMAX",40000,p);
                ele++;
                break;
            }
            case 5:
            {
                e[ele].get("PANASONIC",20000,p);
                ele++;
                break;
            }
            case 6:
            {
                goto back_to_electronics;
                break;
            }
            default :
            {
                cout<<"INVLALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_tv;
                break;
            }
        }
        break;
        }

        case 5:
        {
            back_to_watch:
            interface_watch();
        int q,p;
        cin>>q;
            if(q!=6)
                {
                cout<<"ENTER THE QUANTITY"<<endl;
                cin>>p;
                }
        switch(q)
        {
            case 1:
             {
                e[ele].get("SAMSUNG",4000,p);
            ele++;
            break;
            }
            case 2:
            {
                e[ele].get("BOAT",3500,p);
                ele++;
                break;
            }
            case 3:
            {
                e[ele].get("FASTRACK",6500,p);
                ele++;
                break;
            }
            case 4:
            {
                e[ele].get("NOISE",6000,p);
                ele++;
                break;
            }
            case 5:
            {
                e[ele].get("FIRE-BOLTT",5000,p);
                ele++;
                break;
            }
            case 6:
            {
                goto back_to_electronics;
                break;
            }
            default :
            {
                cout<<"INVLALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_watch;
                break;
            }
        }
        break;
        }
        case 6:
            {
                if(ele == 0)
                {
                    cout<<"**********NO ELECTRONIC ITEMS PURCHASED ZERO BILL GENERATED,PLEASE ADD SOME GADGETS TO GENERATE THE BILL**********"<<endl;
                }
                else
                {
                float total_price_ELEC=0;
                for(int i=0;i<ele;i++)
                {
                    total_price_ELEC=total_price_ELEC+e[i].price_return();
                }
                cout<<"******************INVOICE******************"<<endl;
                cout<<"                                       "<<endl;
                for(int j=0;j<ele;j++)
                {
                    e[j].bill(j+1);

                }
                cout<<endl;
                cout<<"             TOTAL            :-->   "<<total_price_ELEC<<endl;
                }
                break ;
            }
        case 7:
            {
                cout<<"THANK YOU FOR VISITING OUR ELECTRONICS STORE"<<endl;
                break;
            }
        default:
            {
                cout<<"INVALID CHOICE"<<endl;
                cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
                goto back_to_electronics;
                break;
            }

    }
}
    break;
}
case 6:
    {
        n_entry=6;
    }
default :
{
    cout<<"INVALID CHOICE"<<endl;
    cout<<"ENTER YOUR CHOICE AGAIN"<<endl;
    break;
}

}
}
    }




