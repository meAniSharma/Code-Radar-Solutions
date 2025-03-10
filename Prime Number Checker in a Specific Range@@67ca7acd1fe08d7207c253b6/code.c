void printPrimesInRange(int a,int b){
    if(a==b){
        printf("No prime numbers");
        return;
    }
    if(a<2){
        a = 2;
    }
    for(int i=a;i<=b;i++){
        int num = i;
        int factor = 0;
        for(int j=2;j<num;j++){
            if(num%j == 0){
                factor++;
            }
        }
        if(!factor){
            printf("%d ", num);
        }
    }
}