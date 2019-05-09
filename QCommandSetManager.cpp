#include "QCommandSetManager.h"


namespace CodeControl
{
	QCommandSetManager::QCommandSetManager(void)
	{
	}


	QCommandSetManager::~QCommandSetManager(void)
	{
	}

	bool QCommandSetManager::AddCommandSet(QCommandSet* pCommandSet)
	{
		if(pCommandSet)
		{
			m_CommandSets[pCommandSet->name()] = pCommandSet;
			return true;
		}		
		return false;
	}

	QCommandSet* QCommandSetManager::GetCommandSet(QString strCommandSetName)
	{
		std::map<QString, QCommandSet*>::iterator itor = m_CommandSets.find(strCommandSetName);
		if (itor != m_CommandSets.end())
		{
			return itor->second;
		}
		return NULL;
	}

}