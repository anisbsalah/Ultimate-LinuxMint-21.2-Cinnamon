char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeSel]  = { "#f8f8f2", "#6272a4" },
	[SchemeOut]  = { "#000000", "#00C1E4" },
	#if BORDER_PATCH
	[SchemeBorder] = { "#000000", "#6272a4" },
	#endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid]  = { "#f8f8f2", "#E14245" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#F6AB32", "#6272a4" },
	[SchemeNormHighlight] = { "#F6AB32", "#282a36" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#f8f8f2", "#333333" },
	#endif // HIGHPRIORITY_PATCH
	#if EMOJI_HIGHLIGHT_PATCH
	[SchemeHover]  = { "#f8f8f2", "#282C34" },
	[SchemeGreen]  = { "#f8f8f2", "#71F79F" },
	[SchemeRed]    = { "#f8f8f2", "#ED254E" },
	[SchemeYellow] = { "#f8f8f2", "#F9DC5C" },
	[SchemeBlue]   = { "#f8f8f2", "#7CB7FF" },
	[SchemePurple] = { "#f8f8f2", "#C74DED" },
	#endif // EMOJI_HIGHLIGHT_PATCH
};