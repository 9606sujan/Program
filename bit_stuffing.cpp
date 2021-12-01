//Program 
#include<iostream> 
#include <string.h> 
using namespace std; 
 
int main() 
{ 
int i,j,count=0; 
char frame[100],stufframe[100]="\0"; 
char dframe[100]="\0",recframe[100]="\0"; 
cout<<"\n--------------------Sender-----------------------------"; 
cout<<"\nEnter input frame (0's & 1's only): "; 
cin>>frame; 
strcpy(stufframe,"01111110"); 
j=strlen(stufframe); 
for(i=0;frame[i]; i++) 
{ 
if(frame[i]=='1') 
count++; 
else 
count=0; 
stufframe[j++]=frame[i]; 
if(count==5) 
{ 
stufframe[j++]='0'; 
count=0; 
} 
} 
strcat(stufframe,"01111110"); 
cout<<"\nAfter Bit Stuffing:"<<stufframe; 
cout<<"\n---------------Receiver------------------------------"; 
strcpy(recframe,stufframe); 
j=0; 
for(i=0;i<strlen(recframe);i++) 
{ 
if(recframe[i]=='0'&&recframe[i+1]=='1'&&recframe[i+2]=='1'&&recframe[i+3]=='1'&&recfame[i+4]=
='1'&&recframe[i+5]=='1'&&recframe[i+6]== '1' &&recframe[i+7]=='0') 
i=i+8; 
dframe[j++]=recframe[i]; 
if(recframe[i]=='1'&&recframe[i+1]=='1'&&recframe[i+2]=='1'&&recframe[i+3]=='1'&&recframe[i+4]
=='1') 
{ 
i++; 
dframe[j++]=recframe[i++]; 
dframe[j++]=recframe[i++]; 
dframe[j++]=recframe[i++]; 
dframe[j++]=recframe[i++]; 
} 
} 
cout<<"\nBits after destuffing:"<<dframe<<endl; 
return 0; 
} 
