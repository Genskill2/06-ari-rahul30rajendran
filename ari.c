#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include<ctype.h>
#include<math.h>

string ari(string s)
 
{int letters=0;
float ari=0;
string ans;
int words=1,sentences=0;
for(int i=0;i<strlen(s);i++)
{if(isalnum(s)==1)
letters++;
if((s[i]=='.'&&s[i+1]==0)||s[i]=='?'||s[i]=='!'){
sentences++;
}
if(s[i]==' ')
words++;
}
ari=4.71*((float)letters/words)+0.5*((float)words/sentences)-21.43;
 int ari2=ceil(ari);
switch(ari2){
case 1 : ans="kindergarten";
break;
case 2 : ans= "First/Second Grade";
break;
case 3:ans="Third Grade";
break;
case 4 :ans= "Fourth Grade" ; 
break;
case 5 : ans= "Fifth Grade";  
break;
case 6 : ans= "Sixth Grade";
break;
case 7 : ans= "Seventh Grade"; 
break;
case 8 : ans= "Eighth Grade";
break;
case 9 : ans= "Ninth Grade";
break;
case 10: ans= "Tenth Grade ";
break;
case 11 : ans= "Eleventh Grade";  
break;
case 12 :ans= "Twelfth grade";
break;
case 13 :ans= "College student";
break;
case 14:ans="Professor"; 
break;
default : ans="not found";
break;
}
return ans;
}
