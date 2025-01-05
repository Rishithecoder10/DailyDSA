 int inSequence(int a, int b, int c) {
        // code here
       if(c==0){
           return (a==b);
       }
       
       if((c>0&&a>b)||(c<0&&b<a)){
           return 0;
       }
       
       if((b-a)%c==0){
           return 1;
       }
       return 0;
    }
