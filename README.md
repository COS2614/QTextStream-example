# QTextStream-example
An example that demonstrates how to use the QTextStream class from the Qt framework.

In this example, we first create a QFile object named 'file' and open it for writing. Then, we create a QTextStream object named 'out' and attach it to the QFile object. Finally, we use the out stream to write the text "Hello, world!" to the file, followed by a newline.

Next, we reopen the file for reading and create another QTextStream object named 'in' attached to the QFile object. Finally, we use the in stream to read a single line of text from the file and store it in the QString variable 'line'.
