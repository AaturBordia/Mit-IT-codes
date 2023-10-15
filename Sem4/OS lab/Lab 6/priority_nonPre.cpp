#include<bits/stdc++.h>
using namespace std;

struct process{
    int pid;
    int art;
    int bt;
    int priority;// more value more priority
    int ct,wt, tat, rt, start_time;
}proc[100];

/*int compare(const void* a, const void* b){
    int priorityA = ((struct process*)a)->priority;
    int priorityB= ((struct process*)b)->priority;

    if(priorityA>priorityB)return -1;
    if(priorityA<priorityB)return 1;
    return 0;
}*/

int main(){
    int comp=0, curr_time=0;
    int sumWT=0, sumTAT=0;
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;
    int isComp[n];//checks if all the processes are completed or not
    for(int i=0;i<n; i++){
        isComp[i] = 0 ;
    }
    cout<<"Enter the process id, art, bt and priority: ";
    for(int i=0; i<n; i++){
        cin>>proc[i].pid>>proc[i].art>>proc[i].bt>>proc[i].priority;
    }

    //qsort(proc, n, sizeof(struct process), compare);
    /*for(int i=0; i<n; i++){
        cout<<proc[i].pid<<"\t"<<proc[i].art<<"\t"<<proc[i].bt<<"\t"<<proc[i].priority<<endl;
    }*/

    while(comp!=n){
        int max_prio = -1;
        int max_idx = -1;
        for(int i=0; i<n; i++){
            if(proc[i].art<=curr_time && isComp[i]==0){
                if(proc[i].priority>max_prio){
                    max_prio = proc[i].priority;
                    max_idx = i;
                }

                if(proc[i].priority==max_prio){
                    if(proc[i].art<proc[max_idx].art){
                        max_prio = proc[i].priority;
                        max_idx = i;
                    }
                }
            }

        }

        if(max_idx==-1){
            curr_time++;
        }
        else{
            proc[max_idx].start_time = curr_time;
            proc[max_idx].ct =  proc[max_idx].start_time+proc[max_idx].bt;
            proc[max_idx].tat = proc[max_idx].ct-proc[max_idx].art;
            proc[max_idx].wt = proc[max_idx].tat-proc[max_idx].bt;
            sumWT += proc[max_idx].wt;
            sumTAT += proc[max_idx].tat;
            comp++;
            isComp[max_idx] = 1;
            curr_time = proc[max_idx].ct;
        }
    }

    cout<<"PID\t"<<"ART\t"<<"BT\t"<<"CT\t"<<"TAT\t"<<"WT"<<endl;
    for(int i=0; i<n; i++){
        cout<<proc[i].pid<<"\t"<<proc[i].art<<"\t"<<proc[i].bt<<"\t"<<proc[i].ct<<"\t"<<proc[i].tat<<"\t"<<proc[i].wt<<endl;
    }
    cout<<endl;

    cout<<"Average Waiting time: "<<float(sumWT/n)<<endl;
    return 0;
}
