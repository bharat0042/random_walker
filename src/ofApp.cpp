#include "ofApp.h"

#include <random>
#include <chrono>
#include <ctime>
#include <iostream>

void ofApp::setup()
{
    ofSetVerticalSync(true);
    ofBackground(ofColor::white);
    ofSetBackgroundAuto(false);
}

void ofApp::update()
{
    x1 += dx1;
    y1 += dy1;

    x2 += dx2;
    y2 += dy2;

    x3 += dx3;
    y3 += dy3;

    x4 += dx4;
    y4 += dy4;

    std::random_device rd;

    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(-gap, gap);
    dx1 = dist(mt);
    dy1 = dist(mt);

    std::minstd_rand lce(rd());
    std::uniform_int_distribution<int> distl(-gap, gap);
    dx2 = distl(lce);
    dy2 = distl(lce);


    std::ranlux24_base rlb(rd());
    std::uniform_int_distribution<int> distr(-gap, gap);
    dx3 = distr(rlb);
    dy3 = distr(rlb);

    std::knuth_b kb(rd());
    std::uniform_int_distribution<int> distkb(-gap, gap);
    dx4 = distkb(kb);
    dy4 = distkb(kb);
}

void ofApp::draw()
{
    ofSetColor(255, 0, 0, 255);
    ofDrawLine(x1, y1, x1 + dx1, y1 + dy1);

    ofSetColor(0, 255, 0, 255);
    ofDrawLine(x2, y2, x2 + dx2, y2 + dy2);

    ofSetColor(0, 0, 255, 255);
    ofDrawLine(x3, y3, x3 + dx3, y3 + dy3);

    ofSetColor(0, 0, 0, 255);
    ofDrawLine(x4, y4, x4 + dx4, y4 + dy4);
}

void ofApp::keyPressed(int key)
{

}

void ofApp::keyReleased(int key)
{

}

void ofApp::mouseMoved(int x, int y )
{

}

void ofApp::mouseDragged(int x, int y, int button)
{

}

void ofApp::mousePressed(int x, int y, int button)
{

}

void ofApp::mouseReleased(int x, int y, int button)
{

}

void ofApp::mouseEntered(int x, int y)
{

}

void ofApp::mouseExited(int x, int y)
{

}

void ofApp::windowResized(int w, int h)
{

}

void ofApp::gotMessage(ofMessage msg)
{

}

void ofApp::dragEvent(ofDragInfo dragInfo)
{ 

}
