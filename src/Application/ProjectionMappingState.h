#pragma once

#include "Application.h"
#include "ofEvents.h"
#include "ofLog.h"
#include "ofGraphics.h"
#include "AddSurfaceCmd.h"
#include "SurfaceType.h"

namespace ofx {
    namespace piMapper {
        
        class ProjectionMappingState : public ApplicationBaseState {
            public:
                static ProjectionMappingState * instance();
                void draw(Application * app);
                void onKeyPressed(Application * app, ofKeyEventArgs & args);
                void onOscMessage(ofxOscMessage & oscMessage);
            
            private:
                static ProjectionMappingState * _instance;
        };
        
    } // namespace piMapper
} // namespace ofx
