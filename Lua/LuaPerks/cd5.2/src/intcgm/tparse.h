#ifndef _TPARSE_H_
#define _TPARSE_H_

int cgmt_begmtf ( void );
int cgmt_endmtf ( void );
int cgmt_begpic ( void );
int cgmt_begpib ( void );
int cgmt_endpic ( void );
int cgmt_mtfver ( void );
int cgmt_mtfdsc ( void );
int cgmt_vdctyp ( void );
int cgmt_intpre ( void );
int cgmt_realpr ( void );
int cgmt_indpre ( void );
int cgmt_colpre ( void );
int cgmt_colipr ( void );
int cgmt_maxcoi ( void );
int cgmt_covaex ( void );
int cgmt_mtfell ( void );
int cgmt_bmtfdf (void );
int cgmt_emtfdf ( void );
int cgmt_fntlst ( void );
int cgmt_chslst ( void );
int cgmt_chcdac ( void );
int cgmt_sclmde ( void );
int cgmt_clslmd ( void );
int cgmt_lnwdmd ( void );
int cgmt_mkszmd ( void );
int cgmt_edwdmd ( void );
int cgmt_vdcext ( void );
int cgmt_bckcol ( void );
int cgmt_vdcipr ( void );
int cgmt_vdcrpr ( void );
int cgmt_auxcol ( void );
int cgmt_transp ( void );
int cgmt_clprec ( void );
int cgmt_clpind ( void );
int cgmt_polyln ( void );
int cgmt_incply ( void );
int cgmt_djtply ( void );
int cgmt_indjpl ( void );
int cgmt_polymk ( void );
int cgmt_incplm ( void );
int cgmt_text ( void );
int cgmt_rsttxt ( void );
int cgmt_apdtxt ( void );
int cgmt_polygn ( void );
int cgmt_incplg ( void );
int cgmt_plgset ( void );
int cgmt_inpgst ( void );
int cgmt_cellar ( void );
int cgmt_gdp ( void );
int cgmt_rect ( void );
int cgmt_circle ( void );
int cgmt_circ3p ( void );
int cgmt_cir3pc ( void );
int cgmt_circnt ( void );
int cgmt_ccntcl ( void );
int cgmt_ellips ( void );
int cgmt_ellarc ( void );
int cgmt_ellacl ( void );
int cgmt_lnbdin ( void );
int cgmt_lntype ( void );
int cgmt_lnwidt ( void );
int cgmt_lncolr ( void );
int cgmt_mkbdin ( void );
int cgmt_mktype ( void );
int cgmt_mksize ( void );
int cgmt_mkcolr ( void );
int cgmt_txbdin ( void );
int cgmt_txftin ( void );
int cgmt_txtprc ( void );
int cgmt_chrexp ( void );
int cgmt_chrspc ( void );
int cgmt_txtclr ( void );
int cgmt_chrhgt ( void );
int cgmt_chrori ( void );
int cgmt_txtpat ( void );
int cgmt_txtali ( void );
int cgmt_chseti ( void );
int cgmt_achsti ( void );
int cgmt_fillin ( void );
int cgmt_intsty ( void );
int cgmt_fillco ( void );
int cgmt_hatind ( void );
int cgmt_patind ( void );
int cgmt_edgind ( void );
int cgmt_edgtyp( void );
int cgmt_edgwid ( void );
int cgmt_edgcol ( void );
int cgmt_edgvis ( void );
int cgmt_fillrf ( void );
int cgmt_pattab ( void );
int cgmt_patsiz ( void );
int cgmt_coltab ( void );
int cgmt_asf ( void );
int cgmt_escape ( void );
int cgmt_messag ( void );
int cgmt_appdta ( void );

#endif