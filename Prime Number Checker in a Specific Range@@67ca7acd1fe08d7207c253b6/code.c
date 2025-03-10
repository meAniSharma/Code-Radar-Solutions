void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        int num = i;
        int factor = 0;
        for(int j=2;j*j<num;j++){
            if(num%j != 0){
                factor++;
            }
        }
        if(factor>0){
            printf("%d ", num);
        }
    }
}