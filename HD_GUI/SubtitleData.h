#pragma once

//Structs
struct SubtitleNewlines
{
	int Newline1;
	int Newline2;
	int Newline3;
};

struct SubtitleThing
{
	char field_0;
	char gap1[1];
	float px;
	float py;
	int field_6;
	int field_8;
	float sx;
	float sy;
	__int16 width;
	__int16 height;
	__int16 field_12;
	__int16 field_14;
	__int16 field_16;
	__int16 field_18;
	__int16 field_1A;
	NJS_BGRA colorA;
	NJS_COLOR colorB;
	float scale;
	void *data_or_d3dtexture;
	Uint32 gbix;
	NJS_TEXLIST tlist;
	NJS_TEXNAME texname;
	int flags;
};

struct FontOffset
{
	char width; //Character width
	char offset_x; //Horizontal offset
	char offset_y; //Vertical offset
};

struct TextLine
{
	int LineLength;
	char LineString[256];
};

//Pointers
FunctionPointer(void, DoTextThing_Start, (SubtitleThing *a1), 0x40D850);
FunctionPointer(void, DoTextThing_Stop, (SubtitleThing *a1), 0x40D2A0);
DataPointer(int, RecapScreenMode, 0x3C8308C);

//Arrays
static NJS_TEXANIM SubtitleFont[] = {
{ 64, 64, 0, 0, 0, 0, 15, 15, 0, 0 },
{ 64, 64, 0, 0, 15, 0, 31, 15, 0, 0 },
{ 64, 64, 0, 0, 31, 0, 47, 15, 0, 0 },
{ 64, 64, 0, 0, 47, 0, 63, 15, 0, 0 },
{ 64, 64, 0, 0, 63, 0, 79, 15, 0, 0 },
{ 64, 64, 0, 0, 79, 0, 95, 15, 0, 0 },
{ 64, 64, 0, 0, 95, 0, 111, 15, 0, 0 },
{ 64, 64, 0, 0, 111, 0, 127, 15, 0, 0 },
{ 64, 64, 0, 0, 127, 0, 143, 15, 0, 0 },
{ 64, 64, 0, 0, 143, 0, 159, 15, 0, 0 },
{ 64, 64, 0, 0, 159, 0, 175, 15, 0, 0 },
{ 64, 64, 0, 0, 175, 0, 191, 15, 0, 0 },
{ 64, 64, 0, 0, 191, 0, 207, 15, 0, 0 },
{ 64, 64, 0, 0, 207, 0, 223, 15, 0, 0 },
{ 64, 64, 0, 0, 223, 0, 239, 15, 0, 0 },
{ 64, 64, 0, 0, 239, 0, 255, 15, 0, 0 },
{ 64, 64, 0, 0, 0, 15, 15, 31, 0, 0 },
{ 64, 64, 0, 0, 15, 15, 31, 31, 0, 0 },
{ 64, 64, 0, 0, 31, 15, 47, 31, 0, 0 },
{ 64, 64, 0, 0, 47, 15, 63, 31, 0, 0 },
{ 64, 64, 0, 0, 63, 15, 79, 31, 0, 0 },
{ 64, 64, 0, 0, 79, 15, 95, 31, 0, 0 },
{ 64, 64, 0, 0, 95, 15, 111, 31, 0, 0 },
{ 64, 64, 0, 0, 111, 15, 127, 31, 0, 0 },
{ 64, 64, 0, 0, 127, 15, 143, 31, 0, 0 },
{ 64, 64, 0, 0, 143, 15, 159, 31, 0, 0 },
{ 64, 64, 0, 0, 159, 15, 175, 31, 0, 0 },
{ 64, 64, 0, 0, 175, 15, 191, 31, 0, 0 },
{ 64, 64, 0, 0, 191, 15, 207, 31, 0, 0 },
{ 64, 64, 0, 0, 207, 15, 223, 31, 0, 0 },
{ 64, 64, 0, 0, 223, 15, 239, 31, 0, 0 },
{ 64, 64, 0, 0, 239, 15, 255, 31, 0, 0 },
{ 64, 64, 0, 0, 0, 31, 15, 47, 0, 0 },
{ 64, 64, 0, 0, 15, 31, 31, 47, 0, 0 },
{ 64, 64, 0, 0, 31, 31, 47, 47, 0, 0 },
{ 64, 64, 0, 0, 47, 31, 63, 47, 0, 0 },
{ 64, 64, 0, 0, 63, 31, 79, 47, 0, 0 },
{ 64, 64, 0, 0, 79, 31, 95, 47, 0, 0 },
{ 64, 64, 0, 0, 95, 31, 111, 47, 0, 0 },
{ 64, 64, 0, 0, 111, 31, 127, 47, 0, 0 },
{ 64, 64, 0, 0, 127, 31, 143, 47, 0, 0 },
{ 64, 64, 0, 0, 143, 31, 159, 47, 0, 0 },
{ 64, 64, 0, 0, 159, 31, 175, 47, 0, 0 },
{ 64, 64, 0, 0, 175, 31, 191, 47, 0, 0 },
{ 64, 64, 0, 0, 191, 31, 207, 47, 0, 0 },
{ 64, 64, 0, 0, 207, 31, 223, 47, 0, 0 },
{ 64, 64, 0, 0, 223, 31, 239, 47, 0, 0 },
{ 64, 64, 0, 0, 239, 31, 255, 47, 0, 0 },
{ 64, 64, 0, 0, 0, 47, 15, 63, 0, 0 },
{ 64, 64, 0, 0, 15, 47, 31, 63, 0, 0 },
{ 64, 64, 0, 0, 31, 47, 47, 63, 0, 0 },
{ 64, 64, 0, 0, 47, 47, 63, 63, 0, 0 },
{ 64, 64, 0, 0, 63, 47, 79, 63, 0, 0 },
{ 64, 64, 0, 0, 79, 47, 95, 63, 0, 0 },
{ 64, 64, 0, 0, 95, 47, 111, 63, 0, 0 },
{ 64, 64, 0, 0, 111, 47, 127, 63, 0, 0 },
{ 64, 64, 0, 0, 127, 47, 143, 63, 0, 0 },
{ 64, 64, 0, 0, 143, 47, 159, 63, 0, 0 },
{ 64, 64, 0, 0, 159, 47, 175, 63, 0, 0 },
{ 64, 64, 0, 0, 175, 47, 191, 63, 0, 0 },
{ 64, 64, 0, 0, 191, 47, 207, 63, 0, 0 },
{ 64, 64, 0, 0, 207, 47, 223, 63, 0, 0 },
{ 64, 64, 0, 0, 223, 47, 239, 63, 0, 0 },
{ 64, 64, 0, 0, 239, 47, 255, 63, 0, 0 },
{ 64, 64, 0, 0, 0, 63, 15, 79, 0, 0 },
{ 64, 64, 0, 0, 15, 63, 31, 79, 0, 0 },
{ 64, 64, 0, 0, 31, 63, 47, 79, 0, 0 },
{ 64, 64, 0, 0, 47, 63, 63, 79, 0, 0 },
{ 64, 64, 0, 0, 63, 63, 79, 79, 0, 0 },
{ 64, 64, 0, 0, 79, 63, 95, 79, 0, 0 },
{ 64, 64, 0, 0, 95, 63, 111, 79, 0, 0 },
{ 64, 64, 0, 0, 111, 63, 127, 79, 0, 0 },
{ 64, 64, 0, 0, 127, 63, 143, 79, 0, 0 },
{ 64, 64, 0, 0, 143, 63, 159, 79, 0, 0 },
{ 64, 64, 0, 0, 159, 63, 175, 79, 0, 0 },
{ 64, 64, 0, 0, 175, 63, 191, 79, 0, 0 },
{ 64, 64, 0, 0, 191, 63, 207, 79, 0, 0 },
{ 64, 64, 0, 0, 207, 63, 223, 79, 0, 0 },
{ 64, 64, 0, 0, 223, 63, 239, 79, 0, 0 },
{ 64, 64, 0, 0, 239, 63, 255, 79, 0, 0 },
{ 64, 64, 0, 0, 0, 79, 15, 95, 0, 0 },
{ 64, 64, 0, 0, 15, 79, 31, 95, 0, 0 },
{ 64, 64, 0, 0, 31, 79, 47, 95, 0, 0 },
{ 64, 64, 0, 0, 47, 79, 63, 95, 0, 0 },
{ 64, 64, 0, 0, 63, 79, 79, 95, 0, 0 },
{ 64, 64, 0, 0, 79, 79, 95, 95, 0, 0 },
{ 64, 64, 0, 0, 95, 79, 111, 95, 0, 0 },
{ 64, 64, 0, 0, 111, 79, 127, 95, 0, 0 },
{ 64, 64, 0, 0, 127, 79, 143, 95, 0, 0 },
{ 64, 64, 0, 0, 143, 79, 159, 95, 0, 0 },
{ 64, 64, 0, 0, 159, 79, 175, 95, 0, 0 },
{ 64, 64, 0, 0, 175, 79, 191, 95, 0, 0 },
{ 64, 64, 0, 0, 191, 79, 207, 95, 0, 0 },
{ 64, 64, 0, 0, 207, 79, 223, 95, 0, 0 },
{ 64, 64, 0, 0, 223, 79, 239, 95, 0, 0 },
{ 64, 64, 0, 0, 239, 79, 255, 95, 0, 0 },
{ 64, 64, 0, 0, 0, 95, 15, 111, 0, 0 },
{ 64, 64, 0, 0, 15, 95, 31, 111, 0, 0 },
{ 64, 64, 0, 0, 31, 95, 47, 111, 0, 0 },
{ 64, 64, 0, 0, 47, 95, 63, 111, 0, 0 },
{ 64, 64, 0, 0, 63, 95, 79, 111, 0, 0 },
{ 64, 64, 0, 0, 79, 95, 95, 111, 0, 0 },
{ 64, 64, 0, 0, 95, 95, 111, 111, 0, 0 },
{ 64, 64, 0, 0, 111, 95, 127, 111, 0, 0 },
{ 64, 64, 0, 0, 127, 95, 143, 111, 0, 0 },
{ 64, 64, 0, 0, 143, 95, 159, 111, 0, 0 },
{ 64, 64, 0, 0, 159, 95, 175, 111, 0, 0 },
{ 64, 64, 0, 0, 175, 95, 191, 111, 0, 0 },
{ 64, 64, 0, 0, 191, 95, 207, 111, 0, 0 },
{ 64, 64, 0, 0, 207, 95, 223, 111, 0, 0 },
{ 64, 64, 0, 0, 223, 95, 239, 111, 0, 0 },
{ 64, 64, 0, 0, 239, 95, 255, 111, 0, 0 },
{ 64, 64, 0, 0, 0, 111, 15, 127, 0, 0 },
{ 64, 64, 0, 0, 15, 111, 31, 127, 0, 0 },
{ 64, 64, 0, 0, 31, 111, 47, 127, 0, 0 },
{ 64, 64, 0, 0, 47, 111, 63, 127, 0, 0 },
{ 64, 64, 0, 0, 63, 111, 79, 127, 0, 0 },
{ 64, 64, 0, 0, 79, 111, 95, 127, 0, 0 },
{ 64, 64, 0, 0, 95, 111, 111, 127, 0, 0 },
{ 64, 64, 0, 0, 111, 111, 127, 127, 0, 0 },
{ 64, 64, 0, 0, 127, 111, 143, 127, 0, 0 },
{ 64, 64, 0, 0, 143, 111, 159, 127, 0, 0 },
{ 64, 64, 0, 0, 159, 111, 175, 127, 0, 0 },
{ 64, 64, 0, 0, 175, 111, 191, 127, 0, 0 },
{ 64, 64, 0, 0, 191, 111, 207, 127, 0, 0 },
{ 64, 64, 0, 0, 207, 111, 223, 127, 0, 0 },
{ 64, 64, 0, 0, 223, 111, 239, 127, 0, 0 },
{ 64, 64, 0, 0, 239, 111, 255, 127, 0, 0 },
{ 64, 64, 0, 0, 0, 127, 15, 143, 0, 0 },
{ 64, 64, 0, 0, 15, 127, 31, 143, 0, 0 },
{ 64, 64, 0, 0, 31, 127, 47, 143, 0, 0 },
{ 64, 64, 0, 0, 47, 127, 63, 143, 0, 0 },
{ 64, 64, 0, 0, 63, 127, 79, 143, 0, 0 },
{ 64, 64, 0, 0, 79, 127, 95, 143, 0, 0 },
{ 64, 64, 0, 0, 95, 127, 111, 143, 0, 0 },
{ 64, 64, 0, 0, 111, 127, 127, 143, 0, 0 },
{ 64, 64, 0, 0, 127, 127, 143, 143, 0, 0 },
{ 64, 64, 0, 0, 143, 127, 159, 143, 0, 0 },
{ 64, 64, 0, 0, 159, 127, 175, 143, 0, 0 },
{ 64, 64, 0, 0, 175, 127, 191, 143, 0, 0 },
{ 64, 64, 0, 0, 191, 127, 207, 143, 0, 0 },
{ 64, 64, 0, 0, 207, 127, 223, 143, 0, 0 },
{ 64, 64, 0, 0, 223, 127, 239, 143, 0, 0 },
{ 64, 64, 0, 0, 239, 127, 255, 143, 0, 0 },
{ 64, 64, 0, 0, 0, 143, 15, 159, 0, 0 },
{ 64, 64, 0, 0, 15, 143, 31, 159, 0, 0 },
{ 64, 64, 0, 0, 31, 143, 47, 159, 0, 0 },
{ 64, 64, 0, 0, 47, 143, 63, 159, 0, 0 },
{ 64, 64, 0, 0, 63, 143, 79, 159, 0, 0 },
{ 64, 64, 0, 0, 79, 143, 95, 159, 0, 0 },
{ 64, 64, 0, 0, 95, 143, 111, 159, 0, 0 },
{ 64, 64, 0, 0, 111, 143, 127, 159, 0, 0 },
{ 64, 64, 0, 0, 127, 143, 143, 159, 0, 0 },
{ 64, 64, 0, 0, 143, 143, 159, 159, 0, 0 },
{ 64, 64, 0, 0, 159, 143, 175, 159, 0, 0 },
{ 64, 64, 0, 0, 175, 143, 191, 159, 0, 0 },
{ 64, 64, 0, 0, 191, 143, 207, 159, 0, 0 },
{ 64, 64, 0, 0, 207, 143, 223, 159, 0, 0 },
{ 64, 64, 0, 0, 223, 143, 239, 159, 0, 0 },
{ 64, 64, 0, 0, 239, 143, 255, 159, 0, 0 },
{ 64, 64, 0, 0, 0, 159, 15, 175, 0, 0 },
{ 64, 64, 0, 0, 15, 159, 31, 175, 0, 0 },
{ 64, 64, 0, 0, 31, 159, 47, 175, 0, 0 },
{ 64, 64, 0, 0, 47, 159, 63, 175, 0, 0 },
{ 64, 64, 0, 0, 63, 159, 79, 175, 0, 0 },
{ 64, 64, 0, 0, 79, 159, 95, 175, 0, 0 },
{ 64, 64, 0, 0, 95, 159, 111, 175, 0, 0 },
{ 64, 64, 0, 0, 111, 159, 127, 175, 0, 0 },
{ 64, 64, 0, 0, 127, 159, 143, 175, 0, 0 },
{ 64, 64, 0, 0, 143, 159, 159, 175, 0, 0 },
{ 64, 64, 0, 0, 159, 159, 175, 175, 0, 0 },
{ 64, 64, 0, 0, 175, 159, 191, 175, 0, 0 },
{ 64, 64, 0, 0, 191, 159, 207, 175, 0, 0 },
{ 64, 64, 0, 0, 207, 159, 223, 175, 0, 0 },
{ 64, 64, 0, 0, 223, 159, 239, 175, 0, 0 },
{ 64, 64, 0, 0, 239, 159, 255, 175, 0, 0 },
{ 64, 64, 0, 0, 0, 175, 15, 191, 0, 0 },
{ 64, 64, 0, 0, 15, 175, 31, 191, 0, 0 },
{ 64, 64, 0, 0, 31, 175, 47, 191, 0, 0 },
{ 64, 64, 0, 0, 47, 175, 63, 191, 0, 0 },
{ 64, 64, 0, 0, 63, 175, 79, 191, 0, 0 },
{ 64, 64, 0, 0, 79, 175, 95, 191, 0, 0 },
{ 64, 64, 0, 0, 95, 175, 111, 191, 0, 0 },
{ 64, 64, 0, 0, 111, 175, 127, 191, 0, 0 },
{ 64, 64, 0, 0, 127, 175, 143, 191, 0, 0 },
{ 64, 64, 0, 0, 143, 175, 159, 191, 0, 0 },
{ 64, 64, 0, 0, 159, 175, 175, 191, 0, 0 },
{ 64, 64, 0, 0, 175, 175, 191, 191, 0, 0 },
{ 64, 64, 0, 0, 191, 175, 207, 191, 0, 0 },
{ 64, 64, 0, 0, 207, 175, 223, 191, 0, 0 },
{ 64, 64, 0, 0, 223, 175, 239, 191, 0, 0 },
{ 64, 64, 0, 0, 239, 175, 255, 191, 0, 0 },
{ 64, 64, 0, 0, 0, 191, 15, 207, 0, 0 },
{ 64, 64, 0, 0, 15, 191, 31, 207, 0, 0 },
{ 64, 64, 0, 0, 31, 191, 47, 207, 0, 0 },
{ 64, 64, 0, 0, 47, 191, 63, 207, 0, 0 },
{ 64, 64, 0, 0, 63, 191, 79, 207, 0, 0 },
{ 64, 64, 0, 0, 79, 191, 95, 207, 0, 0 },
{ 64, 64, 0, 0, 95, 191, 111, 207, 0, 0 },
{ 64, 64, 0, 0, 111, 191, 127, 207, 0, 0 },
{ 64, 64, 0, 0, 127, 191, 143, 207, 0, 0 },
{ 64, 64, 0, 0, 143, 191, 159, 207, 0, 0 },
{ 64, 64, 0, 0, 159, 191, 175, 207, 0, 0 },
{ 64, 64, 0, 0, 175, 191, 191, 207, 0, 0 },
{ 64, 64, 0, 0, 191, 191, 207, 207, 0, 0 },
{ 64, 64, 0, 0, 207, 191, 223, 207, 0, 0 },
{ 64, 64, 0, 0, 223, 191, 239, 207, 0, 0 },
{ 64, 64, 0, 0, 239, 191, 255, 207, 0, 0 },
{ 64, 64, 0, 0, 0, 207, 15, 223, 0, 0 },
{ 64, 64, 0, 0, 15, 207, 31, 223, 0, 0 },
{ 64, 64, 0, 0, 31, 207, 47, 223, 0, 0 },
{ 64, 64, 0, 0, 47, 207, 63, 223, 0, 0 },
{ 64, 64, 0, 0, 63, 207, 79, 223, 0, 0 },
{ 64, 64, 0, 0, 79, 207, 95, 223, 0, 0 },
{ 64, 64, 0, 0, 95, 207, 111, 223, 0, 0 },
{ 64, 64, 0, 0, 111, 207, 127, 223, 0, 0 },
{ 64, 64, 0, 0, 127, 207, 143, 223, 0, 0 },
{ 64, 64, 0, 0, 143, 207, 159, 223, 0, 0 },
{ 64, 64, 0, 0, 159, 207, 175, 223, 0, 0 },
{ 64, 64, 0, 0, 175, 207, 191, 223, 0, 0 },
{ 64, 64, 0, 0, 191, 207, 207, 223, 0, 0 },
{ 64, 64, 0, 0, 207, 207, 223, 223, 0, 0 },
{ 64, 64, 0, 0, 223, 207, 239, 223, 0, 0 },
{ 64, 64, 0, 0, 239, 207, 255, 223, 0, 0 },
{ 64, 64, 0, 0, 0, 223, 15, 239, 0, 0 },
{ 64, 64, 0, 0, 15, 223, 31, 239, 0, 0 },
{ 64, 64, 0, 0, 31, 223, 47, 239, 0, 0 },
{ 64, 64, 0, 0, 47, 223, 63, 239, 0, 0 },
{ 64, 64, 0, 0, 63, 223, 79, 239, 0, 0 },
{ 64, 64, 0, 0, 79, 223, 95, 239, 0, 0 },
{ 64, 64, 0, 0, 95, 223, 111, 239, 0, 0 },
{ 64, 64, 0, 0, 111, 223, 127, 239, 0, 0 },
{ 64, 64, 0, 0, 127, 223, 143, 239, 0, 0 },
{ 64, 64, 0, 0, 143, 223, 159, 239, 0, 0 },
{ 64, 64, 0, 0, 159, 223, 175, 239, 0, 0 },
{ 64, 64, 0, 0, 175, 223, 191, 239, 0, 0 },
{ 64, 64, 0, 0, 191, 223, 207, 239, 0, 0 },
{ 64, 64, 0, 0, 207, 223, 223, 239, 0, 0 },
{ 64, 64, 0, 0, 223, 223, 239, 239, 0, 0 },
{ 64, 64, 0, 0, 239, 223, 255, 239, 0, 0 },
{ 64, 64, 0, 0, 0, 239, 15, 255, 0, 0 },
{ 64, 64, 0, 0, 15, 239, 31, 255, 0, 0 },
{ 64, 64, 0, 0, 31, 239, 47, 255, 0, 0 },
{ 64, 64, 0, 0, 47, 239, 63, 255, 0, 0 },
{ 64, 64, 0, 0, 63, 239, 79, 255, 0, 0 },
{ 64, 64, 0, 0, 79, 239, 95, 255, 0, 0 },
{ 64, 64, 0, 0, 95, 239, 111, 255, 0, 0 },
{ 64, 64, 0, 0, 111, 239, 127, 255, 0, 0 },
{ 64, 64, 0, 0, 127, 239, 143, 255, 0, 0 },
{ 64, 64, 0, 0, 143, 239, 159, 255, 0, 0 },
{ 64, 64, 0, 0, 159, 239, 175, 255, 0, 0 },
{ 64, 64, 0, 0, 175, 239, 191, 255, 0, 0 },
{ 64, 64, 0, 0, 191, 239, 207, 255, 0, 0 },
{ 64, 64, 0, 0, 207, 239, 223, 255, 0, 0 },
{ 64, 64, 0, 0, 223, 239, 239, 255, 0, 0 },
{ 64, 64, 0, 0, 239, 239, 255, 255, 0, 0 },
};

static FontOffset FontCharacterData[] =
{
{40, 0, 0}, //Japanese ...
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{0, 0, 0},
{10, 0, 0}, //separator
{32, 0, 0}, //space
{18, 0, 0}, //!
{23, 0, 0}, //"
{42, 0, 0}, //#
{21, 0, 0}, //$
{49, 0, 0}, //%
{46, 0, 0}, //&
{10, 0, 0}, //'
{18, 0, 0}, //(
{18, 0, 0}, //)
{22, 0, 0}, //*
{36, 0, 0}, //+
{10, 0, 0}, //,
{18, 0, 0}, //-
{8, 0, 0}, //.
{26, 0, 0}, // / 
{34, 0, 0}, //0
{15, 0, 0}, //1
{36, 0, 0}, //2
{37, 0, 0}, //3
{36, 0, 0}, //4
{34, 0, 0}, //5
{34, 0, 0}, //6
{29, 0, 0}, //7
{36, 0, 0}, //8
{35, 0, 0}, //9
{12, 0, 0}, //:
{12, 0, 0}, //;
{36, 0, 0}, //<
{36, 0, 0}, //=
{36, 0, 0}, //>
{34, 0, 0}, //?
{55, 0, 0}, //@
{36, 0, 0}, //A
{33, 0, 0}, //B
{36, 0, 0}, //C
{32, 0, 0}, //D
{27, 0, 0}, //E
{29, 0, 0}, //F
{34, 0, 0}, //G
{32, 0, 0}, //H
{12, 0, 0}, //I
{22, 0, 0}, //J
{36, 0, 0}, //K
{23, 0, 0}, //L
{42, 0, 0}, //M
{31, 0, 0}, //N
{37, 0, 0}, //O
{32, 0, 0}, //P
{36, 0, 0}, //Q
{38, 0, 0}, //R
{34, 0, 0}, //S
{26, 0, 0}, //T
{33, 0, 0}, //U
{35, 0, 0}, //V
{54, 0, 0}, //W
{40, 0, 0}, //X
{38, 0, 0}, //Y
{34, 0, 0}, //Z
{18, 0, 0}, //[
{27, 0, 0}, //yen
{18, 0, 0}, //]
{36, 0, 0}, //^
{30, 0, 0}, //_
{15, 0, 0}, //`
{28, -2, 0}, //a
{30, 0, 0}, //b
{28, 0, 0}, //c
{28, 0, 0}, //d
{26, -2, 0}, //e
{25, 0, 0}, //f
{28, 0, 0}, //g
{30, 0, 0}, //h
{11, 0, 0}, //i
{19, 0, 0}, //j
{29, 0, 0}, //k
{8, 4, 0}, //l
{42, 0, 0}, //m
{26, 0, 0}, //n
{28, 0, 0}, //o
{27, 0, 0}, //p
{27, 0, 0}, //q
{16, -2, 0}, //r
{28, 0, 0}, //s
{19, 0, 0}, //t
{28, 0, 0}, //u
{32, 4, 0}, //v
{41, 0, 0}, //w
{30, 0, 0}, //x
{31, 0, 0}, //y
{25, 0, 0}, //z
{22, 0, 0}, //{
{6, 0, 0}, //|
{22, 0, 0}, //}
{40, 0, 0}, //~
{11, 0, 0}, //dot in the middle
//European letters from here
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0},
{32, 0, 0}
};

static TextLine TextLineArray[256];

//Misc
NJS_TEXNAME SubtitleTexname[1];
NJS_TEXLIST SubtitleTexlist = { arrayptrandlength(SubtitleTexname) };

PVMEntry SubtitlePVMEntry = { "SUBTITLE", (TexList *)&SubtitleTexlist };