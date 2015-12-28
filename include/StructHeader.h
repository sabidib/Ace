/* * Ace - A c++ networking library
 * Copyright (C) 2012, 2016 Samy Abidib
 *
 * This file is part of Ace.
 *
 * Ace is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ace is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Ace.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef H_STRUCT_HEADER_H
#define H_STRUCT_HEADER_H


struct RGBQUAD{
	char R,G,B,A;
};


namespace Application{



enum EMAILPROP{
		FLAGGED = 1, 	///1
		READ ,			///2
		FLAGGEDANDREAD, ///3
		UNREAD,			///4
		FLAGGEDANDUNREAD,///5
		ANSWERED,		///6
		READANDANSWERED = 8, ///8
		FLAGGEDANDREADANDANSWERED, ///9
		DRAFT,			///10
		FLAGGEDANDDRAFT, ///11
		DELETED,		///12
		FLAGGEDANDDDELETED,	///13
		READANDDELETED,		///14
		FLAGGEDANDREADANDDELETED,///15
		UNREADANDDELETED, ///16
		FLAGGEDANDUNREADANDDELETED, ///17
		READANDANSWEREDANDDELETED = 20,	///20
		FLAGGEDANDREADANDANSWEREDANDDELETED,///21
		DRAFTANDDELETED,		///22
		FLAGGEDANDDRAGEADNDELETED, ///23
		RECENT			///24
};




}


#endif
