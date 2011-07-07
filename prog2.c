#include <GL/glut.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glRotated(25.0, 0.0, 1.0, 0.0);
  glBegin(GL_POLYGON);
  glColor3d(1.0, 0.0, 0.0);  // Red
  glVertex2d(-0.9, -0.9);
  glColor3d(0.0, 1.0, 0.0);  // Green
  glVertex2d(0.9, -0.9);
  glColor3d(0.0, 0.0, 1.0);  // Blue
  glVertex2d(0.9, 0.9);
  glColor3d(1.0, 1.0, 0.0);  // Yellow
  glVertex2d(-0.9, 0.9);
  glEnd();
  glFlush();
}

void init()
{
  glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  init();
  glutMainLoop();
  return 0;
}
