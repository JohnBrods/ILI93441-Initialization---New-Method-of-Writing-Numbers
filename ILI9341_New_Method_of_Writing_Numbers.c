                                                  /*Anyone is free to copy, modify, publish, use, compile or
                                                    distribute this software, either in source code form or as a compiled
                                                    binary, for non-commercial use only. (i.e. YOU MAY NOT SELL IT)
                                                    John B 21/05/2021

                                                    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
                                                    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
                                                    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
                                                    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
                                                    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
                                                    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
                                                    OTHER DEALINGS IN THE SOFTWARE.*/

                                                   // CODE FOR ILI9341 8 BIT PARALLEL, SEE TFT SETTINGS FOR CONNECTIONS



//GLCD FontName : Segment1416x22
//GLCD FontSize : 16 x 22 SET FONT WIDTH TO 15 AND HEIGHT TO 22
const unsigned short Number_Font[] = {   //  44 Long  2 Bytes 16 Pixels Wide           PUT ANY FONT HERE, ASCCO 48 TO 57 NUMBERS ZERO TO 9

   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x01,0x40,0x02,0x20,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 48 0   0 to 44
   0x80,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x80,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00, // Code for char num 49 1   44 to 88
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x7F, // Code for char num 50 2   88 to 132
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F, // Code for char num 51 3   132 to 176
   0x01,0x40,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x20, // Code for char num 52 4   176 to 220
   0xFE,0x7F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F, // Code for char num 53 5   220 to 264
   0xFE,0x7F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 54 6   264 to 308
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x00,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40, // Code for char num 55 7   308 to 352
   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 56 8   352 to 396
   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F  // Code for char num 57 9   396 to 440
        };


const unsigned char Number_Font_Start = 0;
const unsigned char Number_Font_Length_Bytes = 44;
const unsigned char Number_Font_Width = 16;      // full bytes of pixels   8,16,24 etc        SET THE DATA HERE ON LEFT.
const unsigned char Number_Font_Height = 22;
const unsigned char Number_Font_Spacing = 1;


const unsigned char Black = 0;
const unsigned char Red = 2;
const unsigned char Orange = 3;
const unsigned char Yellow = 4;
const unsigned char Green = 5;
const unsigned char Blue = 6;
const unsigned char Violet = 7;
const unsigned char Gray = 8;
const unsigned char White = 9;
const unsigned char Magenta = 10;
const unsigned char Lime = 11;
const unsigned char Baby_Powder = 12;
const unsigned char Cyan = 13;
const unsigned char Lavenderblush = 14;
const unsigned char Beige = 15;

#define Black_Out         TFT_Write_Data_ST7735S(0b00000000);  TFT_Write_Data_ST7735S(0b00000000);
#define Red_Out           TFT_Write_Data_ST7735S(0b11110000);  TFT_Write_Data_ST7735S(0b00000000);
#define Orange_Out        TFT_Write_Data_ST7735S(0b11110011);  TFT_Write_Data_ST7735S(0b10000000);
#define Yellow_Out        TFT_Write_Data_ST7735S(0b11111111);  TFT_Write_Data_ST7735S(0b11100000);
#define Green_Out         TFT_Write_Data_ST7735S(0b00000011);  TFT_Write_Data_ST7735S(0b00000000);
#define Blue_Out          TFT_Write_Data_ST7735S(0b00000000);  TFT_Write_Data_ST7735S(0b00010111);
#define Violet_Out        TFT_Write_Data_ST7735S(0b11110000);  TFT_Write_Data_ST7735S(0b00011111);
#define Gray_Out          TFT_Write_Data_ST7735S(0b00111001);  TFT_Write_Data_ST7735S(0b11100011);
#define White_Out         TFT_Write_Data_ST7735S(0b11111111);  TFT_Write_Data_ST7735S(0b11111111);
#define Magenta_Out       TFT_Write_Data_ST7735S(0b11111001);  TFT_Write_Data_ST7735S(0b00001101);
#define Lime_Out          TFT_Write_Data_ST7735S(0b01110111);  TFT_Write_Data_ST7735S(0b11101100);
#define Baby_Powder_Out   TFT_Write_Data_ST7735S(0b11101110);  TFT_Write_Data_ST7735S(0b10001111);
#define Cyan_Out          TFT_Write_Data_ST7735S(0b00000111);  TFT_Write_Data_ST7735S(0b11111111);
#define Lavenderblush_Out TFT_Write_Data_ST7735S(0b11111011);  TFT_Write_Data_ST7735S(0b11000111);
#define Beige_Out         TFT_Write_Data_ST7735S(0b10111100);  TFT_Write_Data_ST7735S(0b00000000);

unsigned char TFT_DataPort at LATE;
unsigned char TFT_DataPort_Direction at TRISE;  //TRISE
sbit TFT_RST at LATB11_Bit; //RESET
sbit TFT_RS  at LATG12_BIT;
sbit TFT_CS  at LATG15_BIT;
sbit TFT_RD  at LATC4_bit;  //PMRD  READ
sbit TFT_WR  at LATC3_bit;  //PMWR  WRITE
sbit TFT_RST_Direction at TRISB11_bit;    //RESET
sbit TFT_RS_Direction  at TRISG12_BIT;
sbit TFT_CS_Direction  at TRISG15_BIT;
sbit TFT_RD_Direction  at TRISC4_bit;    //PMRD  READ
sbit TFT_WR_Direction  at TRISC3_bit;    //PMWR  WRITE

void TFT_Write_Command_ST7735S(unsigned char cmd) {   //CMD FOR COMMAND
  TFT_CS = 0;
  TFT_RS = 0;
  TFT_DataPort = cmd;
  TFT_WR = 0;
  TFT_WR = 1;
  TFT_CS = 1;
}

void TFT_Write_Data_ST7735S(unsigned int _data) {
  TFT_CS = 0;
  TFT_RS = 1;
  TFT_DataPort = _data;
  TFT_WR = 0;
  TFT_WR = 1;
  TFT_RS = 0;
  TFT_CS = 1;
}

static void Init_MCU() {

     ANSELA = 0;
     ANSELB = 0;
     ANSELC = 0;
     ANSELD = 0;
     ANSELE = 0;
     ANSELF = 0;
     ANSELG = 0;
     ANSELH = 0;
     ANSELJ = 0;

     TRISA = 0;
     TRISB = 0;
     TRISC = 0;
     TRISD = 0;
     TRISE = 0;
     TRISF = 0;
     TRISG = 0;
     TRISH = 0;
     TRISJ = 0;
     TRISK = 0;
}


void Initialize_Display(){        //COPIED FROM MY ST7735S DISPLAY AND ALL REG NAMES ARE SAME AS ILTEK ILI9341
                                  //I HAD A S.3 VOLTS VCC AND 5 VOLT BACKLIGHT
      //------------------------------------ILI9341 Reset Sequence----------------------------------------//
       TFT_RST = 1;
       Delay_ms(10);
       TFT_RST = 0;
       Delay_ms(10);
       TFT_RST = 1;
       Delay_ms(120);

       TFT_Write_Command_ST7735S(0x01); //Software Reset
       Delay_5ms();
       TFT_Write_Command_ST7735S(0x28); //Display Off

       TFT_Write_Command_ST7735S(0xC0);  // Power Control 1 PAGE 178 FOR VOLTAGE SELECTION
       TFT_Write_Data_ST7735S(0X20);   //9 = 3.3 VOLTS     NUMBER 3 = 3 VOLTS  AFFECTS COLOUR BRIGHTNESS TOO  OB1 0 0 1 1 0 4.75 V I HAVE A 5 VOLT WIRE, BACKLIGHT? NOT VCC

       TFT_Write_Command_ST7735S(0xC1); // Power Control 2 PAGE 179
       TFT_Write_Data_ST7735S(0x11);  //

       TFT_Write_Command_ST7735S(0xC5);  //VCOM Control 1(C5h) PAGE 180
       TFT_Write_Data_ST7735S(0X35);       //VMH [6:0] : Set the VCOMH voltage  3.3 =  18    82 = 4.75 volts   I HAVE A 5 VOLT WIRE, BACKLIGHT? NOT VCC
       TFT_Write_Data_ST7735S(0xCE);     //VML [6:0] : Set the VCOML voltage  0V = 0X64     1100011 -0.025V =

       TFT_Write_Command_ST7735S(0xC7);  //VCOM Control 2
       TFT_Write_Data_ST7735S(192); //////////BIG DIFFERENCE IN COLOUR BRIGHTNESS IF WRONG////190 SPEC IS 192 I HAVE A BRIGHT 94

       TFT_Write_Command_ST7735S(0xB7); // entry mode?
       TFT_Write_Data_ST7735S(0x07);

       TFT_Write_Command_ST7735S(0xB6);  // Display Function Control (B6h)  SCANNING PAGE 164
       TFT_Write_Data_ST7735S(0x0A);
       TFT_Write_Data_ST7735S(0x82);
       TFT_Write_Data_ST7735S(0x27);
       TFT_Write_Data_ST7735S(0x00);

       TFT_Write_Command_ST7735S(0xB0); // RGB Interface
       TFT_Write_Data_ST7735S(0x40);   // Signal Control

   //------------------------------------ILI9341 Frame rate-----------------------------------------//

       TFT_Write_Command_ST7735S(0xB1); //Frame Rate Control (In Normal Mode/Full Colors) (B1h) PAGE 155
       TFT_Write_Data_ST7735S(0x00);   //DIVA [1:0] : division ratio for internal clocks when Normal mode.  00 = NO DIVISION
       TFT_Write_Data_ST7735S(0x1B);  //NORMAL MODE  0x1B 70 Hz(default)    0X13 = 100 Hz  0X17 = 83 Hz

        TFT_Write_Command_ST7735S(0x36);  //MX, MY, RGB mode
        TFT_Write_Data_ST7735S(45);  //45 = TOP = CABLE AT TOP   235 CABLE AT BOTTOM

        TFT_Write_Command_ST7735S(0xF2);
        TFT_Write_Data_ST7735S(0x08);
        TFT_Write_Command_ST7735S(0x26);
        TFT_Write_Data_ST7735S(0x01);   //1, 2 4 8

     //------------------------------------ST7735S Gamma Sequence End-----------------------------------------//
        TFT_Write_Command_ST7735S(0xE0);  //  Positive Gamma Correction PAGE 87 /////DATASHEET SETTINGS BELOW////BRIGHTER///////////////
        TFT_Write_Data_ST7735S(0x08);
        TFT_Write_Data_ST7735S(0x0E);
        TFT_Write_Data_ST7735S(0x12);
        TFT_Write_Data_ST7735S(0x05);
        TFT_Write_Data_ST7735S(0x03);
        TFT_Write_Data_ST7735S(0x09);
        TFT_Write_Data_ST7735S(0x47);
        TFT_Write_Data_ST7735S(0x86);
        TFT_Write_Data_ST7735S(0x2B);
        TFT_Write_Data_ST7735S(0x0B);
        TFT_Write_Data_ST7735S(0x04);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Command_ST7735S(0xE1); //Negative Gamma Correction PAGE 87
        TFT_Write_Data_ST7735S(0x08);
        TFT_Write_Data_ST7735S(0x1A);
        TFT_Write_Data_ST7735S(0x20);
        TFT_Write_Data_ST7735S(0x07);
        TFT_Write_Data_ST7735S(0x0E);
        TFT_Write_Data_ST7735S(0x05);
        TFT_Write_Data_ST7735S(0x3A);
        TFT_Write_Data_ST7735S(0x8A);
        TFT_Write_Data_ST7735S(0x40);
        TFT_Write_Data_ST7735S(0x18);
        TFT_Write_Data_ST7735S(0x0F);
        TFT_Write_Data_ST7735S(0x3F);
        TFT_Write_Data_ST7735S(0x3F);
        TFT_Write_Data_ST7735S(0x3F);
        TFT_Write_Data_ST7735S(0x0F);           /////DATASHEET SETTINGS BELOW///////////////////

        TFT_Write_Command_ST7735S(0x3A);  //65k COLMOD: Pixel Format Set (3Ah)  PAGE 134
        TFT_Write_Data_ST7735S(0x05);     //16 Bit Colour  8-bit Data Bus for 16-bit/Pixel (RGB 5-6-5-bit Input), 65K-Colors, 3AH= “05h”

        TFT_Write_Command_ST7735S(0x11);   // SLEEP OUT
        Delay_ms(120);

        TFT_Write_Command_ST7735S(0x13);   //Normal Mode
        TFT_Write_Command_ST7735S(0x38);   //Idle Mode Off
        // TFT_Write_Command_ST7735S(0x39);   // Idle Mode ON (39h) FULL RGB
        TFT_Write_Command_ST7735S(0x29);   //Display on
          Delay_ms(120);
      // TFT_Write_Command_ST7735S(0x28);   //Display OFF*/

     //------------------------------------ST7735S Setup the partial area------------------------------------//
        /*TFT_Write_Command_ST7735S(0x30);  //Setup the partial area PAGE 118
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(25); //PSL:Start Line
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(105); //PEL:End Line

        TFT_Write_Command_ST7735S(0x33);   Vertical Scrolling Definition PAGE 120
        TFT_Write_Command_ST7735S(0x37);   Vertical Scrolling Start Address (37h)

       // TFT_Write_Command_ST7735S(0x12); //Turn on partial mode
        TFT_Write_Command_ST7735S(0x13); //Turn off partial mode*/
     //-------------------------------------------------------------------------------------------------------//

      //  TFT_Write_Command_ST7735S(0x2C);//Write memory access

      // TFT_Write_Command_ST7735S(0x21); //:Display Inversion On

     //  TFT_Write_Command_ST7735S(0x20); //: Display Inversion Off
    // 10.1 System Function Command List and Description  PAGE 83 ILI9341*/
}
                                                                 //  Number_Font_Width=16

void Set_Display_Number_Font(unsigned int X_Position, unsigned char Y_Position){

     unsigned int Set_start_column = 0x00 | X_Position;
     unsigned char Set_start_row = 0x00 | Y_position;

     unsigned int Set_end_column = Set_start_column + Number_Font_width-1; //(bytes -1 bit) 8 pixels = 1 byte, 16 pixels = 2 bytes
     unsigned char Set_end_row = Set_start_row + Number_font_height;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address 320 ILI9341
     TFT_Write_Data_ST7735S(Set_start_column>>8);
     TFT_Write_Data_ST7735S(Set_start_column); // Start Column Address   bytes
     TFT_Write_Data_ST7735S(Set_end_column>>8);
     TFT_Write_Data_ST7735S(Set_end_column);     //Set_end_column

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address ILI9341
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_start_row); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_end_row);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit
}


unsigned int Background_Colour;


TFT_Clear_Screen_ST7735S(unsigned char colour){

       static long int i;
       Background_Colour = 0x00 | colour;
       TFT_Write_Command_ST7735S(0x2A); //Set Column Address page 83
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(1);
       TFT_Write_Data_ST7735S(63);

       TFT_Write_Command_ST7735S(0x2B); //Set Row Address page 83
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(239);
       TFT_Write_Command_ST7735S(0x2C); //Write Memory Start

    switch (colour)  {

     case 0:     for(i=0;i<76800;i++){
                 Black_Out;
                 } break;
     case 2:     for(i=0;i<76800;i++){
                 Red_Out;
                 } break;
     case 3:     for(i=0;i<76800;i++){
                 Orange_Out;
                 } break;
     case 4:     for(i=0;i<76800;i++){
                 Yellow_Out;
                 } break;
     case 5:     for(i=0;i<76800;i++){
                 Green_Out;
                 } break;
     case 6:     for(i=0;i<76800;i++){
                 Blue_Out;
                 } break;
     case 7:     for(i=0;i<76800;i++){
                 Violet_Out;
                 } break;
     case 8:     for(i=0;i<76800;i++){
                 Gray_Out;
                 } break;
     case 9:     for(i=0;i<76800;i++){
                 White_Out;
                 } break;
     case 10:    for(i=0;i<76800;i++){
                 Magenta_Out;
                 } break;
     case 11:    for(i=0;i<76800;i++){
                 Lime_Out;
                 } break;
     case 12:    for(i=0;i<76800;i++){
                 Baby_Powder_Out;
                 } break;
     case 13:    for(i=0;i<76800;i++){
                 Cyan_Out;
                 } break;
     case 14:    for(i=0;i<76800;i++){
                 Lavenderblush_Out;
                 } break;
     case 15:    for(i=0;i<76800;i++){
                 Beige_Out;
                 } break;
     default:    for(i=0;i<76800;i++){
                 Baby_Powder_Out;
                 } break;
    }
    return Background_Colour;
}


unsigned char Pixela;
unsigned char Pixelb;
unsigned char Pixelc;
unsigned char Pixeld;

void Pixel(){
 TFT_Write_Data_ST7735S(Pixela);
 TFT_Write_Data_ST7735S(Pixelb);
}

void Space(){
 TFT_Write_Data_ST7735S(Pixelc);
 TFT_Write_Data_ST7735S(Pixeld);
}

Get_Pixel_Colour(unsigned int Set_Colour){

    unsigned int colour = 0x00 | Set_Colour;

      switch (colour)  {

     case 0:     Pixela = 0b00000000;  Pixelb = 0b00000000;
                 break;
     case 2:     Pixela = 0b11110000;  Pixelb = 0b00000000;
                 break;
     case 3:     Pixela = 0b11110011;  Pixelb = 0b10000000;
                 break;
     case 4:     pixela = 0b11111111;  Pixelb = 0b11100000;
                 break;
     case 5:     pixela = 0b00000011;  pixelb = 0b00000000;
                 break;
     case 6:     pixela = 0b00000000;  pixelb = 0b00010111;
                 break;
     case 7:     pixela = 0b11110000;  pixelb = 0b00011111;
                 break;
     case 8:     pixela = 0b00111001;  pixelb = 0b11100011;
                 break;
     case 9:     pixela = 0b11111111;  pixelb = 0b11111111;
                 break;
     case 10:    pixela = 0b11111001;  pixelb = 0b00001101;
                 break;
     case 11:    pixela = 0b01100111;  pixelb = 0b11100000;
                 break;
     case 12:    pixela = 0b11101110;  pixelb = 0b10001111;
                 break;
     case 13:    pixela = 0b00000111;  pixelb = 0b11111111;
                 break;
     case 14:    pixela = 0b11111011;  pixelb = 0b11000111;
                 break;
     case 15:    pixela = 0b10111100;  pixelb = 0b00000000;
                 break;
     default:    pixela = 0b11111111;  pixelb = 0b11111111;
                 break;
    }

      switch (Background_colour)  {

     case 0:     Pixelc = 0b00000000;  Pixeld = 0b00000000;
                 break;
     case 2:     Pixelc = 0b11110000;  Pixeld = 0b00000000;
                 break;
     case 3:     Pixelc = 0b11110011;  Pixeld = 0b10000000;
                 break;
     case 4:     pixelc = 0b11111111;  Pixeld = 0b11100000;
                 break;
     case 5:     pixelc = 0b00000011;  pixeld = 0b00000000;
                 break;
     case 6:     pixelc = 0b00000000;  pixeld = 0b00010111;
                 break;
     case 7:     pixelc = 0b11110000;  pixeld = 0b00011111;
                 break;
     case 8:     pixelc = 0b00111001;  pixeld = 0b11100011;
                 break;
     case 9:     pixelc = 0b11111111;  pixeld = 0b11111111;
                 break;
     case 10:    pixelc = 0b11111001;  pixeld = 0b00001101;
                 break;
     case 11:    pixelc = 0b01100111;  pixeld = 0b11100000;
                 break;
     case 12:    pixelc = 0b11101110;  pixeld = 0b10001111;
                 break;
     case 13:    pixelc = 0b00000111;  pixeld = 0b11111111;
                 break;
     case 14:    pixelc = 0b11111011;  pixeld = 0b11000111;
                 break;
     case 15:    pixelc = 0b10111100;  pixeld = 0b00000000;
                 break;
     default:    pixelc = Background_Colour&0xff00>>8;  pixeld = Background_Colour&0xff;
                 break;
    }

    return colour;
    return Background_Colour;

}

void Write_Number_Space(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned int y;
     static unsigned int i=1;
     static unsigned int Pixel_Colour = 0x00 | Colour;
     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (y=0; y<Number_Font_Height+1; y++){
     for(i=0;i<Number_Font_width;i++){                    //16 X 22 SPACE
     TFT_Write_Data_ST7735S(Pixelc);
     TFT_Write_Data_ST7735S(Pixeld);  }}
}


void Write_Number_Nine(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*9; jj<Number_Font_Length_Bytes*10; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 9
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Number_Eight(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*8; jj<Number_Font_Length_Bytes*9; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 8
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Seven(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*7; jj<Number_Font_Length_Bytes*8; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 7
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Six(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*6; jj<Number_Font_Length_Bytes*7; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 6
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Five(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*5; jj<Number_Font_Length_Bytes*6; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 5
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Number_Four(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*4; jj<Number_Font_Length_Bytes*5; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 4
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Number_Three(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*3; jj<Number_Font_Length_Bytes*4; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 3
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Number_Two(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*2; jj<Number_Font_Length_Bytes*3; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 2
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Number_One(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

    Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes; jj<Number_Font_Length_Bytes*2; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 1
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Zero(unsigned int X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Start; jj<Number_Font_Length_Bytes; jj++){    //JUST FOR NUMBERS 'NUMBER_FONT_START'

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number zero
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number(unsigned long num,unsigned int X_Position,unsigned int Y_Position, unsigned char Font_Colour) {

   unsigned char Font_Width;
   unsigned char  valid8=1, valid7=7, valid6=1, valid5=1, valid4=0, valid3=0; //I removed all the bits that count over 9'999'999 You can add them if you need 1 billion etc.
   unsigned int units_start;
   unsigned int tens_start;
   unsigned int hundreds_start;
   unsigned int thousands_start;
   unsigned int ten_thousands_start;
   unsigned int hundred_thousands_start;
   unsigned int million_start;
   unsigned int ten_million_start;
   unsigned int hundred_million_start;
   unsigned char done1 = 0;
   unsigned char done2 = 0;
   unsigned char done3 = 0;
   unsigned char done4 = 0;
   unsigned char done5 = 0;
   unsigned char done6 = 0;
   unsigned char done7 = 0;
   unsigned char done8 = 0;
   unsigned char Colour;
   static unsigned char numberstring[14];
   Colour = 0x00 | Font_Colour;
   Font_Width = Number_Font_Width + Number_Font_Spacing;

    if (num <=9){
        units_start = X_Position;   }

   if (num >=10 && num<=99){
       units_start = X_Position +Font_Width*1;
       tens_start= X_Position;
      }

    if (num >=100 && num<=999){
       units_start = X_Position + Font_Width *2;
       tens_start = X_Position + Font_Width*1;
       hundreds_start = X_Position;
      }

      if (num >=1000 && num<=9999){             //thousand
       units_start = X_Position +Font_Width *3;
       tens_start = X_Position + Font_Width *2;
       hundreds_start = X_Position + Font_Width*1;
       thousands_start = X_Position;
       }

       if (num >=10000 && num<=99999){            //ten thousand
       units_start = X_Position + Font_Width *4;
       tens_start = X_Position +Font_Width *3;
       hundreds_start = X_Position + Font_Width *2;
       thousands_start = X_Position + Font_Width*1;
       ten_thousands_start = X_Position;
       }

     /*if (num >=100000 && num<=999999){         //100 thousand
       units_start = X_Position + Font_Width *5;
       tens_start = X_Position + Font_Width *4;
       hundreds_start = X_Position + Font_Width *3;
       thousands_start = X_Position+ Font_Width *2;
       ten_thousands_start = X_Position + Font_Width*1;
       hundred_thousands_start = X_Position;
       }*/

    /*if (num >=1000000){       // 1 million
       units_start = X_Position+ Font_Width *6;
       tens_start = X_Position + Font_Width *5;
       hundreds_start = X_Position +Font_Width *4;
       thousands_start = X_Position+ Font_Width *3;
       ten_thousands_start = X_Position+ Font_Width *2;
       hundred_thousands_start = X_Position+ Font_Width;
       million_start = X_Position;
       }*/

      /*if (num >=10000000){       //ten million
       units_start = X_Position+ Font_Width *7;
       tens_start = X_Position + Font_Width *6;
       hundreds_start = X_Position + Font_Width *5;
       thousands_start = X_Position+ Font_Width *4;
       ten_thousands_start = X_Position+ Font_Width *3;
       hundred_thousands_start = X_Position+ Font_Width *2;
       million_start = X_Position+ Font_Width;
       ten_million_start = X_position;
       }*/


       LongWordTostr(num,numberstring);     // Converts input unsigned long integer number to a string

       if (num<10 && done1 !=1){               //Clears The Tens Position Once
       Write_Number_Space(X_Position + Font_Width,Y_Position, Colour);
       Done1 = 1;
       }

      if (num<100 && done2 !=1){             //Clears The Hundreds Position Once
        Write_Number_Space(X_Position + Font_Width *2,Y_Position, Colour);
       Done2 = 1;
       }

       if (num<1000 && done3 !=1 && valid6){             //Clears The Thousands Position Once
       Write_Number_Space(X_Position + Font_Width *3,Y_Position, Colour);
        Done3 = 1;
       }

       if (num<10000 && done4 !=1 && valid5){           //Clears The ten Thousands Position Once
        Write_Number_Space(X_Position + Font_Width *4,Y_Position, Colour);
        done4 ==1;
       }

       if (num<100000 && Done5 !=1 && valid4){        //Clears The hundred Thousands Position Once
       //Write_Number_Space(X_Position + Font_Width *5,Y_Position, Colour);
         Done5 = 1;
        }

          if (num<1000000 && Done6 !=1){     //Clears The million Position Once
     //    Write_Number_Space(X_Position + Font_Width *5,Y_Position, Colour);
        Done6 = 1;
       }



    switch (numberstring[9])  {  //units position

     case 48:    X_Position = units_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = units_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = units_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = units_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = units_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = units_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = units_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = units_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = units_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = units_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }


  if (valid8){
     switch (numberstring[8])  { //tens position

     case 48:    X_Position = tens_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = tens_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = tens_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = tens_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = tens_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = tens_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = tens_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = tens_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = tens_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = tens_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (valid7){
     switch (numberstring[7])  {   //hundreds position

     case 48:    X_Position = hundreds_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundreds_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundreds_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundreds_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundreds_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundreds_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundreds_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundreds_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundreds_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundreds_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    } }

   if (valid6){
     switch (numberstring[6])  {   //thousands position

     case 48:    X_Position = thousands_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = thousands_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = thousands_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = thousands_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = thousands_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = thousands_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = thousands_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = thousands_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = thousands_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = thousands_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (valid5){
     switch (numberstring[5])  {   //ten thousands position

     case 48:    X_Position = ten_thousands_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = ten_thousands_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = ten_thousands_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = ten_thousands_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = ten_thousands_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = ten_thousands_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = ten_thousands_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = ten_thousands_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = ten_thousands_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = ten_thousands_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

     if (valid4){
     switch (numberstring[4])  {   //hundred thousands position

     case 48:    X_Position = hundred_thousands_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundred_thousands_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundred_thousands_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundred_thousands_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundred_thousands_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundred_thousands_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundred_thousands_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundred_thousands_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundred_thousands_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundred_thousands_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

     if (valid3){
     switch (numberstring[3])  {   //1 million position

     case 48:    X_Position = million_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = million_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = million_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = million_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = million_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = million_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = million_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = million_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = million_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = million_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}
}




void Draw_Mandy(){        //THIS DRAWS A FULL 320 X 240 PIXEL PICTURE PUT YOUR OWN BITMAP ABOVE.

     static  unsigned long i;
     TFT_Write_Command_ST7735S(0x2A); //Set Column Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(1);
     TFT_Write_Data_ST7735S(0x40); //end column 320

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(240);   //240
     TFT_Write_Command_ST7735S(0x2C);  // 3 hours for this little shit
     TFT_Write_Data_ST7735S(0b00101100);    //days to figure this out!
     for(i=0;i<153600;i++){
     TFT_Write_Data_ST7735S(MandyParis320x240_bmp[i]);
     delay_us(10);
     }

}


void main(){

      //DATASHEET FOR SETTING THE ILI9341 ILITEK DISPLAY IS VERSION 1.11
      //NEARLY IDENTICAL TO THE ST7735 CONTROLLER SO I COPIED MY OWN CODE TO HERE.
      unsigned char xstring2[7];
      unsigned char xstring[7];

      unsigned char x=0;
      Set_Bus_Speeds();
      Init_MCU();

      TFT_RD = 1;
      TFT_WR = 1;
      Initialize_Display();
      TFT_Clear_Screen_ST7735S(0);

  while(1){


           Write_Number(x,149,206,9);
           x++;

  }
}