#pragma once

#include "ofEvents.h"
#include "ofLog.h"

#include "SetApplicationStateCmd.h"

#include "ApplicationBaseState.h"
#include "PresentationState.h"
#include "ProjectionMappingState.h"
#include "TextureMappingState.h"
#include "SourceSelectionState.h"
#include "FboSource.h"
#include "Info.h"

#include "SurfaceManagerGui.h"

// TODO: To be removed.
#include "GuiMode.h"

#define PIMAPPER_DEF_SURFACES_XML_FILE "defaultSurfaces.xml"
#define PIMAPPER_USER_SURFACES_XML_FILE "surfaces.xml"

namespace ofx {
namespace piMapper {

class ApplicationBaseState;

class Application {

	public:
		Application();

		ApplicationBaseState * getState();

		void setup();
		void draw();
		void onKeyPressed(ofKeyEventArgs & args);
		void addFboSource(FboSource & fboSource);
	
		bool loadXmlSettings(string fileName);
	
		SurfaceManagerGui * getGui(){ return &_gui; };
		SurfaceManager * getSurfaceManager(){ return &_surfaceManager; };
		CmdManager * getCmdManager(){ return &_cmdManager; };

	protected:
		void setState(ApplicationBaseState * st);

	private:
		friend class ApplicationBaseState;
		friend class SetApplicationStateCmd;

		ApplicationBaseState * _state;
	
		CmdManager _cmdManager;
		SurfaceManagerGui _gui;
		MediaServer _mediaServer;
		SurfaceManager _surfaceManager;
		Info _info;

};

} // namespace piMapper
} // namespace ofx
