#define SLEEPMSEC		0x1000
#define ENDDEF			0x2000
#define DATAMASK		0x0100
#define	DEFMASK			0xFF00

const unsigned short LG4573_SEQ_SETTING_TYPE_3[] = {
// 20111230
	0xC1,	 // Stand-by off
	0x100,

	0x11,   // Exit Sleep Mode

	0x36,
	0x100,

	0x3A,  
	0x170,  //24 bit interface

	0xB1,  //RGB interface setting
	0x110,  //VSYNC+HSYNC Rising edge HSYNC - active high VSYNC-active high DE-active high
	0x111,  // HBP -- 11, 10, 11, 13, 18, 1A, 14 Inc : L, Dec : R
	0x102,  // VBP -  3, 5, 7, 1C, 10, 0C  Inc : U, Dec : D


	0xB2,
	0x110,  //HYDYS panel, 480pexel
	0x1C8,  //800 pixels

	0xB3,
	0x100, // 0x01 : 1-Dot Inversion, 0x00 : Column Inversion

	0xB4,
	0x104,

	0xB5,
	0x105, // 5, 10, FF
	0x110,
	0x110,
	0x100,
	0x100,

	0xB6,
	0x101,  // overlaping
	0x101,
	0x102,
	0x140,
	0x102,
	0x100,

//Power controll
	0xC0,
	0x100,
	0x11F,

	0xC2,
	0x100,

	0xC3,	//Second Version LG4573
	0x103,
	0x104,
	0x105,	//0x103,	
	0x106,	//0x103,
	0x101,	//0x103,

	0xC4,
	0x102,
	0x123,
	0x116,	//0x10E,
	0x116,	//0x10E,
	0x102,
	0x17A,

	0xC5,
	0x177,	//0x174,

	0xC6,
	0x124,
	0x160,
	0x100,

//Gamma controll
	0xD0,  	// Gama Set_1
	0x100,	//0x142,
	0x101,	//0x113,
	0x166,	//0x141,
	0x126,	//0x116,
	0x100,	//0x107,
	0x100,	//0x103,
	0x166,	//0x161,
	0x131,	//0x116,
	0x103,	//0x103,

	0xD1,  // Gama Set_2
	0x100,	//0x142,
	0x101,	//0x113,
	0x166,	//0x141,
	0x126,	//0x116,
	0x100,	//0x107,
	0x100,	//0x103,
	0x166,	//0x161,
	0x131,	//0x116,
	0x103,	//0x103,

	0xD2,  // Gama Set_1
	0x100,	//0x142,
	0x101,	//0x113,
	0x166,	//0x141,
	0x126,	//0x116,
	0x100,	//0x107,
	0x100,	//0x103,
	0x166,	//0x161,
	0x131,	//0x116,
	0x103,	//0x103,

	0xD3,  // Gama Set_2
	0x100,	//0x142,
	0x101,	//0x113,
	0x166,	//0x141,
	0x126,	//0x116,
	0x100,	//0x107,
	0x100,	//0x103,
	0x166,	//0x161,
	0x131,	//0x116,
	0x103,	//0x103,

	0xD4,  // Gama Set_1
	0x100,	//0x142,
	0x101,	//0x113,
	0x166,	//0x141,
	0x126,	//0x116,
	0x100,	//0x107,
	0x100,	//0x103,
	0x166,	//0x161,
	0x131,	//0x116,
	0x103,	//0x103,

	0xD5,  // Gama Set_2
	0x100,	//0x142,
	0x101,	//0x113,
	0x166,	//0x141,
	0x126,	//0x116,
	0x100,	//0x107,
	0x100,	//0x103,
	0x166,	//0x161,
	0x131,	//0x116,
	0x103,	//0x103,
	
//	SLEEPMSEC, 100,

//	0x029, //Disp ON

       	ENDDEF, 0x0000 
};

const unsigned short LG4573_SEQ_SETTING_TYPE_0[] = {
// 20111230
	0xC1,	 // Stand-by off
	0x100,

	0x11,   // Exit Sleep Mode

	0x36,
	0x100,

	0x3A,  
	0x170,  //24 bit interface

	0xB1,  //RGB interface setting
	0x110,  //VSYNC+HSYNC Rising edge HSYNC - active high VSYNC-active high DE-active high
	0x111,  // HBP -- 11, 10, 11, 13, 18, 1A, 14 Inc : L, Dec : R
	0x102,  // VBP -  3, 5, 7, 1C, 10, 0C  Inc : U, Dec : D


	0xB2,
	0x110,  //HYDYS panel, 480pexel
	0x1C8,  //800 pixels

	0xB3,
	0x100, // 0x01 : 1-Dot Inversion, 0x00 : Column Inversion

	0xB4,
	0x104,

	0xB5,
	0x105, // 5, 10, FF
	0x110,
	0x110,
	0x100,
	0x100,

	0xB6,
	0x101,  // overlaping
	0x101,
	0x102,
	0x140,
	0x102,
	0x100,

//Power controll
	0xC0,
	0x100,
	0x11F,

	0xC2,
	0x100,

	0xC3,	
	0x103,
	0x104,
	0x103,	
	0x103,
	0x103,

	0xC4,
	0x102,
	0x123,
	0x10E,
	0x10E,
	0x102,
	0x17A,

	0xC5,
	0x174,

	0xC6,
	0x124,
	0x160,
	0x100,

//Gamma controll
	0xD0,  	// Gama Set_1
	0x142,
	0x113,
	0x141,
	0x116,
	0x107,
	0x103,
	0x161,
	0x116,
	0x103,

	0xD1,  	// Gama Set_1
	0x142,
	0x113,
	0x141,
	0x116,
	0x107,
	0x103,
	0x161,
	0x116,
	0x103,

	0xD2,  	// Gama Set_1
	0x142,
	0x113,
	0x141,
	0x116,
	0x107,
	0x103,
	0x161,
	0x116,
	0x103,

	0xD3,  	// Gama Set_1
	0x142,
	0x113,
	0x141,
	0x116,
	0x107,
	0x103,
	0x161,
	0x116,
	0x103,

	0xD4,  	// Gama Set_1
	0x142,
	0x113,
	0x141,
	0x116,
	0x107,
	0x103,
	0x161,
	0x116,
	0x103,

	0xD5,  	// Gama Set_1
	0x142,
	0x113,
	0x141,
	0x116,
	0x107,
	0x103,
	0x161,
	0x116,
	0x103,
            	
//	SLEEPMSEC, 100,

//	0x029, //Disp ON

       	ENDDEF, 0x0000 
};


const unsigned short brightness_setting_table[] = {
	0x51, 0x17f,
	ENDDEF, 0x0000                                
};


const unsigned short LG4573_SEQ_SLEEP_OFF[] = {
	0x11, 
	SLEEPMSEC, 200,
	0x29,
	SLEEPMSEC, 200,
	ENDDEF, 0x0000
};

const unsigned short LG4573_SEQ_SLEEP_ON[] = {
	0x10,            
	SLEEPMSEC, 200,
	0x28, 
	SLEEPMSEC, 200,
        ENDDEF, 0x0000
};

