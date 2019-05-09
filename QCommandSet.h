#pragma once
#include <QObject>
#include "qconnecthelp_global.h"

namespace CodeControl
{
	class QCOONNECTHELP_EXPORT QCommandSet :public QObject
	{
	public:
		QCommandSet(void);
		~QCommandSet(void);
	public:
		inline QString name() const{ return this->metaObject()->className(); }
		bool Exec(QString strSlot,QGenericReturnArgument ret,QGenericArgument val0 = QGenericArgument(0),
			QGenericArgument val1 = QGenericArgument(),
			QGenericArgument val2 = QGenericArgument(),
			QGenericArgument val3 = QGenericArgument());
		//无返回值
		bool Exec(QString strSlot,QGenericArgument val0 = QGenericArgument(0),
			QGenericArgument val1 = QGenericArgument(),
			QGenericArgument val2 = QGenericArgument(),
			QGenericArgument val3 = QGenericArgument());
		//多线程 阻塞等待返回值 (需防止死锁)
		bool ExecBlocking(QString strSlot,QGenericReturnArgument ret,
			QGenericArgument val0 = QGenericArgument(0),
			QGenericArgument val1 = QGenericArgument(),
			QGenericArgument val2 = QGenericArgument(),
			QGenericArgument val3 = QGenericArgument());

		//无返回值多线程 阻塞等待返回值 (需防止死锁)
		bool ExecBlocking(QString strSlot,QGenericArgument val0 = QGenericArgument(0),
			QGenericArgument val1 = QGenericArgument(),
			QGenericArgument val2 = QGenericArgument(),
			QGenericArgument val3 = QGenericArgument());
	};

}