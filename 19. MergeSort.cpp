//Program For Merge Sort

#include<iostream>  
using namespace std;

void merge(int a[], int beg, int mid, int end){  
    int i=beg,j=mid+1,k,index = beg;  
    int temp[10];  
    while(i<=mid && j<=end){  
        if(a[i]<a[j]){  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else{  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid){  
        while(j<=end){  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else{  
        while(i<=mid){  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = beg;  
    while(k<index){  
        a[k]=temp[k];  
        k++;  
    }  
}  
void mergeSort(int a[], int beg, int end)  {  
    int mid;  
    if(beg<end){  
        mid = (beg+end)/2;  
        mergeSort(a,beg,mid);  
        mergeSort(a,mid+1,end);  
        merge(a,beg,mid,end);  
    }  
}  
int main(){  
    int a[10]= {11, 40, 7, 77, 3, 4, 1, 78, 34, 2};  
    int i;  
    mergeSort(a,0,9);  
    cout<<"printing the sorted elements";  
    for(i=0;i<10;i++){  
       cout<<"\n"<<a[i];  
    }  
      
}  
