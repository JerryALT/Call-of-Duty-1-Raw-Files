
	#define RECT_COMPASS	0 0 COMPASS_SIZE_MP COMPASS_SIZE_MP HORIZONTAL_ALIGN_LEFT VERTICAL_ALIGN_TOP
	#undef MINIMAP_ORIGIN
	#define MINIMAP_ORIGIN 	6 6 //2 2
	
	
	// Compass
	menuDef
	{
		name			"Compass_old"
 	   	rect			RECT_COMPASS
 	   	fullScreen		0
		visible 		when ( (dvarint( compass_minimap ) == 1 );
 
		itemDef
		{
			name			"minimapBG"
			rect			(MINIMAP_X_MP - 14) (MINIMAP_Y_MP - 6) COMPASS_SIZE_MP COMPASS_SIZE_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			background		"minimap_background"
			ownerdraw		CG_PLAYER_COMPASS_BACK
			visible 1
			decoration
		}
		itemDef
        {
            name			"minimapTickerBorder"
            rect			MINIMAP_X_MP (MINIMAP_Y_MP - 15) MINIMAP_W_MP 14
	 	   	origin 			MINIMAP_ORIGIN
            forecolor		1 1 1 1
            background		"minimap_tickertape_background"
            ownerdraw		CG_PLAYER_COMPASS_BACK
			visible 1
			decoration
        }
		itemDef
        {
            name			"minimapTicker"
            rect			MINIMAP_X_MP (MINIMAP_Y_MP - 12) MINIMAP_W_MP 9
	 	   	origin 			MINIMAP_ORIGIN
            forecolor		1 1 1 1
            background		"minimap_tickertape_mp"
            ownerdraw		CG_PLAYER_COMPASS_TICKERTAPE_NO_OBJ
			visible 1
			decoration
        }
		itemDef
 	   	{
			name			"mini_map"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			background		"compass_map_default"
			ownerdraw		CG_PLAYER_COMPASS_MAP
			visible 1
			decoration
 	   	}     
		// Objective pointers
		itemDef
		{
			name			"compasspointers"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			background		"objective_line"
			ownerdraw		CG_PLAYER_COMPASS_POINTERS
			visible when ( !selecting_location() && dvarint( ui_hud_showobjicons ) > 0 );
			decoration
		}
 	   	// Friendlies pointers
		itemDef
		{
			name			"compassfriendlies"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			ownerdraw		CG_PLAYER_COMPASS_FRIENDS
			visible 1
		}
		// Enemy pings
		itemDef
		{
			name			"compassenemies"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			ownerdraw		CG_PLAYER_COMPASS_ENEMIES
			visible 1
		}
 	   	// Helicopter pointers
		itemDef
		{
			name			"compasshelicopters"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			ownerdraw		CG_PLAYER_COMPASS_HELICOPTERS
			visible 1
		}
 	   	// Plane pointers
		itemDef
		{
			name			"compassplanes"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1
			ownerdraw		CG_PLAYER_COMPASS_PLANES
			visible 1
		}
		// Player direction indicator
		itemDef
		{
			name			"compassplayer"
			rect			MINIMAP_X_MP MINIMAP_Y_MP MINIMAP_W_MP MINIMAP_H_MP
	 	   	origin 			MINIMAP_ORIGIN
			forecolor		1 1 1 1//HUD_FOREGROUND_ALPHA
			background		"compassping_player"
			ownerdraw		CG_PLAYER_COMPASS_PLAYER
			visible 1
		}
	}