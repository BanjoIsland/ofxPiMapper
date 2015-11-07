#include "ofApp.h"

void ofApp::setup() {
    ofBackground(0);
    
    // Add our CustomSource to list of fbo sources of the piMapper
    // FBO sources should be added before piMapper.setup() so the
    // piMapper is able to load the source if it is assigned to
    // a surface in XML settings.
    crossSource = new CrossSource();
    customSource = new CustomSource();
    piMapper.registerFboSource(*crossSource);
    piMapper.registerFboSource(*customSource);
    piMapper.setup();
    
    // The info layer is hidden by default, press <i> to toggle
    // piMapper.showInfo();
}

void ofApp::update(){
    piMapper.update();
}

void ofApp::draw() {
    piMapper.draw();
}