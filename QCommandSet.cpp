#include "QCommandSet.h"

namespace CodeControl
{


	QCommandSet::QCommandSet(void)
	{

	}


	QCommandSet::~QCommandSet(void)
	{

	}

	bool QCommandSet::Exec(QString strSlot,QGenericReturnArgument ret, 
		QGenericArgument val0,
		QGenericArgument val1,
		QGenericArgument val2,
		QGenericArgument val3)
	{
		if (NULL == this) return false;
		return QMetaObject::invokeMethod(this,strSlot.toLatin1(),		
			ret,
			val0, val1, val2,val3);	
	}

	bool QCommandSet::Exec(QString strSlot,
		QGenericArgument val0,
		QGenericArgument val1,
		QGenericArgument val2,
		QGenericArgument val3)
	{		
		if (NULL == this) return false;
		return QMetaObject::invokeMethod(this,strSlot.toLatin1(),		
		val0, val1, val2,val3);	
	}

	bool QCommandSet::ExecBlocking(QString strSlot,QGenericReturnArgument ret,
		QGenericArgument val0,
		QGenericArgument val1,
		QGenericArgument val2,
		QGenericArgument val3)
	{
		if (NULL == this) return false;
		return QMetaObject::invokeMethod(this,strSlot.toLatin1(), Qt::BlockingQueuedConnection,
			ret,
			val0, val1, val2,val3);	
	}

	bool QCommandSet::ExecBlocking(QString strSlot,
		QGenericArgument val0,
		QGenericArgument val1,
		QGenericArgument val2,
		QGenericArgument val3)
	{
		if (NULL == this) return false;
		return QMetaObject::invokeMethod(this,strSlot.toLatin1(), Qt::BlockingQueuedConnection,
			val0, val1, val2,val3);	
	}

}