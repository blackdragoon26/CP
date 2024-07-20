
    for(int i=n-1;i>n-d;i--){
        arr[i]=arr[i-d];
    }
    
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }