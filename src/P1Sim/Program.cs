using System.IO.Ports;

var serial = new SerialPort("COM6", 115200, Parity.None, 8, StopBits.One);


serial.DataReceived += Serial_DataReceived;

void Serial_DataReceived(object sender, SerialDataReceivedEventArgs e)
{
    var port = (SerialPort)sender;


    while (port.BytesToRead > 0)
    {
        char c = (char)port.ReadChar();
        Console.Write(c);
    }
}




while (true)
{
    Console.ReadLine();


    if (!serial.IsOpen)
        serial.Open();

    var bytes = File.ReadAllBytes(@"C:\Temp\telegram.txt");
    serial.Write(bytes, 0, bytes.Length);

    while(serial.BytesToRead > 0 || serial.BytesToWrite > 0)
    {
        // Just wait.
    }
}
