#include<cstdio>
#include <GL/gl.h>
#define PI 3.141516
#include <GL/glut.h>
#include <Math.h>

GLfloat position = 0.0f;
GLfloat position2 =0.0f;
GLfloat position3 =0.0f;
GLfloat position4 =0.0f;
GLfloat position5 =0.0f;
GLfloat position6 =0.0f;
GLfloat position7 =0.0f;
GLfloat speed = 0.009f;
GLfloat speed2 =0.009f;
GLfloat speed3 =0.008f;
GLfloat speed4 =0.02f;
GLfloat speed5 =0.01f;
GLfloat speed6 =0.02f;
GLfloat speed7 =0.005f;

GLfloat i= 0.0f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

        position += speed;


	glutPostRedisplay();
	glutTimerFunc(100, update, 0);

}

void update2(int value) {
    if(position2 < -1.0)
        position2 = 1.2f;
        position2 -= speed2;


     glutPostRedisplay();
     glutTimerFunc(100, update2, 0);

}

void update3(int value){
    if(position3 > 1.0)
       position3 = -1.2f;
       position3 += speed3;

    glutPostRedisplay();
    glutTimerFunc(100, update3, 0);

}

void update4(int value){
   if(position4 < -1.0)
      position4 = 1.2f;
      position4 -= speed4;

    glutPostRedisplay();
    glutTimerFunc(100, update4, 0);

}

void update5(int value){
   if(position5 > 1.0)
      position5 = -0.8f;
      position5 += speed5;

   glutPostRedisplay();
   glutTimerFunc(100, update5, 0);

}
void update6(int value){
   if(position6< -1.0)
       position6 = 1.2f;
       position6 -= speed6;

   glutPostRedisplay();
   glutTimerFunc(100, update6, 0);

}
void update7(int value){
   if(position7 > 1.0)
      position7 = -0.8f;
      position7 += speed5;

   glutPostRedisplay();
   glutTimerFunc(100, update7, 0);

}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.009f;
			speed2+=0.009f;
			speed3+=0.009f;
			speed4+=0.009f;
			speed5+=0.009f;
			speed6+=0.009f;
		}

	}
	else if(button ==GLUT_RIGHT_BUTTON)
    {
        if(state == GLUT_DOWN)
            {
            speed -=0.009f;
            speed2 -=0.009f;
            speed3 -=0.009f;
            speed4 -=0.009f;
            speed5 -=0.009f;
            speed6 -=0.009f;
        }
    }

	glutPostRedisplay();
}




void road(){
    glBegin(GL_QUADS);
    glColor3ub(31,31,31); //black road
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 1
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.85f, -0.70f);
    glVertex2f(-0.70f, -0.70f);
    glVertex2f(-0.75f, -0.65f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 2
    glVertex2f(-0.55f, -0.65f);
    glVertex2f(-0.50f, -0.70f);
    glVertex2f(-0.35f, -0.70f);
    glVertex2f(-0.40f, -0.65f);


    glColor3f(1.0f,1.0f,1.0f); //middle white 3
    glVertex2f(-0.05f, -0.65f);
    glVertex2f(-0.00f, -0.70f);
    glVertex2f(-0.15f, -0.70f);
    glVertex2f(-0.20f, -0.65f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 5
    glVertex2f(0.45f, -0.65f);
    glVertex2f(0.50f, -0.70f);
    glVertex2f(0.65f, -0.70f);
    glVertex2f(0.60f, -0.65f);

    glColor3f(1.0f,1.0f,1.0f); //middle white 6
    glVertex2f(0.75f, -0.65f);
    glVertex2f(0.80f, -0.70f);
    glVertex2f(0.95f, -0.70f);
    glVertex2f(0.90f, -0.65f);

    glColor3f(1.0f,1.0f,1.0f); //white upper road
    glVertex2f(1.0f, -0.34f);
    glVertex2f(-1.0f, -0.34f);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); // upper red
    glVertex2f(-0.75f, -0.34f);
    glVertex2f(-0.9f, -0.34f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.75f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.45f, -0.34f);
    glVertex2f(-0.60f, -0.34f);
    glVertex2f(-0.60f, -0.3f);
    glVertex2f(-0.45f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.15f, -0.34f);
    glVertex2f(-0.30f, -0.34f);
    glVertex2f(-0.30f, -0.3f);
    glVertex2f(-0.15f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(0.15f, -0.34f);
    glVertex2f(0.00f, -0.34f);
    glVertex2f(0.00f, -0.3f);
    glVertex2f(0.15f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(0.45f, -0.34f);
    glVertex2f(0.30f, -0.34f);
    glVertex2f(0.30f, -0.3f);
    glVertex2f(0.45f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(0.75f, -0.34f);
    glVertex2f(0.60f, -0.34f);
    glVertex2f(0.60f, -0.3f);
    glVertex2f(0.75f, -0.3f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(1.0f, -0.34f);
    glVertex2f(0.90f, -0.34f);
    glVertex2f(0.90f, -0.3f);
    glVertex2f(1.0f, -0.3f);

    glColor3f(1.0f,1.0f,1.0f); //white lower road
    glVertex2f(1.0f, -0.96f);
    glVertex2f(-1.0f, -0.96f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-1.0f, -0.96f);
    glVertex2f(-0.9f, -0.96f);
    glVertex2f(-0.9f, -1.0f);
    glVertex2f(-1.0f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.70f, -0.96f);
    glVertex2f(-0.55f, -0.96f);
    glVertex2f(-0.55f, -1.0f);
    glVertex2f(-0.70f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.40f, -0.96f);
    glVertex2f(-0.25f, -0.96f);
    glVertex2f(-0.25f, -1.0f);
    glVertex2f(-0.40f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.01f, -0.96f);
    glVertex2f(0.15f, -0.96f);
    glVertex2f(0.15f, -1.0f);
    glVertex2f(-0.01f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(0.45f, -0.96f);
    glVertex2f(0.29f, -0.96f);
    glVertex2f(0.29f, -1.0f);
    glVertex2f(0.45f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(0.75f, -0.96f);
    glVertex2f(0.60f, -0.96f);
    glVertex2f(0.60f, -1.0f);
    glVertex2f(0.75f, -1.0f);

    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(1.0f, -0.96f);
    glVertex2f(0.9f, -0.96f);
    glVertex2f(0.9f, -1.0f);
    glVertex2f(1.0f, -1.0f);

    glColor3f(1.0f,1.0f,0.0f);//crossing
    glVertex2f(0.28f, -0.34f);
    glVertex2f(0.13f, -0.34f);
    glVertex2f(0.14f, -0.38f);
    glVertex2f(0.29f, -0.38f);

    glVertex2f(0.295f, -0.42f);
    glVertex2f(0.145f, -0.42f);
    glVertex2f(0.155f, -0.46f);
    glVertex2f(0.305f, -0.46f);

    glVertex2f(0.31f, -0.50f);
    glVertex2f(0.16f, -0.50f);
    glVertex2f(0.17f, -0.54f);
    glVertex2f(0.32f, -0.54f);

    glVertex2f(0.33f, -0.58f);
    glVertex2f(0.18f, -0.58f);
    glVertex2f(0.19f, -0.62f);
    glVertex2f(0.34f, -0.62f);

    glVertex2f(0.35f, -0.66f);
    glVertex2f(0.20f, -0.66f);
    glVertex2f(0.21f, -0.70f);
    glVertex2f(0.36f, -0.70f);

    glVertex2f(0.37f, -0.74f);
    glVertex2f(0.22f, -0.74f);
    glVertex2f(0.23f, -0.78f);
    glVertex2f(0.38f, -0.78f);

    glVertex2f(0.39f, -0.82f);
    glVertex2f(0.24f, -0.82f);
    glVertex2f(0.25f, -0.86f);
    glVertex2f(0.40f, -0.86f);

    glVertex2f(0.41f, -0.90f);
    glVertex2f(0.26f, -0.90f);
    glVertex2f(0.27f, -0.94f);
    glVertex2f(0.42f, -0.94f);


   glEnd();
}
void roadside(){


    glBegin(GL_QUADS);
    glColor3ub(135, 206, 235);//river

    glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 0.15f);
	glVertex2f(-1.0f, 0.15f);

    glColor3ub(139, 69, 19);//upper field

    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(1.0f, 0.15f);
    glVertex2f(1.0f, 0.1f);

    glVertex2f(-1.0f, -0.3f);//lower field
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(1.0f, -0.25f);
    glVertex2f(1.0f, -0.3f);

	glEnd();
}
 void nightroadside(){

    glBegin(GL_QUADS);
    glColor3ub(65, 105, 225);

    glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, 0.15f);
	glVertex2f(-1.0f, 0.15f);

    glColor3ub(139, 69, 19);//

    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(1.0f, 0.15f);
    glVertex2f(1.0f, 0.1f);


    glVertex2f(-1.0f, -0.3f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(1.0f, -0.25f);
    glVertex2f(1.0f, -0.3f);

	glEnd();
}

void busstop()
{
    glBegin(GL_QUADS);
        glColor3f(0.0f ,0.0f, 0.0f);  // roof
        glVertex2f(0.25f, 0.3f);
        glVertex2f(0.85f, 0.3f);
        glVertex2f(0.85f, 0.2f);
        glVertex2f(0.25f, 0.2f);
    glEnd();

    glLineWidth(16.0f);
    glBegin(GL_LINES);
        glColor3f(0.2f, 0.5f, 1.0f); // under roof
        glVertex2f(0.23f, 0.2f);
        glVertex2f(0.87f, 0.2f);
    glEnd();



    glLineWidth(16.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); // left stand
        glVertex2f(0.3f, 0.185f);
        glVertex2f(0.3f, -0.26f);
    glEnd();

    glLineWidth(16.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); // right stand
        glVertex2f(0.8f, 0.185f);
        glVertex2f(0.8f, -0.26f);
    glEnd();

    // --------------left seat starts-----------

    glBegin(GL_QUADS);
        glColor3ub(147, 197, 114); // back part
        glVertex2f(0.3f, 0.03f);
        glVertex2f(0.47f, 0.03f);
        glVertex2f(0.47f, -0.12f);
        glVertex2f(0.3f, -0.12f);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); // seat line x axis
        glVertex2f(0.3f, -0.12f);
        glVertex2f(0.47f, -0.12f);
    glEnd();


    glLineWidth(5.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); // divide line
        glVertex2f(0.47f, 0.03f);
        glVertex2f(0.47f, -.12f);

    glEnd();

    glBegin(GL_QUADS);
        glColor3ub(147, 197, 114);  // below part
        glVertex2f(0.3f, -0.12f);
        glVertex2f(0.47f, -0.12f);
        glVertex2f(0.49f, -0.15f);
        glVertex2f(0.32f, -0.15f);
    glEnd();


    glBegin(GL_QUADS);
        glColor3ub(147, 197, 114);  // back part
        glVertex2f(0.47f, 0.03f);
        glVertex2f(0.64f, 0.03f);
        glVertex2f(0.64f, -0.12f);
        glVertex2f(0.47f, -0.12f);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); // seat line x axis
        glVertex2f(0.47f, -0.12f);
        glVertex2f(0.64f, -0.12f);

    glEnd();

    glBegin(GL_QUADS);
        glColor3ub(147, 197, 114); // below part
        glVertex2f(0.47f, -0.12f);
        glVertex2f(0.64f, -0.12f);
        glVertex2f(0.66f, -0.15f);
        glVertex2f(0.49f, -0.15f);


    glBegin(GL_QUADS);
        glColor3ub(147, 197, 114);  // back part
        glVertex2f(0.64f, 0.03f);
        glVertex2f(0.8f, 0.03f);
        glVertex2f(0.8f, -0.12f);
        glVertex2f(0.64f, -0.12f);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); //divide line
        glVertex2f(0.64f, 0.03f);
        glVertex2f(0.64f, -0.12f);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f); // seat line x axis
        glVertex2f(0.643f, -0.12f);
        glVertex2f(0.8f, -0.12f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3ub(147, 197, 114);  // below part
        glVertex2f(0.64f, -0.12f);
        glVertex2f(0.8f, -0.12f);
        glVertex2f(0.82f, -0.15f);
        glVertex2f(0.66f, -0.15f);
    glEnd();

    // --------------right seat ends-----------
}

void cloud(){
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(193,190,186);

    glVertex2f(-0.6f, 0.9f);
for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.04*cos(PI * i / 180.0) - 0.6, 0.06*sin(PI * i / 180.0) + 0.9);

    glVertex2f(-0.55f, 0.9f);
for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.05*cos(PI * i / 180.0) - 0.55, 0.09*sin(PI * i / 180.0) + 0.9);

    glVertex2f(-0.50f, 0.9f);
for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.04*cos(PI * i / 180.0) - 0.50, 0.06*sin(PI * i / 180.0) + 0.9);

 glEnd();
 //cloud 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(226,226,209);

    glVertex2f(-0.8f, 0.8f);
for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.04*cos(PI * i / 180.0) - 0.8, 0.06*sin(PI * i / 180.0) + 0.8);

    glVertex2f(-0.85f, 0.8f);
for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.05*cos(PI * i / 180.0) - 0.85, 0.09*sin(PI * i / 180.0) + 0.8);

    glVertex2f(-0.90f, 0.8f);
for(i = 0.0f; i <= 360; i++)
    glVertex2f(0.04*cos(PI * i / 180.0) - 0.90, 0.06*sin(PI * i / 180.0) + 0.8);

 glEnd();
 //cloud3
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(226,220,209);

     glVertex2f(-0.3f, 0.77f);
for(i = 0.0f; i <= 360; i++)
     glVertex2f(0.04*cos(PI * i / 180.0) - 0.3, 0.06*sin(PI * i / 180.0) + 0.77);

     glVertex2f(-0.25f, 0.77f);
for(i = 0.0f; i <= 360; i++)
     glVertex2f(0.05*cos(PI * i / 180.0) - 0.25, 0.09*sin(PI * i / 180.0) + 0.77);


     glVertex2f(-0.20f, 0.77f);
for(i = 0.0f; i <= 360; i++)
     glVertex2f(0.04*cos(PI * i / 180.0) - 0.20, 0.06*sin(PI * i / 180.0) + 0.77);

 glEnd();
 glPopMatrix();

}
void sky(){


    glBegin(GL_QUADS);
    glColor3ub(3, 8, 161); //sky line 1

    glVertex2f(-1.0f, 0.96f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, 0.96f);

    glColor3ub(13, 18, 205);  //sky line 2

    glVertex2f(-1.0f, 0.94f);
    glVertex2f(-1.0f, 0.96f);
    glVertex2f(1.0f, 0.96f);
    glVertex2f(1.0f, 0.94f);

    glColor3ub(23, 28, 205); //sky line 3

    glVertex2f(-1.0f, 0.90f);
    glVertex2f(-1.0f, 0.94f);
    glVertex2f(1.0f, 0.94f);
    glVertex2f(1.0f, 0.90f);

    glColor3ub(33, 38, 225); //sky line 4

    glVertex2f(-1.0f, 0.86f);
    glVertex2f(-1.0f, 0.9f);
    glVertex2f(1.0f, 0.9f);
    glVertex2f(1.0f, 0.86f);

    glColor3ub(43, 48, 245); //sky line 5

    glVertex2f(-1.0f, 0.82f);
    glVertex2f(-1.0f, 0.86f);
    glVertex2f(1.0f, 0.86f);
    glVertex2f(1.0f, 0.82f);

    glColor3ub(53, 58, 255); //sky line 6

    glVertex2f(-1.0f, 0.78f);
    glVertex2f(-1.0f, 0.82f);
    glVertex2f(1.0f, 0.82f);
    glVertex2f(1.0f, 0.78f);

    glColor3ub(63, 68, 255); //sky line 7

    glVertex2f(-1.0f, 0.74f);
    glVertex2f(-1.0f, 0.78f);
    glVertex2f(1.0f, 0.78f);
    glVertex2f(1.0f, 0.74f);

    glColor3ub(73, 78, 245); //sky line 8

    glVertex2f(-1.0f, 0.7f);
    glVertex2f(-1.0f, 0.74f);
    glVertex2f(1.0f, 0.74f);
    glVertex2f(1.0f, 0.7f);

    glColor3ub(83, 88, 245); //sky line 9

    glVertex2f(-1.0f, 0.66f);
    glVertex2f(-1.0f, 0.7f);
    glVertex2f(1.0f, 0.7f);
    glVertex2f(1.0f, 0.66f);

    glColor3ub(93, 98, 255); //sky line 10

    glVertex2f(-1.0f, 0.62f);
    glVertex2f(-1.0f, 0.66f);
    glVertex2f(1.0f, 0.66f);
    glVertex2f(1.0f, 0.62f);

    glColor3ub(103, 108, 255); //sky line 11

    glVertex2f(-1.0f, 0.58f);
    glVertex2f(-1.0f, 0.62f);
    glVertex2f(1.0f, 0.62f);
    glVertex2f(1.0f, 0.58f);

    glColor3ub(113, 118, 245); //sky line 12

    glVertex2f(-1.0f, 0.54f);
    glVertex2f(-1.0f, 0.58f);
    glVertex2f(1.0f, 0.58f);
    glVertex2f(1.0f, 0.54f);
       //
    glColor3ub(123, 128, 245); //sky line 13

    glVertex2f(-1.0f, 0.5f);
    glVertex2f(-1.0f, 0.54f);
    glVertex2f(1.0f, 0.54f);
    glVertex2f(1.0f, 0.5f);

    glColor3ub(133, 138, 255); //sky line 14

    glVertex2f(-1.0f, 0.46f);
    glVertex2f(-1.0f, 0.5f);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 0.46f);

    glColor3ub(143, 148, 255); //sky line 15

    glVertex2f(-1.0f, 0.42f);
    glVertex2f(-1.0f, 0.46f);
    glVertex2f(1.0f, 0.46f);
    glVertex2f(1.0f, 0.42f);

    glColor3ub(153, 158, 245); //sky line 16

    glVertex2f(-1.0f, 0.38f);
    glVertex2f(-1.0f, 0.42f);
    glVertex2f(1.0f, 0.42f);
    glVertex2f(1.0f, 0.38f);

    glColor3ub(163, 168, 245); //sky line 17

    glVertex2f(-1.0f, 0.34f);
    glVertex2f(-1.0f, 0.38f);
    glVertex2f(1.0f, 0.38f);
    glVertex2f(1.0f, 0.34f);

    glColor3ub(173, 178, 255); //sky line 18

    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, 0.34f);
    glVertex2f(1.0f, 0.34f);
    glVertex2f(1.0f, 0.3f);

    glColor3ub(183, 188, 255); //sky line 19

    glVertex2f(-1.0f, 0.26f);
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(1.0f, 0.3f);
    glVertex2f(1.0f, 0.26f);

    glColor3ub(193, 198, 245); //sky line 20

    glVertex2f(-1.0f, 0.22f);
    glVertex2f(-1.0f, 0.26f);
    glVertex2f(1.0f, 0.26f);
    glVertex2f(1.0f, 0.22f);

    glColor3ub(203, 208, 245); //sky line 21

    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-1.0f, 0.22f);
    glVertex2f(1.0f, 0.22f);
    glVertex2f(1.0f, 0.2f);



glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(0.1f,0.15f);// mountain
    glVertex2f(0.3f,0.43f);
    glVertex2f(0.5f,0.15f);

    glColor3ub(80, 200, 120);
    glVertex2f(0.45f,0.15f);// 1st
    glVertex2f(0.4f,0.45f);
    glVertex2f(0.75f,0.15f);

    glColor3ub(34,139,34);
    glVertex2f(0.5f,0.18f);// 1st
    glVertex2f(0.45f,0.43f);
    glVertex2f(0.75f,0.18f);

    glColor3ub(50,205,50);
    glVertex2f(0.75f,0.18f);// 1st
    glVertex2f(0.55f,0.43f);
    glVertex2f(0.85f,0.18f);

    glColor3ub(53, 94, 59);
    glVertex2f(0.9f,0.15f);// 1st
    glVertex2f(0.95f,0.55f);
    glVertex2f(1.5f,0.55f);

    glColor3ub(80, 200, 120);
    glVertex2f(0.9f,0.15f);// 1st
    glVertex2f(0.75f,0.43f);
    glVertex2f(1.5f,0.15f);


    glColor3ub(34,139,34);
    glVertex2f(0.8f,0.15f);// 1st
    glVertex2f(0.75f,0.43f);
    glVertex2f(1.0f,0.15f);

    glColor3ub(50,205,50);
    glVertex2f(0.8f,0.15f);// 1st
    glVertex2f(0.75f,0.36f);
    glVertex2f(1.2f,0.15f);

    glColor3ub(0, 128, 0);
    glVertex2f(0.8f,0.15f);// 1st
    glVertex2f(0.75f,0.3f);
    glVertex2f(1.3f,0.15f);

glEnd();

}

void nightSky(){

    glBegin(GL_QUADS);
    glColor3ub(7, 11, 52); //sky

	glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 128, 0);
    glVertex2f(0.1f,0.15f);// mountain
    glVertex2f(0.3f,0.43f);
    glVertex2f(0.5f,0.15f);

    glColor3ub(53, 94, 59);
    glVertex2f(0.45f,0.15f);// 2nd
    glVertex2f(0.4f,0.45f);
    glVertex2f(0.75f,0.15f);

    glColor3ub(34,139,34);
    glVertex2f(0.5f,0.18f);// 3rd
    glVertex2f(0.45f,0.43f);
    glVertex2f(0.75f,0.18f);

    glColor3ub(0, 128, 0);
    glVertex2f(0.75f,0.18f);// 4th
    glVertex2f(0.55f,0.43f);
    glVertex2f(0.85f,0.18f);

    glColor3ub(53, 94, 59);
    glVertex2f(0.9f,0.15f);// 5th
    glVertex2f(0.95f,0.55f);
    glVertex2f(1.5f,0.55f);

    glColor3ub(0, 128, 0);
    glVertex2f(0.9f,0.15f);// 7th
    glVertex2f(0.75f,0.43f);
    glVertex2f(1.5f,0.15f);

    glColor3ub(34,139,34);
    glVertex2f(0.8f,0.15f);// 6th
    glVertex2f(0.75f,0.43f);
    glVertex2f(1.0f,0.15f);

    glColor3ub(53, 94, 59);
    glVertex2f(0.8f,0.15f);// 8th
    glVertex2f(0.75f,0.36f);
    glVertex2f(1.2f,0.15f);

    glColor3ub(0, 128, 0);
    glVertex2f(0.8f,0.15f);// 9th
    glVertex2f(0.75f,0.3f);
    glVertex2f(1.3f,0.15f);

glEnd();
}

void sun(){

int i;

    GLfloat p1=0.6f; GLfloat q1= 0.75f; GLfloat r1 = 0.12f;
    int tringle2=30;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,0);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd();

    glPopMatrix();

}

     void building(){


    glBegin(GL_QUADS);//house line


    glColor3ub(228, 175, 42);//
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.1f);

    glColor3f(0.0f, 1.0f, 0.0f);//
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 0.1f);



    glColor3f(0.8f, 0.4f, 0.5f); //left house(1)from left
    glVertex2f(-0.92f, 0.2f);
    glVertex2f(-0.92f, 0.72f);
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.82f, 0.2f);

    glColor3ub(83, 88, 245);
    glVertex2f(-0.91f, 0.25f);//window(down left)
    glVertex2f(-0.91f, 0.35f);
    glVertex2f(-0.875f, 0.35f);
    glVertex2f(-0.875f, 0.25f);

    glVertex2f(-0.865f, 0.25f);//window(down right)
    glVertex2f(-0.865f, 0.35f);
    glVertex2f(-0.83f, 0.35f);
    glVertex2f(-0.83f, 0.25f);

    glVertex2f(-0.91f, 0.4f);//window(middle left)
    glVertex2f(-0.91f, 0.5f);
    glVertex2f(-0.875f, 0.5f);
    glVertex2f(-0.875f, 0.4f);

    glVertex2f(-0.865f, 0.4f);//window(middle right)
    glVertex2f(-0.865f, 0.5f);
    glVertex2f(-0.83f, 0.5f);
    glVertex2f(-0.83f, 0.4f);

    glVertex2f(-0.91f, 0.55f);//window(up left)
    glVertex2f(-0.91f, 0.65f);
    glVertex2f(-0.875f, 0.65f);
    glVertex2f(-0.875f, 0.55f);

    glVertex2f(-0.865f, 0.55f);//window(up right)
    glVertex2f(-0.865f, 0.65f);
    glVertex2f(-0.83f, 0.65f);
    glVertex2f(-0.83f, 0.55f);

    glColor3f(0.6f, 0.4f, 0.5f); //left house side line(1)
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.79f, 0.65f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.82f, 0.2f);

//............................
    glColor3ub(0, 0, 139); //left house(2)
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.74f);
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.65f, 0.2f);

    glColor3ub(83, 88, 245);
    glVertex2f(-0.73f, 0.2f);//window(down)
    glVertex2f(-0.73f, 0.35f);
    glVertex2f(-0.67f, 0.35f);
    glVertex2f(-0.67f, 0.2f);

    glVertex2f(-0.74f, 0.4f);//window(middle)
    glVertex2f(-0.74f, 0.5f);
    glVertex2f(-0.66f, 0.5f);
    glVertex2f(-0.66f, 0.4f);

    glVertex2f(-0.74f, 0.55f);//window(up)
    glVertex2f(-0.74f, 0.65f);
    glVertex2f(-0.66f, 0.65f);
    glVertex2f(-0.66f, 0.55f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.703f, 0.4f);//window(middle grill)
    glVertex2f(-0.703f, 0.5f);
    glVertex2f(-0.701f, 0.5f);
    glVertex2f(-0.701f, 0.4f);

    glVertex2f(-0.703f, 0.55f);//window(up)
    glVertex2f(-0.703f, 0.65f);
    glVertex2f(-0.701f, 0.65f);
    glVertex2f(-0.701f, 0.55f);

    glVertex2f(-0.703f, 0.2f);//window(down)
    glVertex2f(-0.703f, 0.35f);
    glVertex2f(-0.701f, 0.35f);
    glVertex2f(-0.701f, 0.2f);

    glColor3f(0.0f, 0.4f, 0.5f); //left house side line(2)
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.63f, 0.68f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.65f, 0.2f);
///////////////////////

    glColor3f(1.0f, 0.0f, 0.0f); //left house(3)
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.75f);
    glVertex2f(-0.48f, 0.7f);
    glVertex2f(-0.48f, 0.2f);

    glColor3ub(83, 88, 245);
    glVertex2f(-0.58f, 0.25f);//window(down)
    glVertex2f(-0.58f, 0.35f);
    glVertex2f(-0.51f, 0.35f);
    glVertex2f(-0.51f, 0.25f);

    glVertex2f(-0.58f, 0.4f);//window(middle)
    glVertex2f(-0.58f, 0.5f);
    glVertex2f(-0.51f, 0.5f);
    glVertex2f(-0.51f, 0.4f);

    glVertex2f(-0.58f, 0.55f);//window(up)
    glVertex2f(-0.58f, 0.65f);
    glVertex2f(-0.51f, 0.65f);
    glVertex2f(-0.51f, 0.55f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.547f, 0.25f);//window(down) grill
    glVertex2f(-0.547f, 0.35f);
    glVertex2f(-0.546f, 0.35f);
    glVertex2f(-0.546f, 0.25f);

    glVertex2f(-0.547f, 0.4f);//window(middle)
    glVertex2f(-0.547f, 0.5f);
    glVertex2f(-0.546f, 0.5f);
    glVertex2f(-0.546f, 0.4f);

    glVertex2f(-0.547f, 0.55f);//window(up)
    glVertex2f(-0.547f, 0.65f);
    glVertex2f(-0.546f, 0.65f);
    glVertex2f(-0.546f, 0.55f);



/////////////
    glColor3f(1.0f, 0.0f, 0.0f); //left house(4)
    glVertex2f(-0.42f, 0.2f);
    glVertex2f(-0.42f, 0.7f);
    glVertex2f(-0.31f, 0.75f);
    glVertex2f(-0.31f, 0.2f);

    glColor3ub(83, 88, 245);
    glVertex2f(-0.39f, 0.25f);//window(down)
    glVertex2f(-0.39f, 0.35f);
    glVertex2f(-0.32f, 0.35f);
    glVertex2f(-0.32f, 0.25f);

    glVertex2f(-0.39f, 0.4f);//window(middle)
    glVertex2f(-0.39f, 0.5f);
    glVertex2f(-0.32f, 0.5f);
    glVertex2f(-0.32f, 0.4f);

    glVertex2f(-0.39f, 0.55f);//window(up)
    glVertex2f(-0.39f, 0.65f);
    glVertex2f(-0.32f, 0.65f);
    glVertex2f(-0.32f, 0.55f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.357f, 0.25f);//window(down) grill
    glVertex2f(-0.357f, 0.35f);
    glVertex2f(-0.356f, 0.35f);
    glVertex2f(-0.356f, 0.25f);

    glVertex2f(-0.357f, 0.4f);//window(middle)
    glVertex2f(-0.357f, 0.5f);
    glVertex2f(-0.356f, 0.5f);
    glVertex2f(-0.356f, 0.4f);

    glVertex2f(-0.357f, 0.55f);//window(up)
    glVertex2f(-0.357f, 0.65f);
    glVertex2f(-0.356f, 0.65f);
    glVertex2f(-0.356f, 0.55f);

    glColor3ub(83, 88, 245);  //lmiddle house(3)
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.41f, 0.6f);
    glVertex2f(-0.49f, 0.6f);
    glVertex2f(-0.49f, 0.2f);

    glColor3f(0.0f, 0.0f, 0.0f);  //lmiddle house(3) grill

    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.45f, 0.6f);
    glVertex2f(-0.452f, 0.6f);
    glVertex2f(-0.452f, 0.2f);

    glVertex2f(-0.41f, 0.42f);
    glVertex2f(-0.41f, 0.422f);
    glVertex2f(-0.49f, 0.422f);
    glVertex2f(-0.49f, 0.42f);

    glVertex2f(-0.41f, 0.52f);
    glVertex2f(-0.41f, 0.522f);
    glVertex2f(-0.49f, 0.522f);
    glVertex2f(-0.49f, 0.52f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.41f, 0.35f);
    glVertex2f(-0.41f, 0.33f);
    glVertex2f(-0.49f, 0.33f);
    glVertex2f(-0.49f, 0.35f);

    glVertex2f(-0.41f, 0.61f);
    glVertex2f(-0.41f, 0.6f);
    glVertex2f(-0.49f, 0.6f);
    glVertex2f(-0.49f, 0.61f);

/////////////////////
    glColor3ub(114, 47, 55);//left house(5)
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.77f);
    glVertex2f(-0.15f, 0.77f);
    glVertex2f(-0.15f, 0.2f);

    glColor3ub(83, 88, 245);
    glVertex2f(-0.25f, 0.205f);//window(down)
    glVertex2f(-0.25f, 0.32f);
    glVertex2f(-0.17f, 0.32f);
    glVertex2f(-0.17f, 0.205f);

    glVertex2f(-0.25f, 0.35f);//window(middle low)
    glVertex2f(-0.25f, 0.45f);
    glVertex2f(-0.17f, 0.45f);
    glVertex2f(-0.17f, 0.35f);

    glVertex2f(-0.25f, 0.48f);//window(middle up)
    glVertex2f(-0.25f, 0.58f);
    glVertex2f(-0.17f, 0.58f);
    glVertex2f(-0.17f, 0.48f);

    glVertex2f(-0.25f, 0.61f);//window(up)
    glVertex2f(-0.25f, 0.71f);
    glVertex2f(-0.17f, 0.71f);
    glVertex2f(-0.17f, 0.61f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.227f, 0.205f);//window(down) grill
    glVertex2f(-0.227f, 0.32f);
    glVertex2f(-0.225f, 0.32f);
    glVertex2f(-0.225f, 0.205f);

    glVertex2f(-0.202f, 0.205f);
    glVertex2f(-0.202f, 0.32f);
    glVertex2f(-0.201f, 0.32f);
    glVertex2f(-0.201f, 0.205f);

    glVertex2f(-0.213f, 0.35f);//window(middle low)
    glVertex2f(-0.213f, 0.45f);
    glVertex2f(-0.212f, 0.45f);
    glVertex2f(-0.212f, 0.35f);

    glVertex2f(-0.213f, 0.48f);//window(middle up)
    glVertex2f(-0.213f, 0.58f);
    glVertex2f(-0.212f, 0.58f);
    glVertex2f(-0.212f, 0.48f);

    glVertex2f(-0.213f, 0.61f);//window(up)
    glVertex2f(-0.213f, 0.71f);
    glVertex2f(-0.212f, 0.71f);
    glVertex2f(-0.212f, 0.61f);


    glColor3ub(132, 71, 83); //left house side line(5)
    glVertex2f(-0.15f, 0.77f);
    glVertex2f(-0.13f, 0.73f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.15f, 0.2f);
//////////////////////

    glColor3ub(128, 168, 134);//rignt house down
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.1f, 0.35f);
    glVertex2f(-0.08f, 0.35f);
    glVertex2f(-0.08f, 0.2f);

    glVertex2f(0.1f, 0.37f);//right house up
    glVertex2f(0.1f, 0.52f);
    glVertex2f(-0.08f, 0.52f);
    glVertex2f(-0.08f, 0.37f);

    glColor3ub(165, 42, 42);//center
    glVertex2f(0.11f, 0.35f);
    glVertex2f(0.1f, 0.37f);
    glVertex2f(-0.08f, 0.37f);
    glVertex2f(-0.09f, 0.35f);

    glColor3ub(83, 88, 245);//down left window
    glVertex2f(-0.03f, 0.23f);
    glVertex2f(-0.03f, 0.32f);
    glVertex2f(-0.07f, 0.32f);
    glVertex2f(-0.07f, 0.23f);

    glVertex2f(0.09f, 0.23f);//down right window
    glVertex2f(0.09f, 0.32f);
    glVertex2f(0.05f, 0.32f);
    glVertex2f(0.05f, 0.23f);

    glVertex2f(-0.03f, 0.4f);//right house up left window
    glVertex2f(-0.03f, 0.49f);
    glVertex2f(-0.07f, 0.49f);
    glVertex2f(-0.07f, 0.4f);

    glVertex2f(-0.01f, 0.4f);//right house up center win
    glVertex2f(-0.01f, 0.49f);
    glVertex2f(0.03f, 0.49f);
    glVertex2f(0.03f, 0.4f);

    glVertex2f(0.05f, 0.4f);//right house up right win
    glVertex2f(0.05f, 0.49f);
    glVertex2f(0.09f, 0.49f);
    glVertex2f(0.09f, 0.4f);

    glColor3f(0.0f, 0.0f, 0.0f);//down left window grill
    glVertex2f(-0.051f, 0.23f);
    glVertex2f(-0.051f, 0.32f);
    glVertex2f(-0.049f, 0.32f);
    glVertex2f(-0.049f, 0.23f);

    glVertex2f(-0.03f, 0.269f);
    glVertex2f(-0.03f, 0.271f);
    glVertex2f(-0.07f, 0.271f);
    glVertex2f(-0.07f, 0.269f);

    glVertex2f(0.07f, 0.23f);//down right window grill
    glVertex2f(0.07f, 0.32f);
    glVertex2f(0.069f, 0.32f);
    glVertex2f(0.069f, 0.23f);

    glVertex2f(0.09f, 0.269f);
    glVertex2f(0.09f, 0.271f);
    glVertex2f(0.05f, 0.271f);
    glVertex2f(0.05f, 0.269f);

    glVertex2f(-0.051f, 0.4f);//right house up left window
    glVertex2f(-0.051f, 0.49f);
    glVertex2f(-0.049f, 0.49f);
    glVertex2f(-0.049f, 0.4f);

    glVertex2f(-0.03f, 0.459f);
    glVertex2f(-0.03f, 0.461f);
    glVertex2f(-0.07f, 0.461f);
    glVertex2f(-0.07f, 0.459f);

    glVertex2f(0.009f, 0.4f);//right house up center win
    glVertex2f(0.009f, 0.49f);
    glVertex2f(0.011f, 0.49f);
    glVertex2f(0.011f, 0.4f);

    glVertex2f(-0.01f, 0.459f);
    glVertex2f(-0.01f, 0.461f);
    glVertex2f(0.03f, 0.461f);
    glVertex2f(0.03f, 0.459f);

    glVertex2f(0.069f, 0.4f);//right house up right win
    glVertex2f(0.069f, 0.49f);
    glVertex2f(0.070f, 0.49f);
    glVertex2f(0.070f, 0.4f);

    glVertex2f(0.05f, 0.459f);
    glVertex2f(0.05f, 0.461f);
    glVertex2f(0.09f, 0.461f);
    glVertex2f(0.09f, 0.459f);

    glColor3ub(139, 0, 0);
    glVertex2f(0.04f, 0.2f);//door
    glVertex2f(0.04f, 0.31f);
    glVertex2f(-0.02f, 0.31f);
    glVertex2f(-0.02f, 0.2f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.011f, 0.2f);//door grill
    glVertex2f(0.011f, 0.31f);
    glVertex2f(0.006f, 0.31f);
    glVertex2f(0.006f, 0.2f);


    glEnd();

    glBegin(GL_TRIANGLES);//last house roof
    glColor3ub(165, 42, 42);
    glVertex2f(-0.09f, 0.52f);
    glVertex2f(0.01f, 0.62f);
    glVertex2f(0.11f, 0.52f);

    glEnd();

    glBegin(GL_QUADS);//tree
    glColor3ub(139, 69, 19);//1st
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.22f, 0.2f);

    glVertex2f(0.4f, 0.2f);//2nd
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.42f, 0.4f);
    glVertex2f(0.42f, 0.2f);

    glVertex2f(0.6f, 0.2f);//3rd
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.62f, 0.4f);
    glVertex2f(0.62f, 0.2f);


    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 128, 0);//1st
    glVertex2f(0.152f, 0.35f);
    glVertex2f(0.27f, 0.35f);
    glVertex2f(0.215f, 0.5f);

    glVertex2f(0.158f, 0.4f);//2nd
    glVertex2f(0.265f, 0.4f);
    glVertex2f(0.215f, 0.55f);

    glVertex2f(0.162f, 0.45f);//3rd
    glVertex2f(0.261f, 0.45f);
    glVertex2f(0.212f, 0.58f);

    glColor3ub(0, 128, 0);//2nd 1st
    glVertex2f(0.352f, 0.35f);
    glVertex2f(0.47f, 0.35f);
    glVertex2f(0.415f, 0.5f);

    glVertex2f(0.358f, 0.4f);//2nd
    glVertex2f(0.465f, 0.4f);
    glVertex2f(0.415f, 0.55f);

    glVertex2f(0.362f, 0.45f);//3rd
    glVertex2f(0.461f, 0.45f);
    glVertex2f(0.412f, 0.58f);

    glVertex2f(0.552f, 0.35f);//3rd 1st
    glVertex2f(0.67f, 0.35f);
    glVertex2f(0.615f, 0.5f);

    glVertex2f(0.558f, 0.4f);//2nd
    glVertex2f(0.665f, 0.4f);
    glVertex2f(0.615f, 0.55f);

    glVertex2f(0.562f, 0.45f);//3rd
    glVertex2f(0.661f, 0.45f);
    glVertex2f(0.612f, 0.58f);


    glEnd();}

    void nightbuilding(){
     glBegin(GL_QUADS);//house line


    glColor3ub(210, 125, 45);//
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.1f);

    glColor3f(0.0f, 1.0f, 0.0f);//
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 0.1f);



    glColor3f(0.8f, 0.4f, 0.5f); //left house(1)from left
    glVertex2f(-0.92f, 0.2f);
    glVertex2f(-0.92f, 0.72f);
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.82f, 0.2f);

    glColor3ub(237, 255, 261);
    glVertex2f(-0.91f, 0.25f);//window(down left)
    glVertex2f(-0.91f, 0.35f);
    glVertex2f(-0.875f, 0.35f);
    glVertex2f(-0.875f, 0.25f);

    glVertex2f(-0.865f, 0.25f);//window(down right)
    glVertex2f(-0.865f, 0.35f);
    glVertex2f(-0.83f, 0.35f);
    glVertex2f(-0.83f, 0.25f);

    glVertex2f(-0.91f, 0.4f);//window(middle left)
    glVertex2f(-0.91f, 0.5f);
    glVertex2f(-0.875f, 0.5f);
    glVertex2f(-0.875f, 0.4f);

    glVertex2f(-0.865f, 0.4f);//window(middle right)
    glVertex2f(-0.865f, 0.5f);
    glVertex2f(-0.83f, 0.5f);
    glVertex2f(-0.83f, 0.4f);

    glVertex2f(-0.91f, 0.55f);//window(up left)
    glVertex2f(-0.91f, 0.65f);
    glVertex2f(-0.875f, 0.65f);
    glVertex2f(-0.875f, 0.55f);

    glVertex2f(-0.865f, 0.55f);//window(up right)
    glVertex2f(-0.865f, 0.65f);
    glVertex2f(-0.83f, 0.65f);
    glVertex2f(-0.83f, 0.55f);



    glColor3f(0.6f, 0.4f, 0.5f); //left house side line(1)
    glVertex2f(-0.82f, 0.68f);
    glVertex2f(-0.79f, 0.65f);
    glVertex2f(-0.79f, 0.2f);
    glVertex2f(-0.82f, 0.2f);

//............................
    glColor3f(0.0f, 0.5f, 0.5f); //left house(2)
    glVertex2f(-0.75f, 0.2f);
    glVertex2f(-0.75f, 0.74f);
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.65f, 0.2f);

    glColor3ub(237, 255, 261);
    glVertex2f(-0.73f, 0.2f);//window(down)
    glVertex2f(-0.73f, 0.35f);
    glVertex2f(-0.67f, 0.35f);
    glVertex2f(-0.67f, 0.2f);

    glVertex2f(-0.74f, 0.4f);//window(middle)
    glVertex2f(-0.74f, 0.5f);
    glVertex2f(-0.66f, 0.5f);
    glVertex2f(-0.66f, 0.4f);

    glVertex2f(-0.74f, 0.55f);//window(up)
    glVertex2f(-0.74f, 0.65f);
    glVertex2f(-0.66f, 0.65f);
    glVertex2f(-0.66f, 0.55f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.703f, 0.4f);//window(middle grill)
    glVertex2f(-0.703f, 0.5f);
    glVertex2f(-0.701f, 0.5f);
    glVertex2f(-0.701f, 0.4f);

    glVertex2f(-0.703f, 0.55f);//window(up)
    glVertex2f(-0.703f, 0.65f);
    glVertex2f(-0.701f, 0.65f);
    glVertex2f(-0.701f, 0.55f);

    glVertex2f(-0.703f, 0.2f);//window(down)
    glVertex2f(-0.703f, 0.35f);
    glVertex2f(-0.701f, 0.35f);
    glVertex2f(-0.701f, 0.2f);

    glColor3f(0.0f, 0.4f, 0.5f); //left house side line(2)
    glVertex2f(-0.65f, 0.7f);
    glVertex2f(-0.63f, 0.68f);
    glVertex2f(-0.63f, 0.2f);
    glVertex2f(-0.65f, 0.2f);
///////////////////////

    glColor3f(1.0f, 0.0f, 0.0f); //left house(3)
    glVertex2f(-0.59f, 0.2f);
    glVertex2f(-0.59f, 0.75f);
    glVertex2f(-0.48f, 0.7f);
    glVertex2f(-0.48f, 0.2f);

    glColor3ub(237, 255, 261);
    glVertex2f(-0.58f, 0.25f);//window(down)
    glVertex2f(-0.58f, 0.35f);
    glVertex2f(-0.51f, 0.35f);
    glVertex2f(-0.51f, 0.25f);

    glVertex2f(-0.58f, 0.4f);//window(middle)
    glVertex2f(-0.58f, 0.5f);
    glVertex2f(-0.51f, 0.5f);
    glVertex2f(-0.51f, 0.4f);

    glVertex2f(-0.58f, 0.55f);//window(up)
    glVertex2f(-0.58f, 0.65f);
    glVertex2f(-0.51f, 0.65f);
    glVertex2f(-0.51f, 0.55f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.547f, 0.25f);//window(down) grill
    glVertex2f(-0.547f, 0.35f);
    glVertex2f(-0.546f, 0.35f);
    glVertex2f(-0.546f, 0.25f);

    glVertex2f(-0.547f, 0.4f);//window(middle)
    glVertex2f(-0.547f, 0.5f);
    glVertex2f(-0.546f, 0.5f);
    glVertex2f(-0.546f, 0.4f);

    glVertex2f(-0.547f, 0.55f);//window(up)
    glVertex2f(-0.547f, 0.65f);
    glVertex2f(-0.546f, 0.65f);
    glVertex2f(-0.546f, 0.55f);

/////////////
    glColor3f(1.0f, 0.0f, 0.0f); //left house(4)
    glVertex2f(-0.42f, 0.2f);
    glVertex2f(-0.42f, 0.7f);
    glVertex2f(-0.31f, 0.75f);
    glVertex2f(-0.31f, 0.2f);

    glColor3ub(237, 255, 261);
    glVertex2f(-0.39f, 0.25f);//window(down)
    glVertex2f(-0.39f, 0.35f);
    glVertex2f(-0.32f, 0.35f);
    glVertex2f(-0.32f, 0.25f);

    glVertex2f(-0.39f, 0.4f);//window(middle)
    glVertex2f(-0.39f, 0.5f);
    glVertex2f(-0.32f, 0.5f);
    glVertex2f(-0.32f, 0.4f);

    glVertex2f(-0.39f, 0.55f);//window(up)
    glVertex2f(-0.39f, 0.65f);
    glVertex2f(-0.32f, 0.65f);
    glVertex2f(-0.32f, 0.55f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.357f, 0.25f);//window(down) grill
    glVertex2f(-0.357f, 0.35f);
    glVertex2f(-0.356f, 0.35f);
    glVertex2f(-0.356f, 0.25f);

    glVertex2f(-0.357f, 0.4f);//window(middle)
    glVertex2f(-0.357f, 0.5f);
    glVertex2f(-0.356f, 0.5f);
    glVertex2f(-0.356f, 0.4f);

    glVertex2f(-0.357f, 0.55f);//window(up)
    glVertex2f(-0.357f, 0.65f);
    glVertex2f(-0.356f, 0.65f);
    glVertex2f(-0.356f, 0.55f);

    glColor3ub(83, 88, 245);  //lmiddle house(3)
    glVertex2f(-0.41f, 0.2f);
    glVertex2f(-0.41f, 0.6f);
    glVertex2f(-0.49f, 0.6f);
    glVertex2f(-0.49f, 0.2f);

    glColor3f(0.0f, 0.0f, 0.0f);  //lmiddle house(3) window grill

    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.45f, 0.6f);
    glVertex2f(-0.452f, 0.6f);
    glVertex2f(-0.452f, 0.2f);

    glVertex2f(-0.41f, 0.42f);
    glVertex2f(-0.41f, 0.422f);
    glVertex2f(-0.49f, 0.422f);
    glVertex2f(-0.49f, 0.42f);

    glVertex2f(-0.41f, 0.52f);
    glVertex2f(-0.41f, 0.522f);
    glVertex2f(-0.49f, 0.522f);
    glVertex2f(-0.49f, 0.52f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.41f, 0.35f);
    glVertex2f(-0.41f, 0.33f);
    glVertex2f(-0.49f, 0.33f);
    glVertex2f(-0.49f, 0.35f);

    glVertex2f(-0.41f, 0.61f);
    glVertex2f(-0.41f, 0.6f);
    glVertex2f(-0.49f, 0.6f);
    glVertex2f(-0.49f, 0.61f);


/////////////////////
    glColor3ub(149, 79, 93);//left house(5)
    glVertex2f(-0.27f, 0.2f);
    glVertex2f(-0.27f, 0.77f);
    glVertex2f(-0.15f, 0.77f);
    glVertex2f(-0.15f, 0.2f);

    glColor3ub(237, 255, 261);
    glVertex2f(-0.25f, 0.205f);//window(down)
    glVertex2f(-0.25f, 0.32f);
    glVertex2f(-0.17f, 0.32f);
    glVertex2f(-0.17f, 0.205f);

    glVertex2f(-0.25f, 0.35f);//window(middle low)
    glVertex2f(-0.25f, 0.45f);
    glVertex2f(-0.17f, 0.45f);
    glVertex2f(-0.17f, 0.35f);

    glVertex2f(-0.25f, 0.48f);//window(middle up)
    glVertex2f(-0.25f, 0.58f);
    glVertex2f(-0.17f, 0.58f);
    glVertex2f(-0.17f, 0.48f);

    glVertex2f(-0.25f, 0.61f);//window(up)
    glVertex2f(-0.25f, 0.71f);
    glVertex2f(-0.17f, 0.71f);
    glVertex2f(-0.17f, 0.61f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.227f, 0.205f);//window(down) grill
    glVertex2f(-0.227f, 0.32f);
    glVertex2f(-0.225f, 0.32f);
    glVertex2f(-0.225f, 0.205f);

    glVertex2f(-0.202f, 0.205f);
    glVertex2f(-0.202f, 0.32f);
    glVertex2f(-0.201f, 0.32f);
    glVertex2f(-0.201f, 0.205f);

    glVertex2f(-0.213f, 0.35f);//window(middle low)
    glVertex2f(-0.213f, 0.45f);
    glVertex2f(-0.212f, 0.45f);
    glVertex2f(-0.212f, 0.35f);

    glVertex2f(-0.213f, 0.48f);//window(middle up)
    glVertex2f(-0.213f, 0.58f);
    glVertex2f(-0.212f, 0.58f);
    glVertex2f(-0.212f, 0.48f);

    glVertex2f(-0.213f, 0.61f);//window(up)
    glVertex2f(-0.213f, 0.71f);
    glVertex2f(-0.212f, 0.71f);
    glVertex2f(-0.212f, 0.61f);

    glColor3ub(132, 71, 83); //left house side line(5)
    glVertex2f(-0.15f, 0.77f);
    glVertex2f(-0.13f, 0.73f);
    glVertex2f(-0.13f, 0.2f);
    glVertex2f(-0.15f, 0.2f);
//////////////////////

    glColor3ub(128, 168, 134);//rignt house down
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.1f, 0.35f);
    glVertex2f(-0.08f, 0.35f);
    glVertex2f(-0.08f, 0.2f);

    glVertex2f(0.1f, 0.37f);//right house up
    glVertex2f(0.1f, 0.52f);
    glVertex2f(-0.08f, 0.52f);
    glVertex2f(-0.08f, 0.37f);

    glColor3ub(165, 42, 42);//center
    glVertex2f(0.11f, 0.35f);
    glVertex2f(0.1f, 0.37f);
    glVertex2f(-0.08f, 0.37f);
    glVertex2f(-0.09f, 0.35f);

    glColor3ub(237, 255, 261);//down left window
    glVertex2f(-0.03f, 0.23f);
    glVertex2f(-0.03f, 0.32f);
    glVertex2f(-0.07f, 0.32f);
    glVertex2f(-0.07f, 0.23f);

    glVertex2f(0.09f, 0.23f);//down right window
    glVertex2f(0.09f, 0.32f);
    glVertex2f(0.05f, 0.32f);
    glVertex2f(0.05f, 0.23f);

    glVertex2f(-0.03f, 0.4f);//right house up left window
    glVertex2f(-0.03f, 0.49f);
    glVertex2f(-0.07f, 0.49f);
    glVertex2f(-0.07f, 0.4f);

    glVertex2f(-0.01f, 0.4f);//right house up center win
    glVertex2f(-0.01f, 0.49f);
    glVertex2f(0.03f, 0.49f);
    glVertex2f(0.03f, 0.4f);

    glVertex2f(0.05f, 0.4f);//right house up right win
    glVertex2f(0.05f, 0.49f);
    glVertex2f(0.09f, 0.49f);
    glVertex2f(0.09f, 0.4f);

    glColor3f(0.0f, 0.0f, 0.0f);//down left window grill
    glVertex2f(-0.051f, 0.23f);
    glVertex2f(-0.051f, 0.32f);
    glVertex2f(-0.049f, 0.32f);
    glVertex2f(-0.049f, 0.23f);

    glVertex2f(-0.03f, 0.269f);
    glVertex2f(-0.03f, 0.271f);
    glVertex2f(-0.07f, 0.271f);
    glVertex2f(-0.07f, 0.269f);

    glVertex2f(0.07f, 0.23f);//down right window grill
    glVertex2f(0.07f, 0.32f);
    glVertex2f(0.069f, 0.32f);
    glVertex2f(0.069f, 0.23f);

    glVertex2f(0.09f, 0.269f);
    glVertex2f(0.09f, 0.271f);
    glVertex2f(0.05f, 0.271f);
    glVertex2f(0.05f, 0.269f);

    glVertex2f(-0.051f, 0.4f);//right house up left window
    glVertex2f(-0.051f, 0.49f);
    glVertex2f(-0.049f, 0.49f);
    glVertex2f(-0.049f, 0.4f);

    glVertex2f(-0.03f, 0.459f);
    glVertex2f(-0.03f, 0.461f);
    glVertex2f(-0.07f, 0.461f);
    glVertex2f(-0.07f, 0.459f);

    glVertex2f(0.009f, 0.4f);//right house up center win
    glVertex2f(0.009f, 0.49f);
    glVertex2f(0.011f, 0.49f);
    glVertex2f(0.011f, 0.4f);

    glVertex2f(-0.01f, 0.459f);
    glVertex2f(-0.01f, 0.461f);
    glVertex2f(0.03f, 0.461f);
    glVertex2f(0.03f, 0.459f);

    glVertex2f(0.069f, 0.4f);//right house up right win
    glVertex2f(0.069f, 0.49f);
    glVertex2f(0.070f, 0.49f);
    glVertex2f(0.070f, 0.4f);

    glVertex2f(0.05f, 0.459f);
    glVertex2f(0.05f, 0.461f);
    glVertex2f(0.09f, 0.461f);
    glVertex2f(0.09f, 0.459f);

    glColor3ub(139, 0, 0);
    glVertex2f(0.04f, 0.2f);//door
    glVertex2f(0.04f, 0.31f);
    glVertex2f(-0.02f, 0.31f);
    glVertex2f(-0.02f, 0.2f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.011f, 0.2f);//door grill
    glVertex2f(0.011f, 0.31f);
    glVertex2f(0.006f, 0.31f);
    glVertex2f(0.006f, 0.2f);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(165, 42, 42);
    glVertex2f(-0.09f, 0.52f);
    glVertex2f(0.01f, 0.62f);
    glVertex2f(0.11f, 0.52f);

    glEnd();

    glBegin(GL_QUADS);//tree
    glColor3ub(139, 69, 19);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.22f, 0.4f);
    glVertex2f(0.22f, 0.2f);

    glVertex2f(0.4f, 0.2f);//2nd
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.42f, 0.4f);
    glVertex2f(0.42f, 0.2f);

    glVertex2f(0.6f, 0.2f);//3rd
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.62f, 0.4f);
    glVertex2f(0.62f, 0.2f);


    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(53, 94, 59);
    glVertex2f(0.152f, 0.35f);
    glVertex2f(0.27f, 0.35f);
    glVertex2f(0.215f, 0.5f);

    glVertex2f(0.158f, 0.4f);
    glVertex2f(0.265f, 0.4f);
    glVertex2f(0.215f, 0.55f);

    glVertex2f(0.162f, 0.45f);
    glVertex2f(0.261f, 0.45f);
    glVertex2f(0.212f, 0.58f);
//2nd 1st
    glVertex2f(0.352f, 0.35f);
    glVertex2f(0.47f, 0.35f);
    glVertex2f(0.415f, 0.5f);

    glVertex2f(0.358f, 0.4f);//2nd
    glVertex2f(0.465f, 0.4f);
    glVertex2f(0.415f, 0.55f);

    glVertex2f(0.362f, 0.45f);//3rd
    glVertex2f(0.461f, 0.45f);
    glVertex2f(0.412f, 0.58f);

    glVertex2f(0.552f, 0.35f);//3rd 1st
    glVertex2f(0.67f, 0.35f);
    glVertex2f(0.615f, 0.5f);

    glVertex2f(0.558f, 0.4f);//2nd
    glVertex2f(0.665f, 0.4f);
    glVertex2f(0.615f, 0.55f);

    glVertex2f(0.562f, 0.45f);//3rd
    glVertex2f(0.661f, 0.45f);
    glVertex2f(0.612f, 0.58f);



    glEnd();
    }

 void moon(){
    glBegin(GL_TRIANGLE_FAN);//Moon

      int l;

    GLfloat p4=-0.6f; GLfloat q4= 0.75f; GLfloat r4 = 0.10f;
    int tringlel=20;

    GLfloat tpl =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 254,252,215);
    glVertex2f (p4,q4);
    for(l= 0;l<=tringlel; l++)
    {
        glVertex2f (
                    p4+(r4*cos(l*tpl/tringlel)),
                    q4+(r4*sin(l*tpl/tringlel))
                                         );}
    glEnd();
        glPopMatrix();
 }

    void lamp(){
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f); // 1st
    glVertex2f(-0.82f, -0.33f);
    glVertex2f(-0.83f, -0.33f);
    glVertex2f(-0.83f, -0.05f);
    glVertex2f(-0.82f, -0.05f);

    glVertex2f(-0.52f, -0.33f);//2nd
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.53f, -0.05f);
    glVertex2f(-0.52f, -0.05f);

    glVertex2f(-0.22f, -0.33f);//3rd
    glVertex2f(-0.23f, -0.33f);
    glVertex2f(-0.23f, -0.05f);
    glVertex2f(-0.22f, -0.05f);

    glVertex2f(0.08f, -0.33f);//4th
    glVertex2f(0.07f, -0.33f);
    glVertex2f(0.07f, -0.05f);
    glVertex2f(0.08f, -0.05f);

    glVertex2f(0.38f, -0.33f);//5th
    glVertex2f(0.37f, -0.33f);
    glVertex2f(0.37f, -0.05f);
    glVertex2f(0.38f, -0.05f);

    glVertex2f(0.68f, -0.33f);//6th
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.67f, -0.05f);
    glVertex2f(0.68f, -0.05f);

    glVertex2f(0.96f, -0.33f);//7th
    glVertex2f(0.95f, -0.33f);
    glVertex2f(0.95f, -0.05f);
    glVertex2f(0.96f, -0.05f);

    glVertex2f(-0.8f, -0.08f);//1st up
    glVertex2f(-0.85f, -0.08f);
    glVertex2f(-0.85f, -0.05f);
    glVertex2f(-0.8f, -0.05f);

    glVertex2f(-0.50f, -0.08f);//2nd up
    glVertex2f(-0.55f, -0.08f);
    glVertex2f(-0.55f, -0.05f);
    glVertex2f(-0.50f, -0.05f);

    glVertex2f(-0.20f, -0.08f);//3rd up
    glVertex2f(-0.25f, -0.08f);
    glVertex2f(-0.25f, -0.05f);
    glVertex2f(-0.20f, -0.05f);

    glVertex2f(0.1f, -0.08f);//4th up
    glVertex2f(0.05f, -0.08f);
    glVertex2f(0.05f, -0.05f);
    glVertex2f(0.1f, -0.05f);

    glVertex2f(0.40f, -0.08f);//5th up
    glVertex2f(0.35f, -0.08f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.40f, -0.05f);

    glVertex2f(0.70f, -0.08f);//6th up
    glVertex2f(0.65f, -0.08f);
    glVertex2f(0.65f, -0.05f);
    glVertex2f(0.70f, -0.05f);

    glVertex2f(0.98f, -0.08f);//7th up
    glVertex2f(0.93f, -0.08f);
    glVertex2f(0.93f, -0.05f);
    glVertex2f(0.98f, -0.05f);


    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.21f, -0.33f);//traffic light
    glVertex2f(0.2f, -0.33f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.21f, -0.1f);

    glVertex2f(0.22f, -0.03f);
    glVertex2f(0.19f, -0.03f);
    glVertex2f(0.19f, -0.15f);
    glVertex2f(0.22f, -0.15f);

    glEnd();


}
void red(){
int l1;

    GLfloat pl1=0.205f; GLfloat ql1= -0.05f; GLfloat rl1 = 0.01f;
    int tringlel1=30;

    GLfloat tpl1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,0.0f,0.0f);
    glVertex2f (pl1,ql1);
    for(l1= 0;l1<=tringlel1; l1++)
    {
        glVertex2f (
                    pl1+(rl1*cos(l1*tpl1/tringlel1)),
                    ql1+(rl1*sin(l1*tpl1/tringlel1))
                    );


    }
    glEnd();}

    void green(){
     int l3;

    GLfloat pl3=0.205f; GLfloat ql3= -0.13f; GLfloat rl3 = 0.01f;
    int tringlel3=30;

    GLfloat tpl3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,1.0f,0.0f);
    glVertex2f (pl3,ql3);
    for(l3= 0;l3<=tringlel3; l3++)
    {
        glVertex2f (
                    pl3+(rl3*cos(l3*tpl3/tringlel3)),
                    ql3+(rl3*sin(l3*tpl3/tringlel3))
                    );


    }
    glEnd();}

    void yellow(){
     int l2;

    GLfloat pl2=0.205f; GLfloat ql2= -0.09f; GLfloat rl2 = 0.01f;
    int tringlel2=30;

    GLfloat tpl2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,0.0f);
    glVertex2f (pl2,ql2);
    for(l2= 0;l2<=tringlel2; l2++)
    {
        glVertex2f (
                    pl2+(rl2*cos(l2*tpl2/tringlel2)),
                    ql2+(rl2*sin(l2*tpl2/tringlel2))
                    );


    }
    glEnd();
}

void boat(){

    glPushMatrix();
    glTranslatef(position5,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(52, 52, 52);
	glVertex2f(-0.595f, -0.06f);
	glVertex2f(-0.355f, -0.06f);
	glVertex2f(-0.4f, -0.14f);
	glVertex2f(-0.55f, -0.14f);

    glColor3ub(128, 0, 0);//stand
	glVertex2f(-0.47f, -0.06f);
	glVertex2f(-0.465f, -0.06f);
	glVertex2f(-0.465f, 0.12f);
	glVertex2f(-0.47f, 0.12f);

    glColor3f(1.0f,1.0f,1.0f);//pal
	glVertex2f(-0.45f, -0.05f);
	glVertex2f(-0.465f, -0.05f);
	glVertex2f(-0.465f, 0.11f);
	glVertex2f(-0.39f, 0.08f);

    glVertex2f(-0.485f, -0.05f);
	glVertex2f(-0.469f, -0.05f);
	glVertex2f(-0.469f, 0.11f);
	glVertex2f(-0.54f, 0.08f);

    glColor3ub(128, 0, 0);//vertical stand
    glVertex2f(-0.39f, 0.07f);
	glVertex2f(-0.467f, 0.105f);
	glVertex2f(-0.467f, 0.095f);
	glVertex2f(-0.39f, 0.06f);

    glVertex2f(-0.54f, 0.07f);
	glVertex2f(-0.47f, 0.105f);
	glVertex2f(-0.47f, 0.095f);
	glVertex2f(-0.54f, 0.06f);


	glEnd();
    glPopMatrix();

}

void boat2()////boat Start//////
{
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glBegin(GL_QUADS);
       glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(-0.84f, 0.08f);
        glVertex2f(-0.80f, 0.02f);
        glVertex2f(-0.65f, 0.02f);
        glVertex2f(-0.61f, 0.08f);
    glEnd();

    glLineWidth(3.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f);
        glVertex2f(-0.75f, 0.08f);
        glVertex2f(-0.75f, 0.30f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f ,1.0f, 1.0f);
        glVertex2f(-0.75f, 0.11f);
        glVertex2f(-0.75f, 0.30f);
        glVertex2f(-0.81f, 0.11f);

        glColor3f(0.8f ,0.8f, 0.8f);
        glVertex2f(-0.75f, 0.13f);
        glVertex2f(-0.75f, 0.30f);
        glVertex2f(-0.71f, 0.13f);

    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glColor3f(0.0f ,0.0f, 0.0f);
        glVertex2f(-0.62f, 0.08f);
        glVertex2f(-0.75f, 0.30f);

        glVertex2f(-0.66f, 0.08f);
        glVertex2f(-0.75f, 0.30f);
    glEnd();
    glPopMatrix();
}
 void nightlamp(){
    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,0.0f); // 1st
    glVertex2f(-0.82f, -0.33f);
    glVertex2f(-0.83f, -0.33f);
    glVertex2f(-0.83f, -0.05f);
    glVertex2f(-0.82f, -0.05f);

    glVertex2f(-0.52f, -0.33f);//2nd
    glVertex2f(-0.53f, -0.33f);
    glVertex2f(-0.53f, -0.05f);
    glVertex2f(-0.52f, -0.05f);

    glVertex2f(-0.22f, -0.33f);//3rd
    glVertex2f(-0.23f, -0.33f);
    glVertex2f(-0.23f, -0.05f);
    glVertex2f(-0.22f, -0.05f);

    glVertex2f(0.08f, -0.33f);//4th
    glVertex2f(0.07f, -0.33f);
    glVertex2f(0.07f, -0.05f);
    glVertex2f(0.08f, -0.05f);

    glVertex2f(0.38f, -0.33f);//5th
    glVertex2f(0.37f, -0.33f);
    glVertex2f(0.37f, -0.05f);
    glVertex2f(0.38f, -0.05f);

    glVertex2f(0.68f, -0.33f);//6th
    glVertex2f(0.67f, -0.33f);
    glVertex2f(0.67f, -0.05f);
    glVertex2f(0.68f, -0.05f);

    glVertex2f(0.96f, -0.33f);//7th
    glVertex2f(0.95f, -0.33f);
    glVertex2f(0.95f, -0.05f);
    glVertex2f(0.96f, -0.05f);

    glVertex2f(-0.8f, -0.08f);//1st up
    glVertex2f(-0.85f, -0.08f);
    glVertex2f(-0.85f, -0.05f);
    glVertex2f(-0.8f, -0.05f);

    glVertex2f(-0.50f, -0.08f);//2nd up
    glVertex2f(-0.55f, -0.08f);
    glVertex2f(-0.55f, -0.05f);
    glVertex2f(-0.50f, -0.05f);

    glVertex2f(-0.20f, -0.08f);//3rd up
    glVertex2f(-0.25f, -0.08f);
    glVertex2f(-0.25f, -0.05f);
    glVertex2f(-0.20f, -0.05f);

    glVertex2f(0.1f, -0.08f);//4th up
    glVertex2f(0.05f, -0.08f);
    glVertex2f(0.05f, -0.05f);
    glVertex2f(0.1f, -0.05f);

    glVertex2f(0.40f, -0.08f);//5th up
    glVertex2f(0.35f, -0.08f);
    glVertex2f(0.35f, -0.05f);
    glVertex2f(0.40f, -0.05f);

    glVertex2f(0.70f, -0.08f);//6th up
    glVertex2f(0.65f, -0.08f);
    glVertex2f(0.65f, -0.05f);
    glVertex2f(0.70f, -0.05f);

    glVertex2f(0.98f, -0.08f);//7th up
    glVertex2f(0.93f, -0.08f);
    glVertex2f(0.93f, -0.05f);
    glVertex2f(0.98f, -0.05f);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.81f, -0.07f);//1st light
    glVertex2f(-0.84f, -0.07f);
    glVertex2f(-0.86f, -0.15f);
    glVertex2f(-0.79f, -0.15f);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(-0.51f, -0.07f);//2nd light
    glVertex2f(-0.54f, -0.07f);
    glVertex2f(-0.56f, -0.15f);
    glVertex2f(-0.49f, -0.15f);

    glVertex2f(-0.21f, -0.07f);//3rd light
    glVertex2f(-0.24f, -0.07f);
    glVertex2f(-0.26f, -0.15f);
    glVertex2f(-0.19f, -0.15f);

    glVertex2f(0.09f, -0.07f);//4th light
    glVertex2f(0.06f, -0.07f);
    glVertex2f(0.04f, -0.15f);
    glVertex2f(0.11f, -0.15f);

    glVertex2f(0.39f, -0.07f);//5th light
    glVertex2f(0.36f, -0.07f);
    glVertex2f(0.34f, -0.15f);
    glVertex2f(0.41f, -0.15f);

    glVertex2f(0.69f, -0.07f);//6th light
    glVertex2f(0.66f, -0.07f);
    glVertex2f(0.64f, -0.15f);
    glVertex2f(0.71f, -0.15f);

    glVertex2f(0.97f, -0.07f);//7th up
    glVertex2f(0.94f, -0.07f);
    glVertex2f(0.92f, -0.15f);
    glVertex2f(0.99f, -0.15f);

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.21f, -0.33f);//4th
    glVertex2f(0.2f, -0.33f);
    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.21f, -0.1f);

    glVertex2f(0.22f, -0.03f);//4th
    glVertex2f(0.19f, -0.03f);
    glVertex2f(0.19f, -0.15f);
    glVertex2f(0.22f, -0.15f);


    glEnd();

}

void star(){
    glBegin(GL_POINTS);// Star
    glPointSize(0.05);
	glColor3ub(254, 252, 215);
	glVertex2f(0.10f,0.80f);
	glVertex2f(0.15f,0.9f);
	glVertex2f(0.2f,0.8f);
	glVertex2f(0.25f,0.9f);
	glVertex2f(0.3f,0.8f);
	glVertex2f(0.35f,0.9f);
	glVertex2f(0.5f,0.9f);
	glVertex2f(0.55f,0.8f);
	glVertex2f(0.6f,0.9f);
	glVertex2f(0.65f,0.8f);
	glVertex2f(0.7f,0.9f);
	glVertex2f(0.75f,0.8f);
	glVertex2f(0.8f,0.9f);
	glVertex2f(0.85f,0.8f);
	glVertex2f(0.9f,0.9f);
	glVertex2f(0.95f,0.8f);
	glVertex2f(1.0f,0.9f);
	glVertex2f(0.0f,0.8f);
	glVertex2f(0.0f,0.9f);

	glVertex2f(-0.10f,0.80f);
	glVertex2f(-0.15f,0.9f);
	glVertex2f(-0.2f,0.8f);
	glVertex2f(-0.25f,0.9f);
	glVertex2f(-0.3f,0.8f);
	glVertex2f(-0.35f,0.9f);
	glVertex2f(-0.5f,0.9f);
	glVertex2f(-0.55f,0.8f);
	glVertex2f(-0.6f,0.9f);
	glVertex2f(-0.65f,0.8f);
	glVertex2f(-0.7f,0.9f);
	glVertex2f(-0.75f,0.8f);
	glVertex2f(-0.8f,0.9f);
	glVertex2f(-0.85f,0.8f);
	glVertex2f(-0.9f,0.9f);
	glVertex2f(-0.95f,0.8f);
	glVertex2f(-1.0f,0.9f);

	glVertex2f(0.10f,0.50f);
	glVertex2f(0.15f,0.7f);
	glVertex2f(0.2f,0.5f);
	glVertex2f(0.25f,0.7f);
	glVertex2f(0.3f,0.5f);
	glVertex2f(0.35f,0.7f);
	glVertex2f(0.5f,0.5f);
	glVertex2f(0.55f,0.7f);
	glVertex2f(0.6f,0.5f);
	glVertex2f(0.65f,0.7f);
	glVertex2f(0.7f,0.5f);
	glVertex2f(0.75f,0.7f);
	glVertex2f(0.8f,0.5f);
	glVertex2f(0.85f,0.7f);
	glVertex2f(0.9f,0.5f);
	glVertex2f(0.95f,0.7f);
	glVertex2f(1.0f,0.5f);


	glEnd();
}



void car(){
    //left car
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.624f,0.0f,0.059f); //red
    glVertex2f(-0.95f, -0.25f);
    glVertex2f(-0.95f, -0.4f);
    glVertex2f(-0.50f, -0.4f);
    glVertex2f(-0.50f, -0.25f);

    glColor3f(0.0f,0.0f,0.502f); //blue
    glVertex2f(-0.95f, -0.4f);
    glVertex2f(-0.95f, -0.57f);
    glVertex2f(-0.50f, -0.57f);
    glVertex2f(-0.50f, -0.4f);

    glColor3f(1.0f,1.0f,0.0f); //yelow
    glVertex2f(-0.51f, -0.42f);
    glVertex2f(-0.51f, -0.45f);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.50f, -0.42f);



    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.95f, -0.42f);
    glVertex2f(-0.95f, -0.45f);
    glVertex2f(-0.94f, -0.45f);
    glVertex2f(-0.94f, -0.42f);


    glColor3ub(83, 88, 245); //glass
    glVertex2f(-0.6f, -0.28f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.50f, -0.4f);
    glVertex2f(-0.50f, -0.28f);

    glColor3ub(83, 88, 245); //door
    glVertex2f(-0.67f, -0.3f);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.62f, -0.54f);
    glVertex2f(-0.62f, -0.3f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.67f, -0.3f);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.667f, -0.54f);
    glVertex2f(-0.667f, -0.3f);

    glVertex2f(-0.67f, -0.3f);
    glVertex2f(-0.67f, -0.31f);
    glVertex2f(-0.62f, -0.31f);
    glVertex2f(-0.62f, -0.3f);

    glVertex2f(-0.615f, -0.3f);
    glVertex2f(-0.615f, -0.54f);
    glVertex2f(-0.62f, -0.54f);
    glVertex2f(-0.62f, -0.3f);

    glVertex2f(-0.67f, -0.53f);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.62f, -0.54f);
    glVertex2f(-0.62f, -0.53f);

    glVertex2f(-0.64f, -0.3f);
    glVertex2f(-0.64f, -0.54f);
    glVertex2f(-0.645f, -0.54f);
    glVertex2f(-0.645f, -0.3f);

    glColor3ub(83, 88, 245); //window 1
    glVertex2f(-0.72f, -0.28f);
    glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.78f, -0.36f);
    glVertex2f(-0.78f, -0.28f);

//window 2
    glVertex2f(-0.86f, -0.28f);//window 2
    glVertex2f(-0.86f, -0.36f);
    glVertex2f(-0.8f, -0.36f);
    glVertex2f(-0.8f, -0.28f);

//window 3
    glVertex2f(-0.94f, -0.28f);//window 3
    glVertex2f(-0.94f, -0.36f);
    glVertex2f(-0.88f, -0.36f);
    glVertex2f(-0.88f, -0.28f);
    glEnd();


//left car wheel
 glBegin(GL_TRIANGLE_FAN);
  glColor3f(0.0f,0.0f,0.0f);


 int j;

    GLfloat p2=-0.85f; GLfloat q2= -0.55f; GLfloat r2 = 0.045f;
    int tringlej=30;

    GLfloat tpj =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringlej; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tpj/tringlej)),
                    q2+(r2*sin(j*tpj/tringlej))
                    );


    }
    glEnd();

    int x;

    GLfloat px=-0.85f; GLfloat qx= -0.55f; GLfloat rx = 0.025f;
    int tringlex=30;

    GLfloat tpx =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (px,qx);
    for(x= 0;x<=tringlex; x++)
    {
        glVertex2f (
                    px+(rx*cos(x*tpx/tringlex)),
                    qx+(rx*sin(x*tpx/tringlex))
                    );


    }
    glEnd();



int k;

    GLfloat p3=-0.60f; GLfloat q3= -0.55f; GLfloat r3 = 0.045f;
    int tringlek=20;

    GLfloat tpk =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p3,q3);
    for(k= 0;k<=tringlek; k++)
    {
        glVertex2f (
                    p3+(r3*cos(k*tpk/tringlek)),
                    q3+(r3*sin(k*tpk/tringlek))
                    );


    }
    glEnd();
    int y;

    GLfloat py=-0.60f; GLfloat qy= -0.55f; GLfloat ry = 0.025f;
    int tringley=20;

    GLfloat tpy =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (py,qy);
    for(y= 0;y<=tringley; y++)
    {
        glVertex2f (
                    py+(ry*cos(y*tpy/tringley)),
                    qy+(ry*sin(y*tpy/tringley))
                    );


    }
    glEnd();



 glPopMatrix();

}

void car2(){
   glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f); //red1
    glVertex2f(0.8f, -0.85f);
    glVertex2f(0.8f, -0.74f);
    glVertex2f(0.7f, -0.74f);
    glVertex2f(0.7f, -0.85f);

    glVertex2f(0.8f, -0.85f);//red2
    glVertex2f(0.8f, -0.72f);
    glVertex2f(0.88f, -0.74f);
    glVertex2f(0.88f, -0.85f);

    glVertex2f(0.7f, -0.72f);//red3
    glVertex2f(0.6f, -0.74f);
    glVertex2f(0.6f, -0.85f);
    glVertex2f(0.7f, -0.85f);

    glVertex2f(0.83f, -0.65f);//red5
    glVertex2f(0.86f, -0.85f);
    glVertex2f(0.66f, -0.85f);
    glVertex2f(0.682f, -0.65f);


    glColor3ub(83, 88, 245); //skin colour
    glVertex2f(0.69f, -0.66f);
    glVertex2f(0.683f, -0.735f);
    glVertex2f(0.75f, -0.735f);
    glVertex2f(0.75f, -0.66f);

//skin colour
    glVertex2f(0.82f, -0.66f);
    glVertex2f(0.83f, -0.735f);
    glVertex2f(0.755f, -0.735f);
    glVertex2f(0.755f, -0.66f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.745f, -0.76f);
    glVertex2f(0.745f, -0.75f);
    glVertex2f(0.725f, -0.75f);
    glVertex2f(0.725f, -0.76f);

    glVertex2f(0.8f, -0.76f);
    glVertex2f(0.8f, -0.75f);
    glVertex2f(0.82f, -0.75f);
    glVertex2f(0.82f, -0.76f);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.6f, -0.77f);
    glVertex2f(0.62f, -0.77f);



glEnd();


 int m;

    GLfloat p5=0.82f; GLfloat q5= -0.84f; GLfloat r5 = 0.035f;
    int tringlem=30;

    GLfloat tpm =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p5,q5);
    for(m= 0;m<=tringlem; m++)
    {
        glVertex2f (
                    p5+(r5*cos(m*tpm/tringlem)),
                    q5+(r5*sin(m*tpm/tringlem))
                    );


    }
    glEnd();

    int n;

    GLfloat pn=0.82f; GLfloat qn= -0.84f; GLfloat rn = 0.019f;
    int tringlen=30;

    GLfloat tpn =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pn,qn);
    for(n= 0;n<=tringlen; n++)
    {
        glVertex2f (
                    pn+(rn*cos(n*tpn/tringlen)),
                    qn+(rn*sin(n*tpn/tringlen))
                    );


    }
    glEnd();

int a;

    GLfloat pa=0.66f; GLfloat qa= -0.84f; GLfloat ra = 0.035f;
    int tringlea=30;

    GLfloat tpa =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (pa,qa);
    for(a= 0;a<=tringlea; a++)
    {
        glVertex2f (
                    pa+(ra*cos(a*tpa/tringlea)),
                    qa+(ra*sin(a*tpa/tringlea))
                    );


    }
    glEnd();


int a1;

    GLfloat pa1=0.66f; GLfloat qa1= -0.84f; GLfloat ra1 = 0.019f;
    int tringlea1=30;

    GLfloat tp1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pa1,qa1);
    for(a1= 0;a1<=tringlea1; a1++)
    {
        glVertex2f (
                    pa1+(ra1*cos(a1*tp1/tringlea1)),
                    qa1+(ra1*sin(a1*tp1/tringlea1))
                    );


    }
    glEnd();
 glPopMatrix();

}
void car3(){
   glPushMatrix();
   glTranslatef(position6,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,1.0f); //blue1
    glVertex2f(0.4f, -0.85f);
    glVertex2f(0.4f, -0.74f);
    glVertex2f(0.3f, -0.74f);
    glVertex2f(0.3f, -0.85f);

    glVertex2f(0.4f, -0.85f);//blue2
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.48f, -0.74f);
    glVertex2f(0.48f, -0.85f);

    glVertex2f(0.3f, -0.72f);//blue3
    glVertex2f(0.2f, -0.74f);
    glVertex2f(0.2f, -0.85f);
    glVertex2f(0.3f, -0.85f);

    glVertex2f(0.43f, -0.65f);//blue4
    glVertex2f(0.46f, -0.85f);
    glVertex2f(0.26f, -0.85f);
    glVertex2f(0.282f, -0.65f);



    glColor3ub(83, 88, 245); //skin colour
    glVertex2f(0.29f, -0.66f);
    glVertex2f(0.283f, -0.735f);
    glVertex2f(0.35f, -0.735f);
    glVertex2f(0.35f, -0.66f);

//skin colour
    glVertex2f(0.42f, -0.66f);
    glVertex2f(0.43f, -0.735f);
    glVertex2f(0.355f, -0.735f);
    glVertex2f(0.355f, -0.66f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.345f, -0.76f);
    glVertex2f(0.345f, -0.75f);
    glVertex2f(0.325f, -0.75f);
    glVertex2f(0.325f, -0.76f);

    glVertex2f(0.4f, -0.76f);
    glVertex2f(0.4f, -0.75f);
    glVertex2f(0.42f, -0.75f);
    glVertex2f(0.42f, -0.76f);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.22f, -0.75f);
    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.22f, -0.77f);


glEnd();
int m;

    GLfloat p5=0.42f; GLfloat q5= -0.84f; GLfloat r5 = 0.035f;
    int tringlem=30;

    GLfloat tpm =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p5,q5);
    for(m= 0;m<=tringlem; m++)
    {
        glVertex2f (
                    p5+(r5*cos(m*tpm/tringlem)),
                    q5+(r5*sin(m*tpm/tringlem))
                    );


    }
    glEnd();

    int n;

    GLfloat pn=0.42f; GLfloat qn= -0.84f; GLfloat rn = 0.019f;
    int tringlen=30;

    GLfloat tpn =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pn,qn);
    for(n= 0;n<=tringlen; n++)
    {
        glVertex2f (
                    pn+(rn*cos(n*tpn/tringlen)),
                    qn+(rn*sin(n*tpn/tringlen))
                    );


    }
    glEnd();

int a;

    GLfloat pa=0.26f; GLfloat qa= -0.84f; GLfloat ra = 0.035f;
    int tringlea=30;

    GLfloat tpa =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (pa,qa);
    for(a= 0;a<=tringlea; a++)
    {
        glVertex2f (
                    pa+(ra*cos(a*tpa/tringlea)),
                    qa+(ra*sin(a*tpa/tringlea))
                    );


    }
    glEnd();


int a1;

    GLfloat pa1=0.26f; GLfloat qa1= -0.84f; GLfloat ra1 = 0.019f;
    int tringlea1=30;

    GLfloat tp1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pa1,qa1);
    for(a1= 0;a1<=tringlea1; a1++)
    {
        glVertex2f (
                    pa1+(ra1*cos(a1*tp1/tringlea1)),
                    qa1+(ra1*sin(a1*tp1/tringlea1))
                    );


    }
    glEnd();
 glPopMatrix();

}
void nightcar(){
    //left car
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.624f,0.0f,0.059f); //red
    glVertex2f(-0.95f, -0.25f);
    glVertex2f(-0.95f, -0.4f);
    glVertex2f(-0.50f, -0.4f);
    glVertex2f(-0.50f, -0.25f);

    glColor3f(0.0f,0.0f,0.502f); //blue
    glVertex2f(-0.95f, -0.4f);
    glVertex2f(-0.95f, -0.57f);
    glVertex2f(-0.50f, -0.57f);
    glVertex2f(-0.50f, -0.4f);

    glColor3f(1.0f,1.0f,0.0f); //yelow
    glVertex2f(-0.51f, -0.42f);
    glVertex2f(-0.51f, -0.45f);
    glVertex2f(-0.50f, -0.45f);
    glVertex2f(-0.50f, -0.42f);

    glColor3ub(240, 230, 140);
    glVertex2f(-0.43f, -0.4f);
    glVertex2f(-0.43f, -0.49f);
    glVertex2f(-0.50f, -0.44f);
    glVertex2f(-0.50f, -0.43f);



    glColor3f(1.0f,0.0f,0.0f); //red
    glVertex2f(-0.95f, -0.42f);
    glVertex2f(-0.95f, -0.45f);
    glVertex2f(-0.94f, -0.45f);
    glVertex2f(-0.94f, -0.42f);


    glColor3ub(83, 88, 245); //glass
    glVertex2f(-0.6f, -0.28f);
    glVertex2f(-0.6f, -0.4f);
    glVertex2f(-0.50f, -0.4f);
    glVertex2f(-0.50f, -0.28f);

    glColor3ub(83, 88, 245); //door
    glVertex2f(-0.67f, -0.3f);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.62f, -0.54f);
    glVertex2f(-0.62f, -0.3f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.67f, -0.3f);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.667f, -0.54f);
    glVertex2f(-0.667f, -0.3f);

    glVertex2f(-0.67f, -0.3f);
    glVertex2f(-0.67f, -0.31f);
    glVertex2f(-0.62f, -0.31f);
    glVertex2f(-0.62f, -0.3f);

    glVertex2f(-0.615f, -0.3f);
    glVertex2f(-0.615f, -0.54f);
    glVertex2f(-0.62f, -0.54f);
    glVertex2f(-0.62f, -0.3f);

    glVertex2f(-0.67f, -0.53f);
    glVertex2f(-0.67f, -0.54f);
    glVertex2f(-0.62f, -0.54f);
    glVertex2f(-0.62f, -0.53f);

    glVertex2f(-0.64f, -0.3f);
    glVertex2f(-0.64f, -0.54f);
    glVertex2f(-0.645f, -0.54f);
    glVertex2f(-0.645f, -0.3f);

    glColor3ub(83, 88, 245); //window 1
    glVertex2f(-0.72f, -0.28f);
    glVertex2f(-0.72f, -0.36f);
    glVertex2f(-0.78f, -0.36f);
    glVertex2f(-0.78f, -0.28f);

//window 2
    glVertex2f(-0.86f, -0.28f);//window 2
    glVertex2f(-0.86f, -0.36f);
    glVertex2f(-0.8f, -0.36f);
    glVertex2f(-0.8f, -0.28f);

//window 3
    glVertex2f(-0.94f, -0.28f);//window 3
    glVertex2f(-0.94f, -0.36f);
    glVertex2f(-0.88f, -0.36f);
    glVertex2f(-0.88f, -0.28f);
    glEnd();


//left car wheel
 glBegin(GL_TRIANGLE_FAN);
  glColor3f(0.0f,0.0f,0.0f);


 int j;

    GLfloat p2=-0.85f; GLfloat q2= -0.55f; GLfloat r2 = 0.045f;
    int tringlej=30;

    GLfloat tpj =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p2,q2);
    for(j= 0;j<=tringlej; j++)
    {
        glVertex2f (
                    p2+(r2*cos(j*tpj/tringlej)),
                    q2+(r2*sin(j*tpj/tringlej))
                    );


    }
    glEnd();

    int x;

    GLfloat px=-0.85f; GLfloat qx= -0.55f; GLfloat rx = 0.025f;
    int tringlex=30;

    GLfloat tpx =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (px,qx);
    for(x= 0;x<=tringlex; x++)
    {
        glVertex2f (
                    px+(rx*cos(x*tpx/tringlex)),
                    qx+(rx*sin(x*tpx/tringlex))
                    );


    }
    glEnd();



int k;

    GLfloat p3=-0.60f; GLfloat q3= -0.55f; GLfloat r3 = 0.045f;
    int tringlek=20;

    GLfloat tpk =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p3,q3);
    for(k= 0;k<=tringlek; k++)
    {
        glVertex2f (
                    p3+(r3*cos(k*tpk/tringlek)),
                    q3+(r3*sin(k*tpk/tringlek))
                    );


    }
    glEnd();
    int y;

    GLfloat py=-0.60f; GLfloat qy= -0.55f; GLfloat ry = 0.025f;
    int tringley=20;

    GLfloat tpy =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (py,qy);
    for(y= 0;y<=tringley; y++)
    {
        glVertex2f (
                    py+(ry*cos(y*tpy/tringley)),
                    qy+(ry*sin(y*tpy/tringley))
                    );


    }
    glEnd();



 glPopMatrix();

}

void nightcar2(){
   glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f,0.0f,0.0f); //red1
    glVertex2f(0.8f, -0.85f);
    glVertex2f(0.8f, -0.74f);
    glVertex2f(0.7f, -0.74f);
    glVertex2f(0.7f, -0.85f);

    glVertex2f(0.8f, -0.85f);//red2
    glVertex2f(0.8f, -0.72f);
    glVertex2f(0.88f, -0.74f);
    glVertex2f(0.88f, -0.85f);

    glVertex2f(0.7f, -0.72f);//red3
    glVertex2f(0.6f, -0.74f);
    glVertex2f(0.6f, -0.85f);
    glVertex2f(0.7f, -0.85f);

    glVertex2f(0.83f, -0.65f);//red5
    glVertex2f(0.86f, -0.85f);
    glVertex2f(0.66f, -0.85f);
    glVertex2f(0.682f, -0.65f);


    glColor3ub(83, 88, 245); //skin colour
    glVertex2f(0.69f, -0.66f);
    glVertex2f(0.683f, -0.735f);
    glVertex2f(0.75f, -0.735f);
    glVertex2f(0.75f, -0.66f);

//skin colour
    glVertex2f(0.82f, -0.66f);
    glVertex2f(0.83f, -0.735f);
    glVertex2f(0.755f, -0.735f);
    glVertex2f(0.755f, -0.66f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.745f, -0.76f);
    glVertex2f(0.745f, -0.75f);
    glVertex2f(0.725f, -0.75f);
    glVertex2f(0.725f, -0.76f);

    glVertex2f(0.8f, -0.76f);
    glVertex2f(0.8f, -0.75f);
    glVertex2f(0.82f, -0.75f);
    glVertex2f(0.82f, -0.76f);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.62f, -0.75f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.6f, -0.77f);
    glVertex2f(0.62f, -0.77f);

    glColor3ub(240, 230, 140);
    glVertex2f(0.54f, -0.74f);
    glVertex2f(0.6f, -0.76f);
    glVertex2f(0.6f, -0.76f);
    glVertex2f(0.54f, -0.79f);



glEnd();


 int m;

    GLfloat p5=0.82f; GLfloat q5= -0.84f; GLfloat r5 = 0.035f;
    int tringlem=30;

    GLfloat tpm =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p5,q5);
    for(m= 0;m<=tringlem; m++)
    {
        glVertex2f (
                    p5+(r5*cos(m*tpm/tringlem)),
                    q5+(r5*sin(m*tpm/tringlem))
                    );


    }
    glEnd();

    int n;

    GLfloat pn=0.82f; GLfloat qn= -0.84f; GLfloat rn = 0.019f;
    int tringlen=30;

    GLfloat tpn =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pn,qn);
    for(n= 0;n<=tringlen; n++)
    {
        glVertex2f (
                    pn+(rn*cos(n*tpn/tringlen)),
                    qn+(rn*sin(n*tpn/tringlen))
                    );


    }
    glEnd();

int a;

    GLfloat pa=0.66f; GLfloat qa= -0.84f; GLfloat ra = 0.035f;
    int tringlea=30;

    GLfloat tpa =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (pa,qa);
    for(a= 0;a<=tringlea; a++)
    {
        glVertex2f (
                    pa+(ra*cos(a*tpa/tringlea)),
                    qa+(ra*sin(a*tpa/tringlea))
                    );


    }
    glEnd();


int a1;

    GLfloat pa1=0.66f; GLfloat qa1= -0.84f; GLfloat ra1 = 0.019f;
    int tringlea1=30;

    GLfloat tp1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pa1,qa1);
    for(a1= 0;a1<=tringlea1; a1++)
    {
        glVertex2f (
                    pa1+(ra1*cos(a1*tp1/tringlea1)),
                    qa1+(ra1*sin(a1*tp1/tringlea1))
                    );


    }
    glEnd();
 glPopMatrix();

}
void nightcar3(){
   glPushMatrix();
   glTranslatef(position6,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.0f,1.0f); //blue1
    glVertex2f(0.4f, -0.85f);
    glVertex2f(0.4f, -0.74f);
    glVertex2f(0.3f, -0.74f);
    glVertex2f(0.3f, -0.85f);

    glVertex2f(0.4f, -0.85f);//blue2
    glVertex2f(0.4f, -0.72f);
    glVertex2f(0.48f, -0.74f);
    glVertex2f(0.48f, -0.85f);

    glVertex2f(0.3f, -0.72f);//blue3
    glVertex2f(0.2f, -0.74f);
    glVertex2f(0.2f, -0.85f);
    glVertex2f(0.3f, -0.85f);

    glVertex2f(0.43f, -0.65f);//blue4
    glVertex2f(0.46f, -0.85f);
    glVertex2f(0.26f, -0.85f);
    glVertex2f(0.282f, -0.65f);



    glColor3ub(83, 88, 245); //skin colour
    glVertex2f(0.29f, -0.66f);
    glVertex2f(0.283f, -0.735f);
    glVertex2f(0.35f, -0.735f);
    glVertex2f(0.35f, -0.66f);

//skin colour
    glVertex2f(0.42f, -0.66f);
    glVertex2f(0.43f, -0.735f);
    glVertex2f(0.355f, -0.735f);
    glVertex2f(0.355f, -0.66f);

    glColor3f(0.0f,0.0f,0.0f); //black
    glVertex2f(0.345f, -0.76f);
    glVertex2f(0.345f, -0.75f);
    glVertex2f(0.325f, -0.75f);
    glVertex2f(0.325f, -0.76f);

    glVertex2f(0.4f, -0.76f);
    glVertex2f(0.4f, -0.75f);
    glVertex2f(0.42f, -0.75f);
    glVertex2f(0.42f, -0.76f);

    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.22f, -0.75f);
    glVertex2f(0.2f, -0.75f);
    glVertex2f(0.2f, -0.77f);
    glVertex2f(0.22f, -0.77f);

    glColor3ub(240, 230, 140);
    glVertex2f(0.15f, -0.73f);
    glVertex2f(0.2f, -0.76f);
    glVertex2f(0.2f, -0.76f);
    glVertex2f(0.15f, -0.79f);




glEnd();
int m;

    GLfloat p5=0.42f; GLfloat q5= -0.84f; GLfloat r5 = 0.035f;
    int tringlem=30;

    GLfloat tpm =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (p5,q5);
    for(m= 0;m<=tringlem; m++)
    {
        glVertex2f (
                    p5+(r5*cos(m*tpm/tringlem)),
                    q5+(r5*sin(m*tpm/tringlem))
                    );


    }
    glEnd();

    int n;

    GLfloat pn=0.42f; GLfloat qn= -0.84f; GLfloat rn = 0.019f;
    int tringlen=30;

    GLfloat tpn =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pn,qn);
    for(n= 0;n<=tringlen; n++)
    {
        glVertex2f (
                    pn+(rn*cos(n*tpn/tringlen)),
                    qn+(rn*sin(n*tpn/tringlen))
                    );


    }
    glEnd();

int a;

    GLfloat pa=0.26f; GLfloat qa= -0.84f; GLfloat ra = 0.035f;
    int tringlea=30;

    GLfloat tpa =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 0.0f,0.0f,0.0f);
    glVertex2f (pa,qa);
    for(a= 0;a<=tringlea; a++)
    {
        glVertex2f (
                    pa+(ra*cos(a*tpa/tringlea)),
                    qa+(ra*sin(a*tpa/tringlea))
                    );


    }
    glEnd();


int a1;

    GLfloat pa1=0.26f; GLfloat qa1= -0.84f; GLfloat ra1 = 0.019f;
    int tringlea1=30;

    GLfloat tp1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3f ( 1.0f,1.0f,1.0f);
    glVertex2f (pa1,qa1);
    for(a1= 0;a1<=tringlea1; a1++)
    {
        glVertex2f (
                    pa1+(ra1*cos(a1*tp1/tringlea1)),
                    qa1+(ra1*sin(a1*tp1/tringlea1))
                    );


    }
    glEnd();
 glPopMatrix();

}


void bird(){
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.27f,0.74f);// 1st
    glVertex2f(0.30f,0.73f);
    glVertex2f(0.30f,0.73f);
    glVertex2f(0.29f,0.72f);
    glVertex2f(0.29f,0.72f);
    glVertex2f(0.29f,0.72f);
    glVertex2f(0.28f,0.71f);
    glVertex2f(0.28f,0.70f);
    glVertex2f(0.27f,0.72f);
    glVertex2f(0.26f,0.72f);
    glVertex2f(0.26f,0.72f);
    glVertex2f(0.26f,0.73f);
    glVertex2f(0.27f,0.74f);

glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.29f,0.64f);// 2nd
   glVertex2f(0.32f,0.63f);
   glVertex2f(0.33f,0.63f);
   glVertex2f(0.32f,0.62f);
   glVertex2f(0.313f,0.622f);
   glVertex2f(0.315f,0.614f);
   glVertex2f(0.31f,0.60f);
   glVertex2f(0.308f,0.617f);
   glVertex2f(0.295f,0.614f);
   glVertex2f(0.29f,0.622f);
   glVertex2f(0.28f,0.63f);
   glVertex2f(0.28f,0.631f);
   glVertex2f(0.29f,0.63f);

 glEnd();
   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.37f,0.717f);// 3rd
   glVertex2f(0.39f,0.705f);
   glVertex2f(0.405f,0.697f);
   glVertex2f(0.39f,0.6914f);
   glVertex2f(0.39f,0.694f);
   glVertex2f(0.39f,0.688f);
   glVertex2f(0.385f,0.688f);
   glVertex2f(0.38f,0.68f);
   glVertex2f(0.37f,0.694f);
   glVertex2f(0.36f,0.6914f);
   glVertex2f(0.366f,0.7f);
   glVertex2f(0.363f,0.711f);
   glVertex2f(0.37f,0.711f);

glEnd();
glPopMatrix();


}

void day() {

   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   sky();
   sun();
   cloud();
   building();
   road();
   roadside();
   boat();
   boat2();
      busstop();
   lamp();
   red();
   green();
   yellow();
   car2();
   car();
   car3();
   bird();

glFlush();
}

void night() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    nightSky();
    star();
    moon();
    cloud();
    nightbuilding();
    nightroadside();
    boat();
    boat2();
    busstop();
    nightlamp();
    red();
    yellow();
    green();
    road();
    nightcar();
    nightcar2();
    nightcar3();

   glFlush();
}

void redlight(){

   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   sky();
   sun();
   cloud();
   building();
   road();
   roadside();
   boat();
   boat2();
   busstop();
   lamp();
   red();
   car2();
   car();
   car3();
   bird();

glFlush();

}

void nightredlight(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    nightSky();
    star();
    moon();
    cloud();
    nightbuilding();
    nightroadside();
    boat();
    boat2();
    busstop();
    nightlamp();
    red();
    road();
    car();
    car2();
    car3();

   glFlush();

}


void greenlight(){
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   sky();
   sun();
   cloud();
   building();
   road();
   roadside();
   boat();
   boat2();
   busstop();
   lamp();
   green();
   car2();
   car();
   car3();
   bird();

glFlush();

}

void nightgreenlight(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    nightSky();
    star();
    moon();
    cloud();
    nightbuilding();
    nightroadside();
    boat();
    boat2();
    busstop();
    nightlamp();
    green();
    road();
    car();
    car2();
    car3();

   glFlush();

}



void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

    case 'p':
    speed = 0.0f;
    speed2 = 0.0f;
    speed3 = 0.0f;
    speed4 = 0.0f;
    speed5 = 0.0f;
    speed6 = 0.0f;
    speed7=0.0f;
    break;

    case 'd':
    speed = 0.01f;
    speed2 = 0.01f;
    speed3 = 0.01f;
    speed4 = 0.01f;
    speed5 = 0.01f;
    speed6 = 0.01f;
    speed7=0.01f;
    break;

    case'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;

   case'z':
   glutDisplayFunc(day);
   glutPostRedisplay();
   break;

   case'r':
    speed = 0.0f;
    speed4 = 0.0f;
    speed6 = 0.0f;
    glutDisplayFunc(redlight);
    glutPostRedisplay();
    break;

    case't':

    speed = 0.0f;
    speed4 = 0.0f;
    speed6 = 0.0f;
    glutDisplayFunc(nightredlight);
    glutPostRedisplay();
    break;

    case'g':
    speed = 0.009f;
    speed4 = 0.009f;
    speed6 = 0.009;
    glutDisplayFunc(greenlight);
    glutPostRedisplay();
    break;

    case'y':
    speed = 0.009f;
    speed4 = 0.009f;
    speed6 = 0.009f;
    glutDisplayFunc(nightgreenlight);
    glutPostRedisplay();
    break;

	}

}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 600);
   glutInitWindowPosition(100, 150);
   glutCreateWindow(" Roadside View");
   glutDisplayFunc(day);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutKeyboardFunc(handleKeypress);
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);
   glutTimerFunc(100, update3, 0);
   glutTimerFunc(100, update4, 0);
   glutTimerFunc(100, update5, 0);
   glutTimerFunc(100, update6, 0);
   glutTimerFunc(100, update7, 0);
   glutMainLoop();
   return 0;
}
