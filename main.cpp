#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>

void drawCircle(int r,int Start,int End,GLenum z)
{   int i;
    int edges=100;
    int factor=r;
    float cosine, sine;
    const float PI=3.142857;

    glBegin(z);
        for(i=Start;i<=End;i++)
        {
        cosine=factor*cos(i*2*PI/ edges);
        sine= factor*sin(i*2*PI/ edges);
        glVertex2f(cosine,sine);
        }

    glEnd();

}
static void redraw(void)
{
 glClearColor(0.0,0.0,0.0,0.0);
 glClear(GL_COLOR_BUFFER_BIT);

 glLoadIdentity();
 glTranslatef(0,0,-100.0);
 glColor3f(1.0,1.0, 1.0);
 drawCircle(15.5,0,100,GL_POLYGON);//back center

 glLoadIdentity();
 glTranslatef(-1.5,1.5,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 glRotatef (-60.0, 0.0, 0.0, 1.0);
 drawCircle(19,0,25,GL_POLYGON);//back right

 glLoadIdentity();
 glTranslatef(1.5,1.5,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 glRotatef (-210.0, 0.0, 0.0, 1.0);
 drawCircle(19,0,25,GL_POLYGON);//back left



 glLoadIdentity();
 glTranslatef(0,21,-100.0);
 glColor3f(0.0, 0.0, 0.0);
 drawCircle(8,0,100,GL_POLYGON);//top top

 glLoadIdentity();
 glTranslatef(-8,7.2,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 drawCircle(8,0,100,GL_POLYGON);//top left


 glLoadIdentity();
 glTranslatef(8,7.2,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 drawCircle(8,0,100,GL_POLYGON);//top right


 glLoadIdentity();
 glTranslatef(7,-10,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 drawCircle(5,0,100,GL_POLYGON);//bottom right

 glLoadIdentity();
 glTranslatef(-7,-10,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 drawCircle(5,0,100,GL_POLYGON);//bottom left


 glLoadIdentity();
 glTranslatef(0,-21,-100.0);
 glColor3f(0.0, 0.0, 0.0);
 drawCircle(8,0,100,GL_POLYGON);//bottom bottom


 glLoadIdentity();
 glTranslatef(16,3,-100.0);
 glColor3f(0.0, 0.0, 0.0);
 drawCircle(8,0,100,GL_POLYGON);//cut apple right

 glLoadIdentity();
 glTranslatef(-1,23,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 glRotatef (-90.0, 0.0, 0.0, 1.0);
 drawCircle(7,0,25,GL_POLYGON);//title center1

 glLoadIdentity();
 glTranslatef(6,16,-100.0);
 glColor3f(1.0, 1.0, 1.0);
 glRotatef (-270.0, 0.0, 0.0, 1.0);
 drawCircle(7,0,25,GL_POLYGON);//title center2

 glutSwapBuffers();
}
int main(int argc, char**argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
 glutInitWindowPosition(100,100);
 glutInitWindowSize(800,800);
 glutCreateWindow("Logo Apple");
 glutDisplayFunc(redraw);
 glMatrixMode(GL_PROJECTION);
 gluPerspective(45,1.0,10.0,200.0);
 glMatrixMode(GL_MODELVIEW);
 glutMainLoop();
 return 0;
}
