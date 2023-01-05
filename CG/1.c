#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

int xstart,ystart,xend,yend;
void main(int argc,char **argv){
glutInit(&argc,argv);
puts("Enter 4 values: ");
scanf("%d%d%d%d",&xstart,&xend,&ystart,&yend);
glutCreateWindow("line");
glutDisplay(display);
glutReshape(reshape);
glutMainloop();

}

void display(){
line();
glFlush();
}

void line(){
int dx=fabs(xend-xstart),dy=(yend-ystart),p=2*dy-dx, ty=2*dy,txy=2*(dy-dx);
int x,y;
if(xstart>xend){
	x=xend;
	y=yend;
	xend=xstart;
	
}else{
	x=xstart;
	y=ystart;

}
sp(x,y);
while(x<xend){	
x++;
if(p<0){
	p+=ty;
}else{
	p+=txy;
}
sp(x,y);
}
}

void sp(int x, int y){
glBegin();
glOrtho2i(x,y)
glEnd();

}

void reshape(int w , int h){
glViewport(0,0,w,h);
glLoadIdentity();
gluOrtho2D(0,100,0,100);
}
