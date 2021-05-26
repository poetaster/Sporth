SPORTH_UGEN("*", sporth_mul, SPORTH_MUL, 2, 1)
SPORTH_UGEN("+", sporth_add, SPORTH_ADD, 2, 1)
SPORTH_UGEN("-", sporth_sub, SPORTH_SUB, 2, 1)
SPORTH_UGEN("/", sporth_divide, SPORTH_DIV, 2, 1)
SPORTH_UGEN("[", sporth_markleft, SPORTH_MARKLEFT, 0, 0)
SPORTH_UGEN("]", sporth_markright, SPORTH_MARKRIGHT, 0, 0)
SPORTH_UGEN("&", sporth_and, SPORTH_AND, 2, 1)
SPORTH_UGEN("|", sporth_or, SPORTH_OR, 2, 1)
SPORTH_UGEN("^", sporth_xor, SPORTH_XOR, 2, 1)
SPORTH_UGEN("<<", sporth_leftshift, SPORTH_LEFTSHIFT, 2, 1)
SPORTH_UGEN(">>", sporth_rightshift, SPORTH_RIGHTSHIFT, 2, 1)
SPORTH_UGEN("%", sporth_mod, SPORTH_MOD, 2, 1)
SPORTH_UGEN("abs", sporth_abs, SPORTH_ABS, 2, 1)
SPORTH_UGEN("adsr", sporth_adsr, SPORTH_ADSR, 5, 1)
/* SPORTH_UGEN("allpass", sporth_allpass, SPORTH_ALLPASS, 3, 1) */
/* SPORTH_UGEN("atone", sporth_atone, SPORTH_ATONE, 2, 1) */
SPORTH_UGEN("autowah", sporth_autowah, SPORTH_AUTOWAH, 4, 1)
SPORTH_UGEN("add", sporth_add, SPORTH_ADDv2, 2, 1)
SPORTH_UGEN("ampdb", sporth_ampdb, SPORTH_AMPDB, 1, 1)
/* SPORTH_UGEN("bal", sporth_bal, SPORTH_BAL, 2, 1) */
SPORTH_UGEN("biscale", sporth_biscale, SPORTH_BISCALE, 3, 1)
SPORTH_UGEN("bitcrush", sporth_bitcrush, SPORTH_BITCRUSH, 3, 1)
SPORTH_UGEN("blsaw", sporth_blsaw, SPORTH_BLSAW, 2, 1)
SPORTH_UGEN("blsquare", sporth_blsquare, SPORTH_BLSQUARE, 3, 1)
SPORTH_UGEN("bltriangle", sporth_bltriangle, SPORTH_BLTRIANGLE, 2, 1)
SPORTH_UGEN("bpm2dur", sporth_bpm2dur, SPORTH_BPM2DUR, 1, 1)
SPORTH_UGEN("bpm2rate", sporth_bpm2rate, SPORTH_BPM2RATE, 1, 1)
SPORTH_UGEN("branch", sporth_branch, SPORTH_BRANCH, 3, 1)
SPORTH_UGEN("brown", sporth_brown, SPORTH_BROWN, 0, 1)
SPORTH_UGEN("butbp", sporth_butbp, SPORTH_BUTBP, 3, 1)
SPORTH_UGEN("butbr", sporth_butbr, SPORTH_BUTBR, 3, 1)
SPORTH_UGEN("buthp", sporth_buthp, SPORTH_BUTHP, 2, 1)
SPORTH_UGEN("butlp", sporth_butlp, SPORTH_BUTLP, 2, 1)
SPORTH_UGEN("cdb", sporth_cdb, SPORTH_CDB, 2, 1)
SPORTH_UGEN("cdbload", sporth_cdbload, SPORTH_CDBLOAD, 2, 1)
SPORTH_UGEN("cdbtab", sporth_cdbtab, SPORTH_CDBTAB, 3, 0)
SPORTH_UGEN("cf", sporth_crossfade, SPORTH_CF, 3, 1)
SPORTH_UGEN("changed", sporth_changed, SPORTH_CHANGED, 1, 1)
/* SPORTH_UGEN("clip", sporth_clip, SPORTH_CLIP, 2, 1) */
SPORTH_UGEN("clock", sporth_clock, SPORTH_CLOCK, 3, 1)
/* SPORTH_UGEN("comb", sporth_comb, SPORTH_COMB, 3, 1) */
/* SPORTH_UGEN("conv", sporth_conv, SPORTH_CONV, 3, 1) */
SPORTH_UGEN("count", sporth_count, SPORTH_COUNT, 3, 1)
SPORTH_UGEN("crossfade", sporth_crossfade, SPORTH_CROSSFADE, 3, 1)
SPORTH_UGEN("dcblk", sporth_dcblock, SPORTH_DCBLK, 1, 1)
SPORTH_UGEN("delay", sporth_delay, SPORTH_DELAY, 3, 1)
SPORTH_UGEN("diode", sporth_diode, SPORTH_DIODE, 3, 1)
/* SPORTH_UGEN("diskin", sporth_diskin, SPORTH_DISKIN, 1, 1) */
/* SPORTH_UGEN("dist", sporth_dist, SPORTH_DIST, 5, 1) */
SPORTH_UGEN("div", sporth_divide, SPORTH_DIVv2, 2, 1)
SPORTH_UGEN("dmetro", sporth_dmetro, SPORTH_DMETRO, 1, 1)
/* SPORTH_UGEN("drip", sporth_drip, SPORTH_DRIP, 9, 1) */
SPORTH_UGEN("drop", sporth_drop, SPORTH_DROP, 1, 0)
SPORTH_UGEN("dtrig", sporth_dtrig, SPORTH_DTRIG, 5, 1)
SPORTH_UGEN("dup", sporth_dup, SPORTH_DUP, 1, 2)
SPORTH_UGEN("dup2", sporth_dup2, SPORTH_DUP2, 2, 4)
SPORTH_UGEN("dur", sporth_dur, SPORTH_DUR, 0, 1)
SPORTH_UGEN("durs", sporth_durs, SPORTH_DURS, 0, 1)
/* SPORTH_UGEN("dust", sporth_dust, SPORTH_DUST, 3, 1) */
SPORTH_UGEN("edo", sporth_edo, SPORTH_EDO, 2, 1)
SPORTH_UGEN("eq", sporth_eq, SPORTH_EQ, 2, 1)
SPORTH_UGEN("eqfil", sporth_eqfil, SPORTH_EQFIL, 4, 1)
SPORTH_UGEN("eval", sporth_eval, SPORTH_EVAL, 1, 0)
SPORTH_UGEN("expon", sporth_expon, SPORTH_EXPON, 4, 1)
SPORTH_UGEN("f", sporth_fexec, SPORTH_F, 1, 0)
SPORTH_UGEN("fl", sporth_fload, SPORTH_FLOAD, 2, 0)
SPORTH_UGEN("fli", sporth_floadi, SPORTH_FLOADI, 3, 0)
SPORTH_UGEN("fc", sporth_fclose, SPORTH_FCLOSE, 1, 0)
SPORTH_UGEN("fe", sporth_fexec, SPORTH_FEXEC, 1, 0)
SPORTH_UGEN("floor", sporth_floor, SPORTH_FLOOR, 1, 1)
SPORTH_UGEN("fm", sporth_fm, SPORTH_FM, 5, 1)
/* SPORTH_UGEN("fof", sporth_fof, SPORTH_FOF, 12, 1) */
/* SPORTH_UGEN("fofilt", sporth_fofilt, SPORTH_FOFILT, 4, 1) */
/* SPORTH_UGEN("fog", sporth_fog, SPORTH_FOG, 13, 1) */
SPORTH_UGEN("fosc", sporth_fosc, SPORTH_FOSC, 6, 1)
SPORTH_UGEN("frac", sporth_frac, SPORTH_FRAC, 1, 1)
SPORTH_UGEN("ftsum", sporth_ftsum, SPORTH_FTSUM, 3, 1)
/* SPORTH_UGEN("gbuzz", sporth_gbuzz, SPORTH_GBUZZ, 7, 1) */
SPORTH_UGEN("gen_eval", sporth_gen_eval, SPORTH_GEN_EVAL, 3, 0)
/* SPORTH_UGEN("gen_line", sporth_gen_line, SPORTH_GEN_LINE, 3, 0) */
SPORTH_UGEN("gen_padsynth", sporth_gen_padsynth, SPORTH_GEN_PADSYNTH, 5, 0)
SPORTH_UGEN("gen_sine", sporth_gen_sine, SPORTH_GEN_SINE, 2, 0)
/* SPORTH_UGEN("gen_rand", sporth_gen_rand, SPORTH_GEN_RAND, 3, 0) */
/* SPORTH_UGEN("gen_composite", sporth_gen_composite, SPORTH_GEN_COMPOSITE, 3, 0) */
/* SPORTH_UGEN("gen_sinesum", sporth_gen_sinesum, SPORTH_GEN_SINESUM, 3, 0) */
SPORTH_UGEN("gen_sporth", sporth_gen_sporth, SPORTH_GEN_SPORTH, 3, 0)
SPORTH_UGEN("gen_vals", sporth_gen_vals, SPORTH_GEN_VALS, 2, 0)
SPORTH_UGEN("get", sporth_get, SPORTH_GET, 1, 1)
SPORTH_UGEN("gt", sporth_gt, SPORTH_GT, 2, 1)
/* SPORTH_UGEN("hilbert", sporth_hilbert, SPORTH_HILBERT, 1, 2) */
SPORTH_UGEN("in", sporth_in, SPORTH_IN, 0, 1)
SPORTH_UGEN("incr", sporth_incr, SPORTH_INCR, 4, 1)
SPORTH_UGEN("inv", sporth_inv, SPORTH_INV, 1, 1)
SPORTH_UGEN("jcrev", sporth_jcrev, SPORTH_JCREV, 1, 1)
/* SPORTH_UGEN("jitter", sporth_jitter, SPORTH_JITTER, 3, 1) */
SPORTH_UGEN("limit", sporth_limit, SPORTH_LIMIT, 3, 1)
SPORTH_UGEN("line", sporth_line, SPORTH_LINE, 4, 1)
SPORTH_UGEN("load", sporth_load, SPORTH_LOAD, 1, 0)
SPORTH_UGEN("loadwav", sporth_loadwav, SPORTH_LOADWAV, 2, 0)
SPORTH_UGEN("sdelay", sporth_sdelay, SPORTH_SDELAY, 2, 1)
SPORTH_UGEN("slice", sporth_slice, SPORTH_SLICE, 4, 1)
SPORTH_UGEN("slist", sporth_slist, SPORTH_SLIST, 2, 0)
SPORTH_UGEN("sqrt", sporth_sqrt, SPORTH_SQRT, 1, 0)
/* SPORTH_UGEN("loadfile", sporth_loadfile, SPORTH_LOADFILE, 2, 0) */
SPORTH_UGEN("loadspa", sporth_loadspa, SPORTH_LOADSPA, 2, 0)
SPORTH_UGEN("log", sporth_log, SPORTH_LOG, 1, 1)
SPORTH_UGEN("log10", sporth_log10, SPORTH_LOG10, 1, 1)
SPORTH_UGEN("lpc", sporth_lpc, SPORTH_LPC, 2, 1)
SPORTH_UGEN("lpcsynth", sporth_lpcsynth, SPORTH_LPCSYNTH, 2, 1)
/* SPORTH_UGEN("lpf18", sporth_lpf18, SPORTH_LPF18, 4, 1) */
SPORTH_UGEN("lsys", sporth_lsys, SPORTH_LSYS, 3, 1)
SPORTH_UGEN("lt", sporth_lt, SPORTH_LT, 2, 1)
SPORTH_UGEN("max", sporth_max, SPORTH_MAX, 2, 1)
SPORTH_UGEN("maygate", sporth_maygate, SPORTH_MAYGATE, 2, 1)
SPORTH_UGEN("maytrig", sporth_maytrig, SPORTH_MAYTRIG, 2, 1)
SPORTH_UGEN("metro", sporth_metro, SPORTH_METRO, 1, 1)
/* SPORTH_UGEN("mincer", sporth_mincer, SPORTH_MINCER, 5, 1) */
SPORTH_UGEN("min", sporth_min, SPORTH_MIN, 2, 1)
SPORTH_UGEN("mix", sporth_mix, SPORTH_MIX, 2, 1)
SPORTH_UGEN("mode", sporth_mode, SPORTH_MODE, 3, 1)
/* SPORTH_UGEN("moogladder", sporth_moogladder, SPORTH_MOOGLADDER, 3, 1) */
SPORTH_UGEN("mtof", sporth_mtof, SPORTH_MTOF, 1, 1)
SPORTH_UGEN("mul", sporth_mul, SPORTH_MULv2, 2, 1)
SPORTH_UGEN("ne", sporth_ne, SPORTH_NE, 2, 1)
SPORTH_UGEN("noise", sporth_noise, SPORTH_NOISE, 1, 1)
SPORTH_UGEN("nsmp", sporth_nsmp, SPORTH_NSMP, 5, 1)
SPORTH_UGEN("osc", sporth_osc, SPORTH_OSC, 4, 1)
/* SPORTH_UGEN("oscmorph4", sporth_oscmorph4, SPORTH_OSCMORPH4, 6, 1) */
/* SPORTH_UGEN("oscmorph2", sporth_oscmorph2, SPORTH_OSCMORPH2, 6, 1) */
SPORTH_UGEN("p", sporth_p, SPORTH_P, 1, 1)
SPORTH_UGEN("palias", sporth_palias, SPORTH_PALIAS, 2, 0)
/* SPORTH_UGEN("pan", sporth_pan2, SPORTH_PAN, 2, 2) */
/* SPORTH_UGEN("panst", sporth_panst, SPORTH_PANST, 3, 2) */
/* SPORTH_UGEN("pareq", sporth_pareq, SPORTH_PAREQ, 5, 1) */
SPORTH_UGEN("paulstretch", sporth_paulstretch, SPORTH_PAULSTRETCH, 3, 1)
SPORTH_UGEN("phasewarp", sporth_phasewarp, SPORTH_PHASEWARP, 2, 1)
SPORTH_UGEN("peaklim", sporth_peaklim, SPORTH_PEAKLIM, 4, 1)
SPORTH_UGEN("phaser", sporth_phaser, SPORTH_PHASER, 12, 2)
SPORTH_UGEN("phasor", sporth_phasor, SPORTH_PHASOR, 2, 1)
SPORTH_UGEN("pinknoise", sporth_pinknoise, SPORTH_PINKNOISE, 1, 1)
/* SPORTH_UGEN("pluck", sporth_pluck, SPORTH_PLUCK, 4, 1) */
SPORTH_UGEN("port", sporth_port, SPORTH_PORT, 2, 1)
SPORTH_UGEN("pos", sporth_pos, SPORTH_POS, 0, 1)
/* SPORTH_UGEN("posc3", sporth_posc3, SPORTH_POSC3, 3, 1) */
SPORTH_UGEN("print", sporth_prints, SPORTH_PRINT, 2, 1)
SPORTH_UGEN("prop", sporth_prop, SPORTH_PROP, 2, 1)
SPORTH_UGEN("ps", sporth_ps, SPORTH_POLYSPORTH, 3, 0)
SPORTH_UGEN("pset", sporth_pset, SPORTH_PSET, 2, 0)
SPORTH_UGEN("psh", sporth_psh, SPORTH_PSH, 3, 0)
SPORTH_UGEN("pshift", sporth_pshift, SPORTH_PSHIFT, 4, 1)
SPORTH_UGEN("pst", sporth_pst, SPORTH_PST, 3, 0)
/* SPORTH_UGEN("ptrack", sporth_ptrack, SPORTH_PTRACK, 3, 2) */
SPORTH_UGEN("rand", sporth_rand, SPORTH_RAND, 2, 1)
SPORTH_UGEN("randh", sporth_randh, SPORTH_RANDH, 3, 1)
SPORTH_UGEN("randi", sporth_randi, SPORTH_RANDI, 3, 1)
SPORTH_UGEN("ref", sporth_ref, SPORTH_REF, 1, 0)
SPORTH_UGEN("render", sporth_render, SPORTH_RENDER, 0, 0)
/* SPORTH_UGEN("reson", sporth_reson, SPORTH_RESON, 3, 1) */
SPORTH_UGEN("reverse", sporth_reverse, SPORTH_REVERSE, 2, 1)
SPORTH_UGEN("revsc", sporth_revsc, SPORTH_REVSC, 4, 2)
/* SPORTH_UGEN("rms", sporth_rms, SPORTH_RMS, 2, 1) */
SPORTH_UGEN("rot", sporth_rot, SPORTH_ROT, 3, 3)
SPORTH_UGEN("round", sporth_round, SPORTH_ROUND, 1, 1)
SPORTH_UGEN("rpt", sporth_rpt, SPORTH_RPT, 3, 1)
/* SPORTH_UGEN("rspline", sporth_rspline, SPORTH_RSPLINE, 4, 1) */
SPORTH_UGEN("samphold", sporth_samphold, SPORTH_SAMPHOLD, 2, 1)
SPORTH_UGEN("saturator", sporth_saturator, SPORTH_SATURATOR, 3, 1)
SPORTH_UGEN("saw", sporth_blsaw, SPORTH_SAW, 2, 1)
SPORTH_UGEN("say", sporth_say, SPORTH_SAY, 1, 0)
SPORTH_UGEN("scale", sporth_scale, SPORTH_SCALE, 3, 1)
SPORTH_UGEN("scrambler", sporth_scrambler, SPORTH_SCRAMBLER, 2, 0)
SPORTH_UGEN("scrubby", sporth_scrubby, SPORTH_SCRUBBY, 5, 1)
SPORTH_UGEN("set", sporth_set, SPORTH_SET, 2, 0)
SPORTH_UGEN("setdurs", sporth_setdurs, SPORTH_SETDURS, 1, 0)
SPORTH_UGEN("sget", sporth_sget, SPORTH_SGET, 2, 1)
SPORTH_UGEN("sine", sporth_sine, SPORTH_SINE, 2, 1)
SPORTH_UGEN("slick", sporth_slick, SPORTH_SLICK, 1, 1)
SPORTH_UGEN("smoothdelay", sporth_smoothdelay, SPORTH_SMOOTHDELAY, 5, 1)
/* SPORTH_UGEN("sndwarp", sporth_sndwarp, SPORTH_SNDWARP, 11, 1) */
SPORTH_UGEN("spa", sporth_spa, SPORTH_SPA, 1, 1)
SPORTH_UGEN("sparec", sporth_sparec, SPORTH_SPAREC, 2, 1)
SPORTH_UGEN("square", sporth_blsquare, SPORTH_SQUARE, 2, 1)
SPORTH_UGEN("sr", sporth_sr, SPORTH_SR, 0, 1)
SPORTH_UGEN("srand", sporth_srand, SPORTH_SRAND, 1, 0)
SPORTH_UGEN("sub", sporth_sub, SPORTH_SUBv2, 2, 1)
/* SPORTH_UGEN("streson", sporth_streson, SPORTH_STRESON, 3, 1) */
SPORTH_UGEN("swap", sporth_swap, SPORTH_SWAP, 2, 2)
SPORTH_UGEN("switch", sporth_switch, SPORTH_SWITCH, 3, 1)
SPORTH_UGEN("tabread", sporth_tabread, SPORTH_TABREAD, 5, 1)
SPORTH_UGEN("tadsr", sporth_tadsr, SPORTH_TADSR, 5, 1)
SPORTH_UGEN("talias", sporth_talias, SPORTH_TALIAS, 3, 0)
SPORTH_UGEN("talkbox", sporth_talkbox, SPORTH_TALKBOX, 3, 1)
SPORTH_UGEN("tbldur", sporth_tbldur, SPORTH_TBLDUR, 1, 1)
SPORTH_UGEN("tblrec", sporth_tblrec, SPORTH_TBLREC, 3, 1)
SPORTH_UGEN("tblsize", sporth_tblsize, SPORTH_TBLSIZE, 1, 1)
SPORTH_UGEN("tdiv", sporth_tdiv, SPORTH_TDIV, 3, 1)
SPORTH_UGEN("tenv", sporth_tenv, SPORTH_TENV, 4, 1)
SPORTH_UGEN("tenv2", sporth_tenv2, SPORTH_TENV2, 3, 1)
SPORTH_UGEN("tenvx", sporth_tenvx, SPORTH_TENVX, 4, 1)
SPORTH_UGEN("tgate", sporth_tgate, SPORTH_TGATE, 2, 1)
SPORTH_UGEN("tget", sporth_tget, SPORTH_TGET, 2, 1)
SPORTH_UGEN("thresh", sporth_thresh, SPORTH_THRESH, 3, 1)
SPORTH_UGEN("timer", sporth_timer, SPORTH_TIMER, 1, 1)
SPORTH_UGEN("tin", sporth_tin, SPORTH_TIN, 1, 1)
SPORTH_UGEN("tick", sporth_tick, SPORTH_TICK, 0, 1)
SPORTH_UGEN("tog", sporth_tog, SPORTH_TOG, 1, 1)
/* SPORTH_UGEN("tone", sporth_tone, SPORTH_TONE, 2, 1) */
SPORTH_UGEN("tphasor", sporth_tphasor, SPORTH_TPHASOR, 3, 1)
SPORTH_UGEN("tport", sporth_tport, SPORTH_TPORT, 3, 1)
SPORTH_UGEN("tprop", sporth_tprop, SPORTH_TPROP, 3, 1)
SPORTH_UGEN("trand", sporth_trand, SPORTH_TRAND, 3, 1)
SPORTH_UGEN("triangle", sporth_bltriangle, SPORTH_TRIANGLE, 2, 1)
SPORTH_UGEN("tri", sporth_bltriangle, SPORTH_TRI, 2, 1)
SPORTH_UGEN("tseq", sporth_tseq, SPORTH_TSEQ, 3, 1)
SPORTH_UGEN("tseg", sporth_tseg, SPORTH_TSEG, 5, 1)
SPORTH_UGEN("tset", sporth_tset, SPORTH_TSET, 3, 0)
SPORTH_UGEN("var", sporth_var, SPORTH_VAR, 1, 0)
SPORTH_UGEN("varset", sporth_varset, SPORTH_VARSET, 2, 0)
SPORTH_UGEN("vdelay", sporth_vdelay, SPORTH_VDELAY, 3, 1)
SPORTH_UGEN("voc", sporth_voc, SPORTH_VOC, 5, 1)
/* SPORTH_UGEN("vocoder", sporth_vocoder, SPORTH_VOCODER, 5, 1) */
/* SPORTH_UGEN("waveset", sporth_waveset, SPORTH_WAVESET, 3, 1) */
SPORTH_UGEN("writecode", sporth_writecode, SPORTH_WRITECODE, 1, 0)
SPORTH_UGEN("wpkorg35", sporth_wpkorg35, SPORTH_WPKORG35, 4, 1)
SPORTH_UGEN("zeros", sporth_zeros, SPORTH_ZEROS, 2, 0)
SPORTH_UGEN("zitarev", sporth_zitarev, SPORTH_ZITAREV, 13, 2)
SPORTH_UGEN("zrev", sporth_zrev, SPORTH_ZREV, 5, 2)
