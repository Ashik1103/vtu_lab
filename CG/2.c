#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
float angle;
void main(int argc,char **argv){
glutInit(&argc,argv);
puts("enter the angle");
scanf("%d",&angle);
glutCreateWindow("Triangle");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainloop();

}

void reshape(int w , int h){
glViewPort(0,0,w,h);
glLoadIdentity();

}

void display(){
glLoadIdentity();
glRotate(angle,0,0,1);
glBegin(GL_TRIANGLE);
glLoadIdentity();
glColor3f(1,0,0);
glVertex2f(-0.5,-0.5);
glVertex2f(0.5,-0.5);
glVertex2f(0,0.5);
glEnd();
glSwapBuffer();
}
