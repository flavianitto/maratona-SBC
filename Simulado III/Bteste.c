//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//#include <cstdio>
//#include<stack>
//#include<vector>
//#include<algorithm>
//using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, test, j, len;
        char expression[150];
        scanf("%d\n", &test);
        for(i=1;i<=test;i++)
        {
            stack<char> mystack;
            cin.getline(expression,150);
            len=strlen(expression);
            if(len==0)
            {
                printf("Yes\n");
                continue;
            }
            for(j=0; j<len; j++)
            {
                if(expression[j]=='(' || expression[j]=='[')
                    mystack.push(expression[j]);
                else if (!mystack.empty() && ((mystack.top()=='(') &&(expression[j]==')' ) || (mystack.top()=='[') &&expression[j]==']' ))
                        mystack.pop();
                else if(expression[j]==' ')
                    continue;
                else
                        break;
 
            }
 
             if(mystack.empty() && len==j)
                printf("Yes\n");
            else
                printf("No\n");
 
        }
    return 0;
}
