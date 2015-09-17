// PresentationViewState
// Presentation view state singleton
// Created by Krisjanis Rijnieks 2015-05-24
#pragma once

#include "MainView.h"
#include "ofEvents.h"
#include "ofLog.h"
#include "ofGraphics.h"

namespace ofx {
    namespace piMapper {
        
        class PresentationViewState : public ViewState {
            public:
                static PresentationViewState * instance();
                void draw(MainView * mv);
            
            private:
                static PresentationViewState * _instance;
        };
        
    } // namespace piMapper
} // namespace ofx