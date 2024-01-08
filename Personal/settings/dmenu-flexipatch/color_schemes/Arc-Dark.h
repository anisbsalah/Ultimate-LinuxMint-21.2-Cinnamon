char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#BAC5D0", "#2F343F" },
	[SchemeSel]  = { "#FFFFFF", "#5294E2" },
	[SchemeOut]  = { "#000000", "#729FCF" },
	#if BORDER_PATCH
	[SchemeBorder] = { "#000000", "#5294E2" },
	#endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid]  = { "#FFFFFF", "#E14245" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#F6AB32", "#5294E2" },
	[SchemeNormHighlight] = { "#F6AB32", "#2F343F" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#BAC5D0", "#333333" },
	#endif // HIGHPRIORITY_PATCH
	#if EMOJI_HIGHLIGHT_PATCH
	[SchemeHover]  = { "#FFFFFF", "#383C4A" },
	[SchemeGreen]  = { "#FFFFFF", "#5CA75B" },
	[SchemeRed]    = { "#FFFFFF", "#E16F7E" },
	[SchemeYellow] = { "#FFFFFF", "#FDC35F" },
	[SchemeBlue]   = { "#FFFFFF", "#8CA9BF" },
	[SchemePurple] = { "#FFFFFF", "#A660C3" },
	#endif // EMOJI_HIGHLIGHT_PATCH
};