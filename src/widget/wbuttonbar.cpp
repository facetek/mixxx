#include <QKeyEvent>

#include "wbuttonbar.h"
#include "library/libraryfeature.h"

WButtonBar::WButtonBar(QWidget* parent)
        : QFrame(parent) {

    m_pLayout = new QVBoxLayout(this);
    m_pLayout->setContentsMargins(0,0,0,0);
    m_pLayout->setSpacing(0);
    setLayout(m_pLayout);
    setFocusPolicy(Qt::NoFocus);
}

WFeatureClickButton* WButtonBar::addButton(LibraryFeature* pFeature) {
    WFeatureClickButton* button = new WFeatureClickButton(pFeature, this);    
    m_pLayout->addWidget(button);
    updateGeometry();
    return button;
}
