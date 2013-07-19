#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

void cylinder(float alas,float atas,float tinggi);
void blok(float tebal,int lebar,int panjang);

GLfloat  source_light[]={0.30,0.30,0.30,0.50};
double Loop,LoopAll=0;
bool on=false;


void Mobil(void)
{
glClearColor(1.0,9.0,1.0,0.0);  //blackground
glShadeModel(GL_SMOOTH);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluPerspective(60.0,1.5,10.0,1000.0);

glEnable (GL_DEPTH_TEST);
glPolygonMode   (GL_FRONT_AND_BACK,GL_FILL);
glEnable (GL_LIGHTING);
glLightfv (GL_LIGHT7,GL_DIFFUSE,source_light);
glEnable (GL_LIGHT7);
glEnable (GL_COLOR_MATERIAL);
glColorMaterial (GL_FRONT_AND_BACK,GL_AMBIENT);

}

void display(void)
{

glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();


glTranslatef(0,0,-100);// besar kecilnya mobil

Loop++;
   glRotatef(Loop,0.0,5.0,0.0);//mobil yang berotasi


glColor3f(9.9,9.9,0.0);
blok(10, 3, 2); // bag stgh bawah
glTranslatef(0, 9, 0);
blok(10, 10, 2); // bag  stgh atas
glTranslatef(10, -10,0);
blok(10, 12, 2);
glRotatef(-35, 0, 0, 15);
glTranslatef(28, 27,0); // kabin
blok(10, 2, 2); // kabin
glTranslatef(2, 4.9,-2.5);// kaca depan
glColor3f(0.9,0.9,0.9);// warna kaca
blok(0.5, 20, 31); // kaca depan


glColor3f(0.0,0.0,0.0);// roda kanan depan
glTranslatef(15,-7,-4);
cylinder(5, 5,3);

glColor3f(0.0,0.0,0.0); //roda kiri belakang
glTranslatef(-70,-48,0);
cylinder(5, 5,3);

glColor3f(0.0,0.0,0.0); //roda kanan belakang 
glTranslatef(3,0,23);
glRotatef(180,0,180,0);
cylinder(5, 5,3);

glColor3f(0.0,0.0,0.0); //roda kanan depan 
glTranslatef(-68,48,0);
glRotatef(180,0,0,180);
cylinder(5, 5,3);

glColor3f(0.9,0.9,0.9); //kaca belakang
glTranslatef(-100, 52,18.5);
glRotatef(180,-94,180,0);
blok(2, 4, 8);

glColor3f(0.9,0.9,0.9); //pintu kiri belakang
glTranslatef(-5, -19,-3);
glRotatef(180,0,180,180);
blok(2, 7, 4);

glColor3f(0.9,0.9,0.9); //pintu kiri depan 
glTranslatef(0, 0,-72);
glRotatef(180,0,180,0);
blok(2, 7, 4);

glColor3f(0.9,0.9,0.9); //pintu kanan depan 
glTranslatef(1, 20,6);
glRotatef(180,0,180,0);
blok(2, 7, 4);

glColor3f(0.9,0.9,0.9); //kaca kanan  
glTranslatef(-4, 0,10);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kanan  
glTranslatef(0, 0,15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kanan  
glTranslatef(0, 0,15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kanan  
glTranslatef(0, 0,15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kanan  
glTranslatef(0, 0,15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kanan  
glTranslatef(0, 0,15);
glRotatef(0,0,0,0);
blok(2, 4, 5);

glColor3f(0.9,0.9,0.9); //kaca kiri  
glTranslatef(0, -20,2);
glRotatef(0,0,0,0);
blok(2, 4, 4);

glColor3f(0.9,0.9,0.9); //kaca kiri  
glTranslatef(0, 0,-24);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kiri  
glTranslatef(0, 0,-15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kiri  
glTranslatef(0, 0,-15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kiri  
glTranslatef(0, 0,-15);
glRotatef(0,0,0,0);
blok(2, 4, 7);

glColor3f(0.9,0.9,0.9); //kaca kiri  
glTranslatef(0, 0,-9);
glRotatef(0,0,0,0);
blok(2, 4, 4);

glColor3f(6.0, 7.0, 8.0);//lampu depan kiri
glRotatef(180,0,0,0);
glTranslatef(-9,-3,30);
cylinder(2, 2,3);

glColor3f(6.0, 7.0, 8.0);//lampu depan kanan
glRotatef(0,0,180,0);
glTranslatef(0,-13.5,0);
cylinder(2, 2,3);

glColor3f(5.0, 0.0, 0.0);//lampu sent depan kanan
glRotatef(0,0,0,0);
glTranslatef(-4,0,0.5);
cylinder(1,1,2);

glColor3f(5.0, 0.0, 0.0);//lampu sent depan kanan
glRotatef(0,0,0,0);
glTranslatef(0,13.2,0);
cylinder(1,1,2);

glColor3f(5.0, 0.0, 0.0); //lampu blk 
glTranslatef(5, 0,-118);
glRotatef(0,0,0,0);
blok(2, 2.5, 2);

glColor3f(5.0, 0.0, 0.0); //lampu blk 
glTranslatef(0, -14,0);
glRotatef(0,0,0,0);
blok(2, 2.5, 2);

glColor3f(0.0,0.0,0.0); //plat no blk
glTranslatef(-4,6,0);
glRotatef(180,0,180,180);
blok(2, 1, 2);

glColor3f(0.0,0.0,0.0); //plat no depan
glTranslatef(0,118.5,2);
glRotatef(180,0,180,0);
blok(2, 1, 2);


glutSwapBuffers();

}


void cylinder(float alas,float atas,float tinggi)
{
float i;
glPushMatrix();
glTranslatef(1.0,0.0,-alas/8);
glutSolidCone(alas,0,32,4);
for(i=0;i<=tinggi;i+=alas/24)
{
glTranslatef(0.0,0.0,alas/24);
glutSolidTorus(alas/4,alas-((i*(alas-atas))/tinggi),16,16);
}
glTranslatef(0.0,0.0,alas/4);
glutSolidCone(atas,0,20,1);
glColor3f(1.,0.,0.);
glPopMatrix();
}

void blok(float tebal,int lebar,int panjang)
{
float i,j;
glPushMatrix();
for(i=0;i<panjang;i++)
{
glTranslatef(-(lebar+1)*tebal/2,0.0,0.0);
for(j=0;j<lebar;j++)
{
glTranslatef(tebal,0.0,0.0);
glutSolidCube(tebal);
}
glTranslatef(-(lebar-1)*tebal/2,0.0,tebal);
}
glPopMatrix();
}
void tampil()
{
display();
}

int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);//|GLUT_DEPTH);
glutInitWindowPosition(10,10);
glutInitWindowSize(1000,700);
glutCreateWindow("BUS");
glutDisplayFunc(display);
glutIdleFunc(tampil);
Mobil();
glutMainLoop();
return(0);
}
