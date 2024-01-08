char *colors[][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cdd6f4", "#1e1e2e" },
	[SchemeSel] = { "#1e1e2e", "#74c7ec" },
	[SchemeOut] = { "#000000", "#74c7ec" },
	#if BORDER_PATCH
	[SchemeBorder] = { "#000000", "#74c7ec" },
	#endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid]  = { "#FFFFFF", "#fab387" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#74c7ec", "#1e1e2e" },
	[SchemeNormHighlight] = { "#74c7ec", "#2F343F" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#BAC5D0", "#333333" },
	#endif // HIGHPRIORITY_PATCH
	#if EMOJI_HIGHLIGHT_PATCH
	[SchemeHover]  = { "#FFFFFF", "#1e1e2e" },
	[SchemeGreen]  = { "#FFFFFF", "#a6e3a1" },
	[SchemeRed]    = { "#FFFFFF", "#f38ba8" },
	[SchemeYellow] = { "#FFFFFF", "#f9e2af" },
	[SchemeBlue]   = { "#FFFFFF", "#89b4fa" },
	[SchemePurple] = { "#FFFFFF", "#cba6f7" },
	#endif // EMOJI_HIGHLIGHT_PATCH
};
