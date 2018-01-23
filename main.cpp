#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,p,q,top,c=0,cnt=0,a,b,d,f;
    string key,sent,enc="",temp,kt;
    char mat[5][5];
    cout<<"enter the sentence\n";
    getline(cin,sent);
    cout<<"enter the key\n";
    getline(cin, key);
    int l =key.length();
    if(l>25)
    {
        cout<<"the key is too long\n";

    }
    if(sent.length()>100)
    {
        cout<<"the sentence is too long\n";
    }
    for(i=0;i<key.length();i++)
    {
        c=0;
       for(j=0;j<i;j++)
       {
          if(key[j]==key[i])
          {
              c++;
          }
       }
       if(c==0)
       {
           kt+=key[i];
       }
    }
    key=kt;
    c=0;
    top=sent.length();
    for(i=0;i<sent.length();i++)
    {
        if(isalpha(sent[i]))
        {
            continue;
        }
        else
            {
            for(j=i;j<sent.length();j++)
            {
                sent[j]=sent[j+1];
            }
            top--;
        }
    }
    for(i=0;i<top;i++)
    {
        if(isalpha(sent[i]) && isalpha(sent[i+1]) && sent[i]==sent[i+1])
        {
            sent.insert(i+1,"x");
        }
    }
    if(top%2!=0)
    {
        sent+="x";
    }
    for(i=0;i<sent.length();i++)
    {
        if(isalpha(sent[i]))
        {
            temp+=sent[i];
        }
    }
    for(i=0;i<temp.length();i=i+3)
    {
        temp.insert(i+2," ");
    }

 for(i=0;i<5;i++)
 {
     for(j=0;j<5;j++)
     {
        mat[i][j]=key[c];
        c++;
     }
 }
for(i=0;i<5;i++)
 {
     for(j=0;j<5;j++)
     {
         cnt++;
         if(cnt==key.length())
         {
             p=i;
             q=j+1;
             break;
         }
     }
 }
             int k=97;
    while(k<=122)
    {
               c=0;
        if(k!=106)
        {
            for(int n=0;n<key.length();n++)
            {
                if((int)key[n]==k)
                {
                       c++;
                }
            }
            if(c==0)
            {
                mat[p][q]=(char)k;
                q++;
                if(q>=5)
                {
                    p++;
                    q=0;
                }
            }
        }
        k++;
    }
    cout<<"the sentence is:"<<temp<<endl;
    cout<<"the matrix is:"<<endl;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    c=0;
    for(i=0;i<sent.length();i=i+2)
    {
       for(j=0;j<5;j++)
       {
           for(int k=0;k<5;k++)
           {
               if(mat[j][k]==sent[i])
               {
                   a=j;
                   b=k;
               }
               else if(mat[j][k]==sent[i+1])
               {
                   d=j;
                   f=k;
               }
           }
       }
       enc+=mat[d][b];
       enc+=mat[a][f];
       enc+=" ";
    }
    cout<<endl<<enc;
    return 0;
}
