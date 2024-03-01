#include<stdio.h>
float pi=3.14;
void calAreaofCircle(int redius){
	float carea = pi*redius*redius;
	printf("Area of circle: %f\n",carea);
}
void calAreaofReactangle(int length,int width){
	int rarea = length*width;
	printf("Area of Reactangle: %d\n",rarea);
}
void calAreaofTringle(int base,int hight){
	float tarea=(base*hight)/2;
	printf("Area of Tringle: %f\n",tarea);
}
void calAreaofQuadrilateral(int b,int h){
	int qarea = b*h;
	printf("Area of Quadrilateral: %d\n",qarea);
}
void calAreaofCircumference(int redius){
	float  ccarea=2*pi*redius;
	printf("Area of Circumference: %f\n",ccarea);
}
int main(){
	int redius,length,width,base,hight,b,h;
	printf("Enter redius of circle :");
	scanf("%d",&redius);
	printf("\nEnter length and width of rectangle :");
	scanf("%d%d",&length,&width);
	printf("\nEnter the base and hight of tringle :");
	scanf("%d%d",&base,&hight);
	printf("\nEnter the base and hight of Quad : ");
	scanf("%d%d",&b,&h);
	printf("1.Area of circle\n ");
	printf("2.Area of Reactangle\n ");
	printf("3.Area of Tringle\n ");
	printf("4.Area of Quadrilateral\n ");
	printf("5.Area of Circumference\n ");
	
	int choice;
	printf("\nEnter choice to cal Area:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			calAreaofCircle(redius);
			break;
		case 2:
		    calAreaofReactangle(length,width);
			break;
		case 3:
			calAreaofTringle(base,hight);
			break;
	    case 4:
	    	calAreaofQuadrilateral(b,h);
	    	break;
	    case 5:
	    	calAreaofCircumference(redius);
	    	break;
	    default:
	    	printf("Wrong choice..!");
	}
	return 0;
}
