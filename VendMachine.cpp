#include<iostream> 
using namespace std; 

void menu(int); 
void turnONf(int); 
void turnONifOFFf(int); 

double salesPHCoke(int,double); 
double salesPHDoritos(int,double); 
double salesPHSnickers(int,double); 
double salesPHChexmix(int,double); 
double salesPHPepsi(int,double); 

double salesPDCoke(double,int); 
double salesPDDoritos(double,int); 
double salesPDSnickers(double,int); 
double salesPDChexmix(double,int); 
double salesPDPepsi(double,int); 

int cokeR(int); 
int doritosR(int); 
int snickersR(int); 
int chexmixR(int); 
int pepsiR(int); 

int fivedbR(int); 
int onedbR(int); 
int quarterR(int); 
int dimeR(int); 
int nickelR(int); 

double salesTotalF(double,double,double,double,double); 
double TotalCostF(double,double,double,double,double); 
double profitF(double,double); 
double overheadF(double, double); 
double laborcostF(double,double); 

int main() 
{ 
int turnON; 
int days = 0; 
double change; 
int money; 
double hours = 0; 
double hoursF = 0; 
double salesTotal, TotalCost; 

double cokeSPH=0;
double doritosSPH=0; 
double snickersSPH=0; 
double chexmixSPH=0; 
double pepsiSPH=0; 

double cokeSPD=0; 
double doritosSPD=0; 
double snickersSPD=0; 
double chexmixSPD=0; 
double pepsiSPD=0; 

double cokeSS = 0; 
double doritosSS = 0; 
double snickersSS = 0; 
double chexmixSS = 0; 
double pepsiSS = 0; 

double cokecost = 0, 
doritoscost = 0, 
snickerscost = 0, 
chexmixcost = 0, 
pepsicost = 0; 

int coke = 30; 
int doritos = 30; 
int snickers = 30; 
int chexmix = 30; 
int pepsi = 30; 

int choice, choice2, choice3; 

int fivedb = 20; 
int onedb = 20; 
int quarter = 20; 
int dime = 20; 
int nickel = 20; 

double cmoneys = 95; 
double dmoneys = 75; 
double smoneys = 55; 
double chmoneys = 60; 
double pmoneys = 90; 

double cmoneysP = 33; 
double dmoneysP = 26; 
double smoneysP = 19; 
double chmoneysP = 21; 
double pmoneysP = 32; 

double cmoneysO = 24; 
double dmoneysO = 19;
double smoneysO = 14; 
double chmoneysO = 15; 
double pmoneysO = 23; 

double cmoneysL = 5; 
double dmoneysL = 4; 
double smoneysL = 3; 
double chmoneysL = 3; 
double pmoneysL = 5; 

double profit=0; 
double overhead=0; 
double laborcost=0; 
//switch laborcost is labeled overhead and vice versa 
do 
{ 
turnONf(turnON); 
cin>>turnON; 
if(turnON == 1) 
{ 
cout<<"\t Vending Machine Menu \n"; 
do 
{ 
menu(choice); 
cout<<"\nFive Dollar Bills: "<<fivedb<<"\n"; 
cout<<"One Dollar Bills: "<<onedb<<"\n"; 
cout<<"Quarters: "<<quarter<<"\n"; 
cout<<"Dimes: "<<dime<<"\n"; 
cout<<"Nickels: "<<nickel<<"\n\n"; 
{ 
if(hours>0){ 
cokeSPH = salesPHCoke(hours,cokeSS);} 
if(hours>0){ 
doritosSPH = salesPHDoritos(hours,doritosSS);} 
if(hours>0){ 
snickersSPH = salesPHSnickers(hours,snickersSS);} 
if(hours>0){ 
chexmixSPH = salesPHChexmix(hours,chexmixSS);} 
if(hours>0){ 
pepsiSPH = salesPHPepsi(hours,pepsiSS);} 
}
 
cout<<"\tSales Per Hour\n\n"; 
cout<<"Coke sold: "<<cokeSPH<<"\n"; 
cout<<"Doritos sold: "<<doritosSPH<<"\n"; 
cout<<"Snickers sold: "<<snickersSPH<<"\n"; 
cout<<"Chex Mix sold: "<<chexmixSPH<<"\n"; 
cout<<"Pepsi sold: "<<pepsiSPH<<"\n\n"; 
if(hoursF == 6) 
{ 
days++; 
if(days > 0) 
{ 
cokeSPD = salesPDCoke(cokeSS,days); 
doritosSPD = salesPDDoritos(doritosSS,days); 
snickersSPD = salesPDSnickers(snickersSS,days); 
chexmixSPD = salesPDChexmix(chexmixSS,days); 
pepsiSPD = salesPDPepsi(pepsiSS,days); 
hoursF = 0; 
} 
} 
cout<<"\tSales Per Day\n\n"; 
cout<<"Coke sold: "<<cokeSPD<<"\n"; 
cout<<"Doritos sold: "<<doritosSPD<<"\n"; 
cout<<"Snickers sold: "<<snickersSPD<<"\n"; 
cout<<"Chex Mix sold: "<<chexmixSPD<<"\n"; 
cout<<"Pepsi sold: "<<pepsiSPD<<"\n\n"; 
cout<<"\tTotal Sales\n\n"; 
cout<<"Coke sold: "<<cokeSS<<"\n"; 
cout<<"Doritos sold: "<<doritosSS<<"\n"; 
cout<<"Snickers sold: "<<snickersSS<<"\n"; 
cout<<"Chex Mix sold: "<<chexmixSS<<"\n"; 
cout<<"Pepsi sold: "<<pepsiSS<<"\n\n"; 
salesTotal = salesTotalF(cokeSS, doritosSS, snickersSS, chexmixSS, pepsiSS); 
TotalCost = TotalCostF(cokecost, doritoscost, snickerscost, chexmixcost, pepsicost); 
cout<<"Total of items sold: "<<salesTotal<<endl; 
cout<<"Total cost of items sold: $"<<TotalCost<<endl; 
cout<<"Profit: $"<<profit<<endl; 
cout<<"Labor Cost: $"<<overhead<<endl; 
cout<<"Overhead: $"<<laborcost<<endl;

cin>>choice; 
switch (choice) 
{ 
case 1: 
if(coke > 0) 
{ 
profit = profitF(profit,cmoneysP); 
overhead = overheadF(overhead,cmoneysO); 
laborcost = laborcostF(laborcost,cmoneysL); 
cout<<"Insert money\n\n1. Five dollars\n2. One dollar\n3. Quarter\n4. Dime\n5. Nickel\n\n"; 
cin>>choice2; 
switch (choice2) 
{ 
case 1: 
change = (500 - 95) / 100.0; 
fivedb++; 
coke --; 
cokecost = cokecost + 95; 
cokeSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nCoke's left: \n"<<coke<<endl; 
break; 
case 2: 
change = (100 - 95) / 100.0; 
onedb++; 
coke --; 
cokecost = cokecost + 95; 
cokeSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nCoke's left: \n"<<coke<<endl; 
break; 
case 3: 
money = 25; 
quarter ++; 
while(money < 95) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500;
 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 95) / 100.00; 
coke --; 
cokecost = cokecost + 95; 
cokeSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nCoke's left: \n"<<coke<<endl; 
break; 
case 4: 
money = 10; 
dime++; 
while(money < 95) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2:

money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 95) / 100.00; 
coke --; 
cokecost = cokecost + 95; 
cokeSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nCoke's left: \n"<<coke<<endl; 
break; 
case 5: 
money = 5; 
nickel++; 
while(money < 95) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break;

case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 95) / 100.00; 
coke --; 
cokecost = cokecost + 95; 
cokeSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nCoke's left: \n"<<coke<<endl; 
break; 
default: 
cout<<"Entry Invalid."; 
} 
} 
else 
cout<<"Out of Coke."; 
break; 
case 2: 
if(doritos > 0) 
{ 
profit = profitF(profit,dmoneysP); 
overhead = overheadF(overhead,dmoneysO); 
laborcost = laborcostF(laborcost,dmoneysL); 
cout<<"Insert money\n\n1. Five dollars\n2. One dollar\n3. Quarter\n4. Dime\n5. Nickel\n\n"; 
cin>>choice2; 
switch (choice2) 
{ 
case 1: 
change = (500 - 75) / 100.0; 
fivedb++;
 
doritos --; 
doritoscost = doritoscost + 75; 
doritosSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nDoritos left: \n"<<doritos<<endl; 
break; 
case 2: 
change = (100 - 75) / 100.0; 
onedb++; 
doritos --; 
doritoscost = doritoscost + 75; 
doritosSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nDoritos left: \n"<<doritos<<endl; 
break; 
case 3: 
money = 25; 
quarter++; 
while(money < 75) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++;

break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 75) / 100.00; 
doritos --; 
doritoscost = doritoscost + 75; 
doritosSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nDoritos left: \n"<<doritos<<endl; 
break; 
case 4: 
money = 10; 
dime++; 
while(money < 75) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n";
 
} 
} 
change = (money - 75) / 100.00; 
doritos --; 
doritoscost = doritoscost + 75; 
doritosSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nDoritos left: \n"<<doritos<<endl; 
break; 
case 5: 
money = 5; 
nickel++; 
while(money < 75) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 75) / 100.00;
 
doritos --; 
doritoscost = doritoscost + 75; 
doritosSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nDoritos left: \n"<<doritos<<endl; 
break; 
default: 
cout<<"Entry Invalid."; 
} 
} 
else 
cout<<"Out of Doritos."; 
break; 
case 3: 
if(snickers > 0) 
{ 
profit = profitF(profit,smoneysP); 
overhead = overheadF(overhead,smoneysO); 
laborcost = laborcostF(laborcost,smoneysL); 
cout<<"Insert money\n\n1. Five dollars\n2. One dollar\n3. Quarter\n4. Dime\n5. Nickel\n\n"; 
cin>>choice2; 
switch (choice2) 
{ 
case 1: 
change = (500 - 55) / 100.0; 
fivedb++; 
snickers --; 
snickerscost = snickerscost + 55; 
snickersSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nSnickers left: \n"<<snickers<<endl; 
break; 
case 2: 
change = (100 - 55) / 100.0; 
onedb++; 
snickers --; 
snickerscost = snickerscost + 55; 
snickersSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nSnickers left: \n"<<snickers<<endl; 
break; 
case 3: 
money = 25;

quarter++; 
while(money < 55) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 55) / 100.00; 
snickers --; 
snickerscost = snickerscost + 55; 
snickersSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nSnickers left: \n"<<snickers<<endl; 
break; 
case 4: 
money = 10; 
dime++; 
while(money < 55) 
{
 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 55) / 100.00; 
snickers --; 
snickerscost = snickerscost + 55; 
snickersSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nSnickers left: \n"<<snickers<<endl; 
break; 
case 5: 
money = 5; 
nickel++; 
while(money < 55) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3;
 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 55) / 100.00; 
snickers --; 
snickerscost = snickerscost + 55; 
snickersSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nSnickers left: \n"<<snickers<<endl; 
break; 
default: 
cout<<"Entry Invalid."; 
} 
} 
else 
cout<<"Out of Snickers."; 
break; 
case 4: 
if(chexmix > 0) 
{ 
profit = profitF(profit,chmoneysP);

overhead = overheadF(overhead,chmoneysO); 
laborcost = laborcostF(laborcost,chmoneysL); 
cout<<"Insert money\n\n1. Five dollars\n2. One dollar\n3. Quarter\n4. Dime\n5. Nickel\n\n"; 
cin>>choice2; 
switch (choice2) 
{ 
case 1: 
change = (500 - 60) / 100.0; 
fivedb++; 
chexmix --; 
chexmixcost = chexmixcost + 60; 
chexmixSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nChex Mix left: \n"<<chexmix<<endl; 
break; 
case 2: 
change = (100 - 60) / 100.0; 
onedb++; 
chexmix --; 
chexmixcost = chexmixcost + 60; 
chexmixSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nChex Mix left: \n"<<chexmix<<endl; 
break; 
case 3: 
money = 25; 
quarter++; 
while(money < 60) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3:

money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 60) / 100.00; 
chexmix --; 
chexmixcost = chexmixcost + 60; 
chexmixSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nChex Mix left: \n"<<chexmix<<endl; 
break; 
case 4: 
money = 10; 
dime++; 
while(money < 60) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break;

case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 60) / 100.00; 
chexmix --; 
chexmixcost = chexmixcost + 60; 
chexmixSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nChex Mix left: \n"<<chexmix<<endl; 
break; 
case 5: 
money = 5; 
nickel++; 
while(money < 60) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++;
 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 60) / 100.00; 
chexmix --; 
chexmixcost = chexmixcost + 60; 
chexmixSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nChex Mix left: \n"<<chexmix<<endl; 
break; 
default: 
cout<<"Entry Invalid."; 
} 
} 
else 
cout<<"Out of Chex Mix."; 
break; 
case 5: 
if(pepsi > 0) 
{ 
profit = profitF(profit,pmoneysP); 
overhead = overheadF(overhead,pmoneysO); 
laborcost = laborcostF(laborcost,pmoneysL); 
cout<<"Insert money\n\n1. Five dollars\n2. One dollar\n3. Quarter\n4. Dime\n5. Nickel\n\n"; 
cin>>choice2; 
switch (choice2) 
{ 
case 1: 
change = (500 - 90) / 100.0; 
fivedb++; 
pepsi --; 
pepsicost = pepsicost + 90; 
pepsiSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nPepsi's left: \n"<<pepsi<<endl; 
break; 
case 2:

change = (100 - 90) / 100.0; 
onedb++; 
pepsi --; 
pepsicost = pepsicost + 90; 
pepsiSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nPepsi's left: \n"<<pepsi<<endl; 
break; 
case 3: 
money = 25; 
quarter++; 
while(money < 90) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 90) / 100.00; 
pepsi --;

pepsicost = pepsicost + 90; 
pepsiSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nPepsi's left: \n"<<pepsi<<endl; 
break; 
case 4: 
money = 10; 
dime++; 
while(money < 90) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 90) / 100.00; 
pepsi --; 
pepsicost = pepsicost + 90; 
pepsiSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl;

cout<<"\nPepsi's left: \n"<<pepsi<<endl; 
break; 
case 5: 
money = 5; 
nickel++; 
while(money < 90) 
{ 
cout<<"Money inserted: "<<money<<"¢"; 
cout<<"\nPlease insert more: "; 
cin>>choice3; 
switch (choice3) 
{ 
case 1: 
money = money + 500; 
fivedb++; 
break; 
case 2: 
money = money + 100; 
onedb++; 
break; 
case 3: 
money = money + 25; 
quarter++; 
break; 
case 4: 
money = money + 10; 
dime++; 
break; 
case 5: 
money = money + 5; 
nickel++; 
break; 
default: 
cout<<"Entry invalid.\n"; 
} 
} 
change = (money - 90) / 100.00; 
pepsi --; 
pepsicost = pepsicost + 90; 
pepsiSS++; 
cout<<"\n\nHere is your change: \n$"<<change<<endl; 
cout<<"\nPepsi's left: \n"<<pepsi<<endl; 
break; 
default:
 
cout<<"Entry Invalid."; 
} 
} 
else 
cout<<"Out of Pepsi."; 
break; 
default: 
cout<<"Entry Invalid."; 
} 
{ 
if(coke < 5 && doritos < 5 && snickers < 5 && chexmix < 5 && pepsi < 5){ coke = cokeR(coke); 
doritos = doritosR(doritos); 
snickers = snickersR(snickers); 
chexmix = chexmixR(chexmix); 
pepsi = pepsiR(pepsi); 
} 
} 
{ 
if(onedb > 100 ) 
{ 
onedb = onedbR(onedb); 
} 
if(quarter > 100 && dime > 100 && nickel > 100) 
{ 
dime = dimeR(dime); 
quarter = quarterR(quarter); 
nickel = nickelR(nickel); 
} 
if(fivedb > 60) 
{ 
fivedb = fivedbR(fivedb); 
}} 
hours++; 
hoursF++; 
}while(hours<=6); 
} else 
{ 

turnONifOFFf(turnON); 
cin>>turnON; 
}
 
} while (turnON == 1); 
return 0; 
} 

void menu(int choic) 
{ 
cout<<"\n1. Coke: $0.95\n2. Doritos: $0.75\n3. Snickers: $0.55\n4. Chex Mix: $0.60\n5. Pepsi: $0.90\n"; 
cout<<"__________________________________________\n"; 
} 

void turnONf(int turnO) 
{ 
cout<<"\t\tPress 1 to turn on\n"; 
} 

void turnONifOFFf(int TOIOF) 
{ 
cout<<"Vending Machine Off... Press 1 to restart.\n"; 
} 

double salesPHCoke(int h, double cs) 
{ 
double cph; 
cph = cs / h; 
return cph; 
} 

double salesPHDoritos(int h, double cs) 
{ 
double cph; 
cph = cs / h; 
return cph; 
} 

double salesPHSnickers(int h, double cs) 
{ 
double cph; 
cph = cs / h; 
return cph; 
} 

double salesPHChexmix(int h, double cs) 
{ 
double cph; 
cph = cs / h; 
return cph; 
} 

double salesPHPepsi(int h, double cs) 
{
 
double cph; 
cph = cs / h; 
return cph; 
}

double salesPDCoke(double h, int cs) 
{ 
double cph; 
cph = h / cs; 
return cph; 
}

double salesPDDoritos(double h, int cs) 
{ 
double cph; 
cph = h / cs; 
return cph; 
}

double salesPDSnickers(double h, int cs) 
{ 
double cph; 
cph = h / cs; 
return cph; 
}

double salesPDChexmix(double h, int cs) 
{ 
double cph; 
cph = h / cs; 
return cph; 
}

double salesPDPepsi(double h, int cs) 
{ 
double cph; 
cph = h / cs; 
return cph; 
}

int cokeR(int r) 
{
r = 30; 
return r; 
}

int doritosR(int r) 
{
r=30; 
return r; 
}

int snickersR(int r) 
{
r = 30; 
return r; 
}

int chexmixR(int r) 
{
r = 30; 
return r; 
}

int pepsiR(int r) 
{
r = 30; 
return r; 
}

int fivedbR(int r) 
{ 
r = 20; 
return r; 
}

int onedbR(int r) 
{ 
r = 20; 
return r; 
}

int quarterR(int r) 
{ 
r = 20; 
return r; 
}

int dimeR(int r) 
{ 
r = 20; 
return r; 
}

int nickelR(int r) 
{ 
r = 20; 
return r; 
}

double salesTotalF(double a,double b,double c,double d,double e) 
{ 
double st; 
st = a + b + c + d + e;
return st; 
} 

double TotalCostF(double a,double b,double c,double d,double e) 
{ 
double tc; 
tc = (a + b + c + d + e)/100.0; 
return tc; 
} 

double profitF(double a, double b) 
{ 
double k; 
k = a + b; 
k = k / 100.0; 
return k; 
} 

double overheadF(double a, double b) 
{ 
double k; 
k = a + b; 
k = k / 100.0; 
return k; 
} 

double laborcostF(double a, double b) 
{ 
double k; 
k = a + b; 
k = k / 100.0; 
return k; 
}


