#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <numeric>
#include <stack>
#include <queue>
#include <utility>
#include <iterator>
#include <cstdio>
#include <stdio.h>

#define dv   vector <long long int> v1,v2,v3;
#define ll   long long int
#define u_l  unsigned long long
#define dbl  double

#define maxi *max_element
#define mini *min_element
#define tc   long long int t; scanf("%lld",&t);  while(t--)
//#define pb   push_back
#define mp   make_pair

#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define dn   long long int n; scanf("%lld",&n)
#define dm   long long int m; scanf("%lld",&m)
#define dk   long long int k; scanf("%lld",&k)
#define ds   long long int s; scanf("%lld",&s)

#define pi(x) printf("%d ",x)
#define pll(x) printf("%lld ",x)
#define yes  printf("YES\n")
#define no   printf("NO\n")
#define el   printf("\n")
#define nn   "\n"
using namespace std;

struct hospital
{
    string name ;
    int age;
    string admissionDate ;
    string realeasingDate ;
    int bodyTem;

};


int pn=0,pid;  hospital corona[1000];


void addP(){

    printf("patient name : ");  cin >> corona[pn].name;
    printf("patient age : "); cin >> corona[pn].age;
    printf("Admission Date : "); cin >> corona[pn].admissionDate;
    printf("Body Temperature : "); cin >> corona[pn].bodyTem;

    printf("\ncongratulations ! You have added a new patainet\n");
    printf("Your patient ID is : "); cout << pn+1000 << nn;
    printf("-----------------------------------\n\n");


    ++pn;
}

void relP(){

    printf("Enter Patient Id : ");
    cin >> pid; pid-=1000; if(pid>=pn) printf("------------------------\nWrong ID insertion.\nTaking You to main page\n\n");

    else{
        printf("Enter release date : ");
        cin >> corona[pid].realeasingDate;

        printf("\ncongratulations ! You have added patient's realeasing Date\n");
        printf("-----------------------------------\n\n");
    }
}

void visitP(){

    printf("Enter Patient Id : ");
    cin >> pid; pid-=1000; if(pid>=pn) printf("------------------------\nWrong ID insertion.\nTaking You to main page\n\n");

    else {
        cout <<"\n\nshowing status of  "  << corona[pid].name << nn;
        cout << corona[pid].age << nn;
        cout << corona[pid].admissionDate << nn;

        string chk = corona[pid].realeasingDate ;
        if(chk.size()!=0) cout << corona[pid].realeasingDate << nn;

        cout << corona[pid].bodyTem << nn;

        printf("-----------------------------------\n\n");
    }

}

void updateP(){
    printf("Enter patient ID : ");
    cin >> pid; pid-=1000; if(pid>=pn) printf("------------------------\nWrong ID insertion.\nTaking You to main page\n\n");

    else{
            printf("\nChosse options to update : \n\n");
            printf("_1 for name\n");
            printf("_2 for age\n");
            printf("_3 for body Temperature\n");
            printf("_0 for done\n");

            while(1){
                char g[100];
                cin >> g;

                if(g[0] =='1') {
                    printf("_Update name :");
                    cin >> corona[pid].name;}

                else if(g[0] =='2') {
                    printf("_Update age :");
                    cin >> corona[pid].age;}

                else if(g[0] =='3') {
                    printf("_Update Body Temperature :");
                    cin >> corona[pid].bodyTem;}

                else if(g[0] =='0') break;
                else cout << "_Wrong key pressed\n\n";

                printf("Want to update more ? yes or no\n\n");
                char yesno[100]; char cmp[] = "no";
                cin >> yesno;

                if(strcmp(yesno,cmp)==0) break;

        }
    }
}



int main(){
    printf("WELCOME TO CORONA HOSPITAL\n");
    printf("---------------------------\n\n");

    while(1){
        char go[1000];

        printf("\nPress the no : \n");
        printf("1 for add patient\n");
        printf("2 for visit patient\n");
        printf("3 for release a patient\n");
        printf("4 for Update patient status\n");
        printf("0 for exit\n\n");

        cin >> go;

        if(go[0] =='1') addP();
        else if(go[0] =='2') visitP();
        else if(go[0] =='3') relP();
        else if(go[0] =='4') updateP();
        else if(go[0] =='0') break;
        else cout << "Wrong key pressed\n\n";
    }

} // main end
// mdshefatzeon@gmail.com
