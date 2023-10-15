#include<bits/stdc++.h>
using namespace std;

struct process{
    int pid;
    int art;
    int bt;
    int ct, wt, tat, rt, start_time;
}
proc[100];

int compare(const void* a, const void* b){
    int artA = ((struct process*)a)->art;
    int artB = ((struct process*)b)->art;

    if(artA<artB)return -1;
    if(artA>artB)return 1;
    return 0;
}

int main(){
    int comp=0, curr_time=0;
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;
    cout<<"Enter the process id, art, bt: ";
    for(int i=0; i<n; i++){
        cin>>proc[i].pid>>proc[i].art>>proc[i].bt;
    }

    qsort(proc, n, sizeof(struct process), compare);

    int sumWT=0, sumTAT=0;
    int idx = 0;
    while(idx!=n){
        //cout<<"min index: "<<idx<<endl;
        cout<<"current time: "<<curr_time<<endl;
        if(proc[idx].art>curr_time){
            cout<<"im in the if condition"<<endl;
            curr_time++;
        }
        else{
            cout<<"im in the else condition"<<endl;
            //to find ct, wt, tat
            proc[idx].start_time = curr_time;
            proc[idx].ct =  proc[idx].start_time+proc[idx].bt;
            proc[idx].tat = proc[idx].ct-proc[idx].art;
            proc[idx].wt = proc[idx].tat-proc[idx].bt;
            sumWT += proc[idx].wt;
            sumTAT += proc[idx].tat;
            idx++;
            curr_time = proc[idx].ct;
            //cout<<"curr time: "<<curr_time;
        }
        cout<<"idx: "<<idx<<endl;
    }

    cout<<"PID\t"<<"ART\t"<<"BT\t"<<"CT\t"<<"TAT\t"<<"WT"<<endl;
    for(int i=0; i<n; i++){
        cout<<proc[i].pid<<"\t"<<proc[i].art<<"\t"<<proc[i].bt<<"\t"<<proc[i].ct<<"\t"<<proc[i].tat<<"\t"<<proc[i].wt<<endl;
    }
    cout<<endl;

    cout<<"Average Waiting time: "<<float(sumWT/n)<<endl;

    return 0;
}
