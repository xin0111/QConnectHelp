##### 通过 slot函数“字符串” ，调用Qt槽函数

- testcommandset.h
````c++
class TestCommandset :public QCommandSet
{
    Q_OBJECT
public:
	TestCommandset();
	~TestCommandset();
public slots:	
    void onSayHello();
    void onSayWhat();
    bool onEnable();
}
````

- testcommandset.cpp
````c++
TestCommandset::TestCommandset()
{
	
}


TestCommandset::~TestCommandset()
{

}

void TestCommandset::onSayHello()
{
    qDebug() << "Hello World!";
}

void TestCommandset::onSayWhat(QString info)
{
    qDebug() << info;
}

bool TestCommandset::onEnable()
{
   return true;
}
````

- main.cpp
````c++
    TestCommandset* testcmd = new TestCommandset();
    QHYMPCommandManager::getInstance()->AddCommandSet(testcmd);
    //
    QCommandSet *command = QHYMPCommandManager::getInstance()->GetCommandSet("TestCommandset");
    if(command)
    {
        command->Exec("onSayHello");
        command->Exec("onSayWhat",Q_ARG(QString,"Hello World!!"));
        bool isEnable = false;
        command->Exec("onEnable", Q_RETURN_ARG(bool, isEnable));
    }
````