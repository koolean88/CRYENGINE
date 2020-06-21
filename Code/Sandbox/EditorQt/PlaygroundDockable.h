// Copyright 2001-2019 Crytek GmbH / Crytek Group. All rights reserved.
#pragma once

#include "EditorFramework/Editor.h"
#include "Plugins/EditorCommon/AssetSystem/AssetEditor.h"



//! This class will create an empty editor and is meant for programmers to experiment without having to insert their code into other parts of the engine.
//! Treat this as your own personal playground to experiment with UI things. Do not submit your changes, this is meant for local experimentation only.
//! Uncomment the REGISTER macro in the cpp file to activate
class CPlaygroundDockable : public CDockableEditor
{
private:
	WId m_preview_winId = NULL;
public:
	CPlaygroundDockable();

	virtual const char* GetEditorName() const override { return "Playground"; }
	WId getPreviewWinId() { return m_preview_winId; }
};
