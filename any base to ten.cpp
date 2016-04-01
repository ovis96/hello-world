#include<cstdio>
#include<string>
using namespace std;
int main()
{
    long long int dig,b, i=0,sum=0;
    char ara[100];
    while(scanf("%s",ara)!=EOF)
    {
        sum=0;
        scanf("%lld",&b);
        for(i=0;ara[i]!='\0';i++)
        {
            if(ara[i]<'0' || ara[i]>'9')dig=toupper(ara[i])-'A'+10;
            else dig=ara[i]-'0';
            sum=sum*b+dig;
            printf("%lld %lld\n",dig,sum);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
