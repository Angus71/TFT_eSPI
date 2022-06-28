
// This is the command sequence that rotates the SSD1282A driver coordinate frame

  rotation = m % 4; // Limit the range of values to 0-3

  switch (rotation) {
    case 1:
    case 3:
      _width  = _init_width;
      _height = _init_height;
      writecommand(0x01);
      writedata(0x21);
      writedata(0x83);
      writecommand(0x03);
      writedata(0x68);
      writedata(0x30);
      break;
    case 0:
    case 2:
      _width  = _init_height;
      _height = _init_width;
      writecommand(0x01);
      writedata(0x22);
      writedata(0x83);
      writecommand(0x03);
      writedata(0x68);
      writedata(0x38);
      break;
  }
