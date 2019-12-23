#include<iostream>
#include<stdio.h>
#include<string.h>
int main(){
    int T,sa,sb;
    std::string s;
    std::cin>>T;
    std::cout<<T;
    if(T!=0){
        do{
            std::cin>>sa>>sb>>s;
            std::cout<<s;
            int l=s.size();
            int conA,conB,indA,indB;
            T--;
            do{
                for(int i=0; i<l; i++){
                    if(s[i]=='A')
                        indA = i;
                    else if(s[i]=='B')
                        indB = i;
                }
            }while(conA<=conB);
            if(conA==conB)
                std::cout<<"unsafe\n";
            else
                std::cout<<"safe\n";
        }while(T);
    }
    return 0;
}
