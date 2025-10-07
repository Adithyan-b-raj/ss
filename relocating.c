#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void convert(char h[12]);
char bitmask[12];
char bit[12];
char bit[12]={0};
void main()
{
char add[6],length[10],input[10],binary[12],relocbit,ch,pn[5];
int start,inp,len,i,address,opcode,addr,actualadd,tlen;
FILE *fp1,*fp2;
printf("\n\n Enter the actual starting address");
scanf("%x",&start);
fp1=fopen("RInput.txt","r");
fp2=fopen("ROutput.txt","w");
fscanf(fp1,"%s",input);
fprintf(fp2,"_____________\n");
fprintf(fp2,"ADDRESS\tCONTENT\n");
fprintf(fp2,"_____________\n");
while(strcmp(input,"E")!=0)
        {
        if(strcmp(input,"H")==0)
                {
                fscanf(fp1,"%s",pn);
                fscanf(fp1,"%x",add);


