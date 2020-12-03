#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int n,W;
int wt[10],val[10];
 
void simple_fill() {
    int cur_w;
    float tot_v;
    int i, max;
    int used[10];
 
    for (i = 0; i < n; ++i)
        used[i] = 0;
 
    cur_w = W;
    while (cur_w > 0) {
        max=-1;
        for (i = 0; i < n; ++i)
            if ((used[i] == 0) && ((max == -1) || ((float)val[i]/wt[i] > (float)val[max]/wt[max])))
                max = i;
 
        used[max] = 1;
        cur_w -= wt[max];
        tot_v += val[max];
        if (cur_w >= 0)
            cout<<"Added object:"<<max+1<<"("<<val[max]<<"$ "<<wt[max]<<"kg) completely in the bag. Space left:"<<cur_w<<endl;
        else {
            cout<<"Added"<<(int)((1 + (float)cur_w/wt[max]) * 100)<<"%("<< val[max]<<"$"<< wt[max]<<"Kg) of object"<<max+1<<"in the bag"<<endl;
			tot_v -= val[max];
            tot_v += (1 + (float)cur_w/wt[max]) * val[max];
        }
    }
 
    cout<<"Filled the bag with objects worth"<<0.2*tot_v<<"$";
}
 
int main(int argc, char *argv[]) {
	int i;
	cout<<"Enter the valus of number of items:"<<endl;
	cin>>n;
	cout<<"Enter the weight of the knapsack:"<<endl;
	cin>>W;
	cout<<"Enter the values of the items:"<<endl;
    for(i=0;i<n;i++)
    cin>>val[i];
    cout<<"Enter the weight of the items:"<<endl;
    for(i=0;i<n;i++)
    cin>>wt[i];
    simple_fill();
 
    return 0;
}
