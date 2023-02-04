/*In this example, we first create a QFile object named file and open it for writing.
 * Then, we create a QTextStream object named out and attach it to the QFile object.
 * Finally, we use the out stream to write the text "Hello, world!" to the file, followed by a newline.
 * Next, we reopen the file for reading and create another QTextStream object named in attached to the QFile object.
 * Finally, we use the in stream to read a single line of text from the file and store it in the QString variable line.

This is just a simple example to demonstrate the basic usage of QTextStream.
You can find more information on how to use QTextStream in the Qt documentation: https://doc.qt.io/qt-5/qtextstream.html*/

#include <QTextStream>
#include <QFile>

int main(int argc, char* argv[])
{
    QFile file("example.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return -1;
    }

    QTextStream out(&file);
    out << "Hello, world!" << Qt::endl;
    file.close();

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return -1;
    }

    QTextStream in(&file);
    QString line = in.readLine();
    file.close();

    return 0;
}
