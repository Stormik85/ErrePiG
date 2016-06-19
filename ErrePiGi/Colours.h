#pragma once

#include <iosfwd>
#include <windows.h>

//namespace colours
//{
#ifndef COLOURS_H
#define COLOURS_H
	enum consoleColours
	{
		black = 0,
		dark_blue = 1,
		dark_green = 2,
		dark_aqua, dark_cyan = 3,
		dark_red = 4,
		dark_purple = 5, dark_pink = 5, dark_magenta = 5,
		dark_yellow = 6,
		dark_white = 7,
		gray = 8,
		blue = 9,
		green = 10,
		aqua = 11, cyan = 11,
		red = 12,
		purple = 13, pink = 13, magenta = 13,
		yellow = 14,
		white = 15
	};
#endif // !COLOURS_H

	HANDLE std_con_out;			//standard output handle
	bool colorProtect = false;	//if colorProtect is true, background and text color will never be the same
	/**
	*textcol - current text color
	*backcol - current back color
	*deftextcol - original text color
	*defbackcol - original back color
	*/
	consoleColours textcol, backcol, deftextcol, defbackcol;

	inline void update_colours()
	{
		CONSOLE_SCREEN_BUFFER_INFO	csbi;
		GetConsoleScreenBufferInfo(std_con_out, &csbi);
		textcol = consoleColours(csbi.wAttributes & 15);
		backcol = consoleColours((csbi.wAttributes & 0xf0) >> 4);
	}

	inline void setColor(consoleColours textColor, consoleColours backColor)
	{
		if (colorProtect && textColor == backColor) return;
		textcol = textColor; backcol = backColor;
		unsigned short wAttributes = ((unsigned int)backcol << 4) | (unsigned int)textcol;
		SetConsoleTextAttribute(std_con_out, wAttributes);
	}

	inline void setTextColor(consoleColours textColor)
	{
		if (colorProtect && textColor == backcol) return;
		textcol = textColor;
		unsigned short wAttributes = ((unsigned int)backcol << 4 | (unsigned int)textcol);
		SetConsoleTextAttribute(std_con_out, wAttributes);
	}

	inline void setBackColor(consoleColours backColor)
	{
		if (colorProtect && backColor == textcol) return;
		backcol = backColor;
		unsigned short wAttributes = ((unsigned int)backcol << 4 | (unsigned int)textcol);
		SetConsoleTextAttribute(std_con_out, wAttributes);
	}

	inline void consoleColoursInit()
	{
		std_con_out = GetStdHandle(STD_OUTPUT_HANDLE);
		update_colours();
		deftextcol = textcol; defbackcol = backcol;
	}

	template<class elem, class traits>
	inline std::basic_ostream<elem, traits>& operator<<(std::basic_ostream<elem, traits>& os, consoleColours col)
	{
		os.flush(); setTextColor(col); return os;
	}

	template<class elem, class traits>
	inline std::basic_istream<elem, traits>& operator >> (std::basic_istream<elem, traits>& is, consoleColours col)
	{
		std::basic_ostream<elem, traits>* p = is.tie();
		if (p != NULL) p->flush();
		setTextColor(col);
		return is;
	}
//} // end of namespace colours