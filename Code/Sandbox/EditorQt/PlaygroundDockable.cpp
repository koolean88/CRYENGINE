// Copyright 2001-2019 Crytek GmbH / Crytek Group. All rights reserved.
#include <StdAfx.h>
#include "PlaygroundDockable.h"
#include "Material/MaterialBrowser.h"

#include <QLabel>

//Uncomment this to register and use the Playground Dockable
REGISTER_VIEWPANE_FACTORY(CPlaygroundDockable, "Playground", "", false);

CPlaygroundDockable::CPlaygroundDockable()
	: CDockableEditor()
{
	QVBoxLayout* m_pPreviewImagesLayout = new QVBoxLayout();

	//Sample code, replace with your test
	auto someTestWidget = new QLabel("Playground Dockable");
	someTestWidget->setAlignment(Qt::AlignCenter);
	someTestWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	
	auto qstr = new QString();
	auto pPreview = new QTexturePreview(*qstr, QSize(512, 512), this);
	m_preview_winId = pPreview->winId();

	m_pPreviewImagesLayout->addWidget(someTestWidget);
	m_pPreviewImagesLayout->addWidget(pPreview);
	m_pPreviewImagesLayout->setAlignment(pPreview, Qt::AlignLeft);


	QWidget* pContent = new QWidget();
	pContent->setLayout(m_pPreviewImagesLayout);
	//m_filterPanel->SetContent(pContent);


	//setLayout(m_pPreviewImagesLayout);
	

	SetContent(pContent);
}
