char *colors[][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cad3f5", "#24273a" },
	[SchemeSel] = { "#181926", "#7dc4e4" },
	[SchemeOut] = { "#000000", "#7dc4e4" },
	#if BORDER_PATCH
	[SchemeBorder] = { "#000000", "#7dc4e4" },
	#endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid]  = { "#FFFFFF", "#f5a97f" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#7dc4e4", "#181926" },
	[SchemeNormHighlight] = { "#7dc4e4", "#2F343F" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#BAC5D0", "#333333" },
	#endif // HIGHPRIORITY_PATCH
	#if EMOJI_HIGHLIGHT_PATCH
	[SchemeHover]  = { "#FFFFFF", "#24273a" },
	[SchemeGreen]  = { "#FFFFFF", "#a6da95" },
	[SchemeRed]    = { "#FFFFFF", "#ed8796" },
	[SchemeYellow] = { "#FFFFFF", "#eed49f" },
	[SchemeBlue]   = { "#FFFFFF", "#8aadf4" },
	[SchemePurple] = { "#FFFFFF", "#c6a0f6" },
	#endif // EMOJI_HIGHLIGHT_PATCH
};
