#include <stdio.h>
#include <GL/glut.h>

void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}

void resize(int w, int h)
{
  glViewport(0, 0, w, h);
  glLoadIdentity();
  glOrtho(-0.5, (GLdouble)w - 0.5, (GLdouble)h - 0.5, -0.5, -1.0, 1.0);
}

void mouse(int button, int state, int x, int y)
{
  static int x0, y0;

  switch(button) {
    case GLUT_LEFT_BUTTON:
      if (state == GLUT_UP) {
        glColor3d(0.0, 0.0, 0.0);
        glBegin(GL_LINES);
        glVertex2i(x0, y0);
        glVertex2i(x, y);
        glEnd();
        glFlush();
      } else {
        x0 = x;
        y0 = y;
      }
      break;
    case GLUT_MIDDLE_BUTTON:
      break;
    case GLUT_RIGHT_BUTTON:
      break;
    default:
      break;
  }
}

void init()
{
  glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char** argv)
{
  glutInitWindowPosition(100, 100);
  glutInitWindowSize(320, 240);
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  glutReshapeFunc(resize);
  glutMouseFunc(mouse);
  init();
  glutMainLoop();
  return 0;
}
