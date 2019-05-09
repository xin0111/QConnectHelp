#pragma once
#include <map>

#include "Singleton.h"
#include "QCommandSet.h"
#include "qconnecthelp_global.h"

namespace CodeControl
{

	class QCOONNECTHELP_EXPORT QCommandSetManager:public QObject ,public Singleton<QCommandSetManager>
	{
	public:
		QCommandSetManager(void);
		~QCommandSetManager(void);
		bool AddCommandSet(QCommandSet* pCommandSet);
		QCommandSet* GetCommandSet(QString strCommandSetName);
	private:
		std::map<QString, QCommandSet*> m_CommandSets;
	};

		
}