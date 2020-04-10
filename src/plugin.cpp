#include "plugin.hpp"


Plugin* pluginInstance;

void init(rack::Plugin* p) {
	pluginInstance = p;

	p->addModel(modelDualAmp);
	p->addModel(modelPanelA4);
	p->addModel(modelPanelB4);
	p->addModel(modelPanelC4);
}
