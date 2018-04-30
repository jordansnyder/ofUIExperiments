#include "ofApp.h"

int color = 0;

//--------------------------------------------------------------
void ofApp::setup(){
    parameters.setName("parameters");
    
    parameters.add(aValue.set("a", 1, -100, 100));
    parameters.add(hValue.set("h", 1, -100, 100));
    parameters.add(kValue.set("k", 1, -100, 100));
    parameters.add(fillColor.set("fill color",ofColor(127),ofColor(0,0),ofColor(255)));
    
    panel.setup(parameters);
}

//--------------------------------------------------------------
void ofApp::update(){
}

void ofApp::drawParabola(ofPath path) {
    path.setMode(ofPath::POLYLINES);
    path.setColor(fillColor.get());
    
    float a, h, k;
    
    int width = ofGetWidth();
    int height = ofGetHeight();
    
    a = aValue.get();
    h = hValue.get();
    k = kValue.get();
    int numPoints = 400;
    float x = 0;
    while(x < width) {
        float a = (width - h) / (h * h + 0.01);
        float y = a * (x - h) * (x - h) + k;
        x += .01;
        path.lineTo(x,y);
    }
    
    path.simplify();
    //path.draw();
    path.draw(ofGetWidth()/2 + h, ofGetHeight()/2 + k);
}

//--------------------------------------------------------------
void ofApp::draw(){
    panel.draw();
    drawParabola(parabolaPath);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
