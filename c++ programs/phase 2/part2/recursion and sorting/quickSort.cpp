#include<iostream>
using namespace std;

int partitioning(int arr[],int l,int h){
    int i = l;
    int j = h;
    int pivot = arr[l];

    while(true){

        if(arr[i] <= pivot){
            // i index pr chhota ya barabr hai i aage badha do
            // kyu ki i index se hm pivot se bada dhundh rhe hai
            i++;
        }

        if(arr[j] > pivot){
            // j index pr bada hai j pichhe krdo
            // kyu ki j index se hm pivot se chhota ya brabr dhundh rhe hai
            j--;
        }
        if(i<j && arr[i]>pivot && arr[j]<=pivot){
            //here i<j means also i<h because (j<=h)--> i last pr nhi hai 
            //  --> i index pr pivot se bada mil gya 
            swap(arr[i],arr[j]);// i and j not cross 
            i++;
            j--;
        }
        if(i>=j && ((arr[i] > pivot) || (i==h)) && arr[j]<=pivot){
            // here ya to i index pr bada mil gya ya i last pr pahuch gya
            swap(arr[l],arr[j]);// i and j cross kr gye swap pivot element and j element
            return j;// correct position of pivot element
        }
    }
}


void quickSort(int arr[],int l,int h){
    if(l>=h){
        return ;
    }
    int j = partitioning(arr,l,h);//j is correct position of pivot
    //devide both array around pivot and use recursion at them
    quickSort(arr,l,j-1);
    quickSort(arr,j+1,h);

}

int main(){

    // 38 27 43 3 9 82 10

    int arr[100],n;
    cout<<"enter array size : ";
    cin>>n;

    cout<<"enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"array before sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    quickSort(arr,0,n-1);

    cout<<"array after sorted : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}