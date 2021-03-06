#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    stat = s01;
}

//--------------------------------------------------------------
void ofApp::update(){
    switch (stat) {
        case s01:
            if (time >= 5.0) {
                stat = s02;
                timeStamp = ofGetElapsedTimef();
            }
            break;
        case s02:
            if (time >= 2.0) {
                stat = s03;
                timeStamp = ofGetElapsedTimef();
            }
            break;
        case s03:
            if (time >= 4.0) {
                stat = s01;
                timeStamp = ofGetElapsedTimef();
            }
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    time = ofGetElapsedTimef() - timeStamp;
    ofSetColor(0);
    switch (stat) {
        case s01:
            ofDrawCone(ofGetWidth() / 2, ofGetHeight() / 2, 200, 300);
            break;
        case s02:
            ofDrawSphere(ofGetWidth() / 2, ofGetHeight() / 2, 200);
            break;
        case s03:
            ofDrawCylinder(ofGetWidth() / 2, ofGetHeight() / 2, 200, 400);
            break;
        default:
            break;
    }
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
