char *colors[][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c6d0f5", "#303446" },
	[SchemeSel] = { "#303446", "#85c1dc" },
	[SchemeOut] = { "#000000", "#85c1dc" },
	#if BORDER_PATCH
	[SchemeBorder] = { "#000000", "#85c1dc" },
	#endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid]  = { "#FFFFFF", "#ef9f76" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#85c1dc", "#303446" },
	[SchemeNormHighlight] = { "#85c1dc", "#2F343F" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#BAC5D0", "#333333" },
	#endif // HIGHPRIORITY_PATCH
	#if EMOJI_HIGHLIGHT_PATCH
	[SchemeHover]  = { "#FFFFFF", "#303446" },
	[SchemeGreen]  = { "#FFFFFF", "#a6d189" },
	[SchemeRed]    = { "#FFFFFF", "#e78284" },
	[SchemeYellow] = { "#FFFFFF", "#e5c890" },
	[SchemeBlue]   = { "#FFFFFF", "#8caaee" },
	[SchemePurple] = { "#FFFFFF", "#ca9ee6" },
	#endif // EMOJI_HIGHLIGHT_PATCH
};
