int search(int a[],int value){
	int pos,flag=0,i;
	for(i=0;i<8;i++){
		if(value==a[i]){
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag==1){
		return pos;
	}else{
		return -1;
	}
}
