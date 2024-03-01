//
// Created by 78410 on 2024/3/1.
//
//冒泡排序的基本思想是每次将一个最值排序到数组的最后位置
//通过不断遍历数组，比较两位数的值，发生数值交换，从而达到将最值排序到数组最后的位置
//该算法是稳定的
#include<iostream>
#include<vector>
using namespace std;

void Swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
//冒泡排序
void BubbleSort(vector<int>&a,int left,int right){
    for(int i=left+1;i<=right;i++){
        for(int j=left;j<=right-i+1;j++){
            if(a[j]>a[j+1]){
                Swap(a[j+1],a[j]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"请输入数组长度：";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"未排序的数组为：";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    BubbleSort(a,1,n-2);
    cout<<"排序好的数组为：";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}