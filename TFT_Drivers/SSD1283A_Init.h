#if defined (SSD1283A_DRIVER)
  writecommand(0x10);   //Power control (1)
  writedata(0x2f);
  writedata(0x8e);

  writecommand(0x11);   //Power control (2)
  writedata(0x00);
  writedata(0x0c);

  writecommand(0x07);   //Display control
  writedata(0x00);
  writedata(0x21);

  writecommand(0x28);   //VCOM OTP (1)
  writedata(0x00);
  writedata(0x06);

  writecommand(0x28);   //VCOM OTP (1)
  writedata(0x00);
  writedata(0x05);

  writecommand(0x27);   //Further Bias
  writedata(0x05);
  writedata(0x7f);      // ?? -> 0x78 DataSheet

  writecommand(0x29);   //VCOM OTP (2)
  writedata(0x89);
  writedata(0xA1);

  writecommand(0x00);   //Oscillation Start
  writedata(0x00);
  writedata(0x01);

  delay(100);

  writecommand(0x29);   //VCOM OTP (2)
  writedata(0x80);
  writedata(0xB0);

  delay(30);

  writecommand(0x29);   //VCOM OTP (2)
  writedata(0xFF);
  writedata(0xFE);

  writecommand(0x07);   //Display control
  writedata(0x02);
  writedata(0x23);

  delay(30);

  writecommand(0x07);   //Display control
  writedata(0x02);
  writedata(0x33);

  writecommand(0x01);   //Driver output control
  writedata(0x21);
  writedata(0x83);

  writecommand(0x03);   //Entry mode
  writedata(0x68);
  writedata(0x30);

  writecommand(0x2f);   //Test Commands
  writedata(0xFF);
  writedata(0xFF);

  writecommand(0x2c);   //Test Commands
  writedata(0x80);
  writedata(0x00);

  writecommand(0x27);   //Further Bias
  writedata(0x05);
  writedata(0x70);

  writecommand(0x02);   //LCD drive AC control
  writedata(0x03);
  writedata(0x00);

  writecommand(0x0B);   //Frame cycle control
  writedata(0x58);
  writedata(0x0c);

  writecommand(0x12);   //Power control (3)
  writedata(0x06);
  writedata(0x09);

  writecommand(0x13);   //Power control (4)
  writedata(0x31);
  writedata(0x00);
#endif