char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#BAC5D0", "#0C0E14" },
	[SchemeSel]  = { "#BAC5D0", "#C50ED2" },
	[SchemeOut]  = { "#000000", "#2395FF" },
	#if BORDER_PATCH
	[SchemeBorder] = { "#000000", "#C50ED2" },
	#endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid]  = { "#BAC5D0", "#F46665" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#2395FF", "#C50ED2" },
	[SchemeNormHighlight] = { "#2395FF", "#0C0E14" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#BAC5D0", "#333333" },
	#endif // HIGHPRIORITY_PATCH
	#if EMOJI_HIGHLIGHT_PATCH
	[SchemeHover]  = { "#BAC5D0", "#282C34" },
	[SchemeGreen]  = { "#BAC5D0", "#71F79F" },
	[SchemeRed]    = { "#BAC5D0", "#ED254E" },
	[SchemeYellow] = { "#BAC5D0", "#F9DC5C" },
	[SchemeBlue]   = { "#BAC5D0", "#7CB7FF" },
	[SchemePurple] = { "#BAC5D0", "#C74DED" },
	#endif // EMOJI_HIGHLIGHT_PATCH
};
