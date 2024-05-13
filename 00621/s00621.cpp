# include<cstdio>
# include<cstring>
using namespace std;

int main()
{
    int n;
    scanf("%d",n);
    getchar();
    char c[1001];
    while(n--)
    {
        gets(c);
        int len = strlen(c);
        if((strcmp(c,"1")==0||strcmp(c,"4")==0||strcmp(c,"78")==0)) puts("+");
        else if(c[len-2]=='3'&&c[len-1]=='5') puts("-");
        else if(c[0]=='9'&&c[len-1]=='4') puts("*");
        else puts("?");
    }
    return 0;
}

