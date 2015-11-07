#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "CustomSource.h"
#include "CrossSource.h"

class ofApp : public ofBaseApp {
    public:
        void setup();
        void update();
        void draw();

        ofxPiMapper piMapper;
  
        // By using a custom source that is derived from FboSource
        // you will be able to see the source listed in sources editor
        CustomSource * customSource;
        CrossSource * crossSource;
};