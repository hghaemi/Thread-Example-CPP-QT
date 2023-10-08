#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QThread>
class counter : public QThread
{
    Q_OBJECT
public:
    explicit counter(QObject *parent = nullptr);

    void run() override;
    bool startflag=false;
    int A;

signals:
    void send(int i);
};

#endif // COUNTER_H
