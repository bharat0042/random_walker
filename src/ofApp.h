#ifndef __OFAPP_H__
#define __OFAPP_H__

#include "ofMain.h"

class ofApp : public ofBaseApp
{
public:
    int x1 = 512, y1 = 288, dx1 = 0, dy1 = 0;
    int x2 = 512, y2 = 288, dx2 = 0, dy2 = 0;
    int x3 = 512, y3 = 288, dx3 = 0, dy3 = 0;
    int x4 = 512, y4 = 288, dx4 = 0, dy4 = 0;

    int gap = 3;

    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);    
};

#endif