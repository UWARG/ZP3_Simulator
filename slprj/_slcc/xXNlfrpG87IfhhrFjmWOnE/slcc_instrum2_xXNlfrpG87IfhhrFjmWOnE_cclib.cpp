#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)((++__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_phits[id - 1u]) || ((__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_phits[id - 1u] = (~0u))!=0)))
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_enabled && __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

#define __MW_INSTRUM_RECORD_COMBINATION_HIT_202() \
  __MW_INSTRUM_RECORD_HIT(290U + __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_curr_combination_idx_202)

#define __MW_INSTRUM_NODE_204(...) \
  ((__VA_ARGS__) ?\
   (__MW_INSTRUM_RECORD_HIT(204U), (__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_curr_combination_idx_202 = 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(205U), (__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_curr_combination_idx_202 = 0U), (0 == 1)))
#define __MW_INSTRUM_NODE_206(...) \
  ((__VA_ARGS__) ?\
   (__MW_INSTRUM_RECORD_HIT(206U), (__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_curr_combination_idx_202 += 1U), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(207U), (0 == 1)))
#define __MW_INSTRUM_NODE_202(...) \
  ((__VA_ARGS__) ?\
   (__MW_INSTRUM_RECORD_HIT(202U), __MW_INSTRUM_RECORD_COMBINATION_HIT_202(), (1 == 1)) :\
   (__MW_INSTRUM_RECORD_HIT(203U), __MW_INSTRUM_RECORD_COMBINATION_HIT_202(), (0 == 1)))


#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() 
#define __MW_INSTRUM_FCN_ENTER_6() 
#define __MW_INSTRUM_FCN_ENTER_7() 
#define __MW_INSTRUM_FCN_ENTER_8() 
#define __MW_INSTRUM_FCN_ENTER_9() 
#define __MW_INSTRUM_FCN_ENTER_10() 
#define __MW_INSTRUM_FCN_ENTER_11() 
#define __MW_INSTRUM_FCN_ENTER_12() 
#define __MW_INSTRUM_FCN_ENTER_13() 
#define __MW_INSTRUM_FCN_ENTER_14() \
  unsigned int __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_curr_combination_idx_202 = 0U; 
#define __MW_INSTRUM_FCN_ENTER_15() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_abs_tol, __mw_instrum_xXNlfrpG87IfhhrFjmWOnE_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_88() (__MW_INSTRUM_RECORD_HIT(88U))
#define __MW_INSTRUM_NODE_89(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(89U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(90U), (0 == 1)))
#define __MW_INSTRUM_NODE_91(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(91U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(92U), (0 == 1)))
#define __MW_INSTRUM_NODE_93(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(93U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(94U), (0 == 1)))
#define __MW_INSTRUM_NODE_95() (__MW_INSTRUM_RECORD_HIT(95U))
#define __MW_INSTRUM_NODE_96() (__MW_INSTRUM_RECORD_HIT(96U))
#define __MW_INSTRUM_NODE_97() (__MW_INSTRUM_RECORD_HIT(97U))
#define __MW_INSTRUM_NODE_98(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(98U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(99U), (0 == 1)))
#define __MW_INSTRUM_NODE_100(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(100U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(101U), (0 == 1)))
#define __MW_INSTRUM_NODE_102() (__MW_INSTRUM_RECORD_HIT(102U))
#define __MW_INSTRUM_NODE_103() (__MW_INSTRUM_RECORD_HIT(103U))
#define __MW_INSTRUM_NODE_104() (__MW_INSTRUM_RECORD_HIT(104U))
#define __MW_INSTRUM_NODE_105(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(105U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(106U), (0 == 1)))
#define __MW_INSTRUM_NODE_107() (__MW_INSTRUM_RECORD_HIT(107U))
#define __MW_INSTRUM_NODE_108(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(108U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(109U), (0 == 1)))
#define __MW_INSTRUM_NODE_110(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(110U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(111U), (0 == 1)))
#define __MW_INSTRUM_NODE_112(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(112U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(113U), (0 == 1)))
#define __MW_INSTRUM_NODE_114(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(114U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(115U), (0 == 1)))
#define __MW_INSTRUM_NODE_116(lhs, rhs) ((((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) <= (rhs)) ? __MW_INSTRUM_RECORD_HIT(116U) : (((lhs) > (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT(117U) : (void)0)))
#define __MW_INSTRUM_NODE_118() (__MW_INSTRUM_RECORD_HIT(118U))
#define __MW_INSTRUM_NODE_119() (__MW_INSTRUM_RECORD_HIT(119U))
#define __MW_INSTRUM_NODE_120(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(120U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(121U), (0 == 1)))
#define __MW_INSTRUM_NODE_122(lhs, rhs) ((((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) < (rhs)) ? __MW_INSTRUM_RECORD_HIT(122U) : (((lhs) >= (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT(123U) : (void)0)))
#define __MW_INSTRUM_NODE_124() (__MW_INSTRUM_RECORD_HIT(124U))
#define __MW_INSTRUM_NODE_125() (__MW_INSTRUM_RECORD_HIT(125U))
#define __MW_INSTRUM_NODE_126() (__MW_INSTRUM_RECORD_HIT(126U))
#define __MW_INSTRUM_NODE_127(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(127U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(128U), (0 == 1)))
#define __MW_INSTRUM_NODE_129(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(129U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(130U), (0 == 1)))
#define __MW_INSTRUM_NODE_131() (__MW_INSTRUM_RECORD_HIT(131U))
#define __MW_INSTRUM_NODE_132() (__MW_INSTRUM_RECORD_HIT(132U))
#define __MW_INSTRUM_NODE_133() (__MW_INSTRUM_RECORD_HIT(133U))
#define __MW_INSTRUM_NODE_134() (__MW_INSTRUM_RECORD_HIT(134U))
#define __MW_INSTRUM_NODE_135() (__MW_INSTRUM_RECORD_HIT(135U))
#define __MW_INSTRUM_NODE_136() (__MW_INSTRUM_RECORD_HIT(136U))
#define __MW_INSTRUM_NODE_137() (__MW_INSTRUM_RECORD_HIT(137U))
#define __MW_INSTRUM_NODE_138() (__MW_INSTRUM_RECORD_HIT(138U))
#define __MW_INSTRUM_NODE_139() (__MW_INSTRUM_RECORD_HIT(139U))
#define __MW_INSTRUM_NODE_140(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(140U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(141U), (0 == 1)))
#define __MW_INSTRUM_NODE_142(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(142U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(143U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(144U) : (void)0)))
#define __MW_INSTRUM_NODE_145() (__MW_INSTRUM_RECORD_HIT(145U))
#define __MW_INSTRUM_NODE_146() (__MW_INSTRUM_RECORD_HIT(146U))
#define __MW_INSTRUM_NODE_147(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(147U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(148U), (0 == 1)))
#define __MW_INSTRUM_NODE_149() (__MW_INSTRUM_RECORD_HIT(149U))
#define __MW_INSTRUM_NODE_150() (__MW_INSTRUM_RECORD_HIT(150U))
#define __MW_INSTRUM_NODE_151() (__MW_INSTRUM_RECORD_HIT(151U))
#define __MW_INSTRUM_NODE_152() (__MW_INSTRUM_RECORD_HIT(152U))
#define __MW_INSTRUM_NODE_153() (__MW_INSTRUM_RECORD_HIT(153U))
#define __MW_INSTRUM_NODE_154(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(154U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(155U), (0 == 1)))
#define __MW_INSTRUM_NODE_156(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(156U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(157U), (0 == 1)))
#define __MW_INSTRUM_NODE_158(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(158U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(159U), (0 == 1)))
#define __MW_INSTRUM_NODE_160(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(160U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(161U), (0 == 1)))
#define __MW_INSTRUM_NODE_162() (__MW_INSTRUM_RECORD_HIT(162U))
#define __MW_INSTRUM_NODE_163() (__MW_INSTRUM_RECORD_HIT(163U))
#define __MW_INSTRUM_NODE_164(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(164U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(165U), (0 == 1)))
#define __MW_INSTRUM_NODE_166() (__MW_INSTRUM_RECORD_HIT(166U))
#define __MW_INSTRUM_NODE_167() (__MW_INSTRUM_RECORD_HIT(167U))
#define __MW_INSTRUM_NODE_168() (__MW_INSTRUM_RECORD_HIT(168U))
#define __MW_INSTRUM_NODE_169() (__MW_INSTRUM_RECORD_HIT(169U))
#define __MW_INSTRUM_NODE_170() (__MW_INSTRUM_RECORD_HIT(170U))
#define __MW_INSTRUM_NODE_171() (__MW_INSTRUM_RECORD_HIT(171U))
#define __MW_INSTRUM_NODE_172() (__MW_INSTRUM_RECORD_HIT(172U))
#define __MW_INSTRUM_NODE_173(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(173U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(174U), (0 == 1)))
#define __MW_INSTRUM_NODE_175(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(175U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(176U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(177U) : (void)0)))
#define __MW_INSTRUM_NODE_178() (__MW_INSTRUM_RECORD_HIT(178U))
#define __MW_INSTRUM_NODE_179() (__MW_INSTRUM_RECORD_HIT(179U))
#define __MW_INSTRUM_NODE_180(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(180U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(181U), (0 == 1)))
#define __MW_INSTRUM_NODE_182(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(182U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(183U), (0 == 1)))
#define __MW_INSTRUM_NODE_184(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(184U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(185U), (0 == 1)))
#define __MW_INSTRUM_NODE_186() (__MW_INSTRUM_RECORD_HIT(186U))
#define __MW_INSTRUM_NODE_187(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(187U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(188U), (0 == 1)))
#define __MW_INSTRUM_NODE_189() (__MW_INSTRUM_RECORD_HIT(189U))
#define __MW_INSTRUM_NODE_190(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(190U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(191U), (0 == 1)))
#define __MW_INSTRUM_NODE_192() (__MW_INSTRUM_RECORD_HIT(192U))
#define __MW_INSTRUM_NODE_193() (__MW_INSTRUM_RECORD_HIT(193U))
#define __MW_INSTRUM_NODE_194() (__MW_INSTRUM_RECORD_HIT(194U))
#define __MW_INSTRUM_NODE_195() (__MW_INSTRUM_RECORD_HIT(195U))
#define __MW_INSTRUM_NODE_196() (__MW_INSTRUM_RECORD_HIT(196U))
#define __MW_INSTRUM_NODE_197() (__MW_INSTRUM_RECORD_HIT(197U))
#define __MW_INSTRUM_NODE_198() (__MW_INSTRUM_RECORD_HIT(198U))
#define __MW_INSTRUM_NODE_199() (__MW_INSTRUM_RECORD_HIT(199U))
#define __MW_INSTRUM_NODE_200() (__MW_INSTRUM_RECORD_HIT(200U))
#define __MW_INSTRUM_NODE_201() (__MW_INSTRUM_RECORD_HIT(201U))
#define __MW_INSTRUM_NODE_208(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(208U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(209U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(210U) : (void)0)))
#define __MW_INSTRUM_NODE_211(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(211U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(212U), (0 == 1)))
#define __MW_INSTRUM_NODE_213(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(213U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(214U), (0 == 1)))
#define __MW_INSTRUM_NODE_203() (__MW_INSTRUM_RECORD_HIT(203U))
#define __MW_INSTRUM_NODE_215() (__MW_INSTRUM_RECORD_HIT(215U))
#define __MW_INSTRUM_NODE_216() (__MW_INSTRUM_RECORD_HIT(216U))
#define __MW_INSTRUM_NODE_217(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(217U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(218U), (0 == 1)))
#define __MW_INSTRUM_NODE_219(lhs, rhs) ((((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) < (rhs)) ? __MW_INSTRUM_RECORD_HIT(219U) : (((lhs) >= (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT(220U) : (void)0)))
#define __MW_INSTRUM_NODE_221(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(221U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(222U), (0 == 1)))
#define __MW_INSTRUM_NODE_223(lhs, rhs) ((((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) < (rhs)) ? __MW_INSTRUM_RECORD_HIT(223U) : (((lhs) >= (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT(224U) : (void)0)))
#define __MW_INSTRUM_NODE_225() (__MW_INSTRUM_RECORD_HIT(225U))
#define __MW_INSTRUM_NODE_226() (__MW_INSTRUM_RECORD_HIT(226U))
#define __MW_INSTRUM_NODE_227() (__MW_INSTRUM_RECORD_HIT(227U))
#define __MW_INSTRUM_NODE_228(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(228U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(229U), (0 == 1)))
#define __MW_INSTRUM_NODE_230(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(230U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(231U), (0 == 1)))
#define __MW_INSTRUM_NODE_232() (__MW_INSTRUM_RECORD_HIT(232U))
#define __MW_INSTRUM_NODE_233() (__MW_INSTRUM_RECORD_HIT(233U))
#define __MW_INSTRUM_NODE_234(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(234U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(235U), (0 == 1)))
#define __MW_INSTRUM_NODE_236() (__MW_INSTRUM_RECORD_HIT(236U))
#define __MW_INSTRUM_NODE_237(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(237U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(238U), (0 == 1)))
#define __MW_INSTRUM_NODE_239() (__MW_INSTRUM_RECORD_HIT(239U))
#define __MW_INSTRUM_NODE_240() (__MW_INSTRUM_RECORD_HIT(240U))
#define __MW_INSTRUM_NODE_241(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(241U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(242U), (0 == 1)))
#define __MW_INSTRUM_NODE_243(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(243U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(244U), (0 == 1)))
#define __MW_INSTRUM_NODE_245() (__MW_INSTRUM_RECORD_HIT(245U))
#define __MW_INSTRUM_NODE_246() (__MW_INSTRUM_RECORD_HIT(246U))
#define __MW_INSTRUM_NODE_247() (__MW_INSTRUM_RECORD_HIT(247U))
#define __MW_INSTRUM_NODE_248(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(248U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(249U), (0 == 1)))
#define __MW_INSTRUM_NODE_250(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(250U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(251U), (0 == 1)))
#define __MW_INSTRUM_NODE_252() (__MW_INSTRUM_RECORD_HIT(252U))
#define __MW_INSTRUM_NODE_253() (__MW_INSTRUM_RECORD_HIT(253U))
#define __MW_INSTRUM_NODE_254() (__MW_INSTRUM_RECORD_HIT(254U))
#define __MW_INSTRUM_NODE_255(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(255U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(256U), (0 == 1)))
#define __MW_INSTRUM_NODE_257() (__MW_INSTRUM_RECORD_HIT(257U))
#define __MW_INSTRUM_NODE_258(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(258U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(259U), (0 == 1)))
#define __MW_INSTRUM_NODE_260() (__MW_INSTRUM_RECORD_HIT(260U))
#define __MW_INSTRUM_NODE_261(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(261U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(262U), (0 == 1)))
#define __MW_INSTRUM_NODE_263() (__MW_INSTRUM_RECORD_HIT(263U))
#define __MW_INSTRUM_NODE_264() (__MW_INSTRUM_RECORD_HIT(264U))
#define __MW_INSTRUM_NODE_265(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(265U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(266U), (0 == 1)))
#define __MW_INSTRUM_NODE_267(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(267U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(268U), (0 == 1)))
#define __MW_INSTRUM_NODE_269() (__MW_INSTRUM_RECORD_HIT(269U))
#define __MW_INSTRUM_NODE_270() (__MW_INSTRUM_RECORD_HIT(270U))
#define __MW_INSTRUM_NODE_271() (__MW_INSTRUM_RECORD_HIT(271U))
#define __MW_INSTRUM_NODE_272() (__MW_INSTRUM_RECORD_HIT(272U))
#define __MW_INSTRUM_NODE_273() (__MW_INSTRUM_RECORD_HIT(273U))
#define __MW_INSTRUM_NODE_274(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(274U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(275U), (0 == 1)))
#define __MW_INSTRUM_NODE_276(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(276U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(277U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(278U) : (void)0)))
#define __MW_INSTRUM_NODE_279() (__MW_INSTRUM_RECORD_HIT(279U))
#define __MW_INSTRUM_NODE_280() (__MW_INSTRUM_RECORD_HIT(280U))
#define __MW_INSTRUM_NODE_281() (__MW_INSTRUM_RECORD_HIT(281U))
#define __MW_INSTRUM_NODE_282(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(282U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(283U), (0 == 1)))
#define __MW_INSTRUM_NODE_284(lhs, rhs) ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT(284U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT(285U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT(286U) : (void)0)))
#define __MW_INSTRUM_NODE_287() (__MW_INSTRUM_RECORD_HIT(287U))
#define __MW_INSTRUM_NODE_288() (__MW_INSTRUM_RECORD_HIT(288U))
#define __MW_INSTRUM_NODE_289() (__MW_INSTRUM_RECORD_HIT(289U))
#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_204CZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_204(...) (__MW_INSTRUM_RECORD_HIT_204CZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_204(exp) (__MW_INSTRUM_RECORD_HIT_204CZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_206CZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_206(...) (__MW_INSTRUM_RECORD_HIT_206CZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_206(exp) (__MW_INSTRUM_RECORD_HIT_206CZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_202DA_204_206Z_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_202(...) (__MW_INSTRUM_RECORD_HIT_202DA_204_206Z_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_202(exp) (__MW_INSTRUM_RECORD_HIT_202DA_204_206Z_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#define __MW_INSTRUM_FCN_ENTER_6() 

#define __MW_INSTRUM_FCN_ENTER_7() 

#define __MW_INSTRUM_FCN_ENTER_8() 

#define __MW_INSTRUM_FCN_ENTER_9() 

#define __MW_INSTRUM_FCN_ENTER_10() 

#define __MW_INSTRUM_FCN_ENTER_11() 

#define __MW_INSTRUM_FCN_ENTER_12() 

#define __MW_INSTRUM_FCN_ENTER_13() 

#define __MW_INSTRUM_FCN_ENTER_14() 

#define __MW_INSTRUM_FCN_ENTER_15() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_88EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_88() __MW_INSTRUM_RECORD_HIT_88EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_89DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_89(...) (__MW_INSTRUM_RECORD_HIT_89DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_89(exp) (__MW_INSTRUM_RECORD_HIT_89DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_91DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_91(...) (__MW_INSTRUM_RECORD_HIT_91DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_91(exp) (__MW_INSTRUM_RECORD_HIT_91DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_93DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_93(...) (__MW_INSTRUM_RECORD_HIT_93DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_93(exp) (__MW_INSTRUM_RECORD_HIT_93DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_95XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_95() __MW_INSTRUM_RECORD_HIT_95XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_96EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_96() __MW_INSTRUM_RECORD_HIT_96EZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_97() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_98DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_98(...) (__MW_INSTRUM_RECORD_HIT_98DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_98(exp) (__MW_INSTRUM_RECORD_HIT_98DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_100DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_100(...) (__MW_INSTRUM_RECORD_HIT_100DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_100(exp) (__MW_INSTRUM_RECORD_HIT_100DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_102() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_103XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_103() __MW_INSTRUM_RECORD_HIT_103XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_104EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_104() __MW_INSTRUM_RECORD_HIT_104EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_105DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_105(...) (__MW_INSTRUM_RECORD_HIT_105DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_105(exp) (__MW_INSTRUM_RECORD_HIT_105DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_107() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_108DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_108(...) (__MW_INSTRUM_RECORD_HIT_108DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_108(exp) (__MW_INSTRUM_RECORD_HIT_108DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_110DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_110(...) (__MW_INSTRUM_RECORD_HIT_110DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_110(exp) (__MW_INSTRUM_RECORD_HIT_110DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_112DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_112(...) (__MW_INSTRUM_RECORD_HIT_112DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_112(exp) (__MW_INSTRUM_RECORD_HIT_112DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_114DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_114(...) (__MW_INSTRUM_RECORD_HIT_114DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_114(exp) (__MW_INSTRUM_RECORD_HIT_114DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_116FGTZ_xXNlfrpG87IfhhrFjmWOnE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_116(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_116FGTZ_xXNlfrpG87IfhhrFjmWOnE(lhs, rhs))

#define __MW_INSTRUM_NODE_118() ((void)0)


#define __MW_INSTRUM_NODE_119() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_120DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_120(...) (__MW_INSTRUM_RECORD_HIT_120DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_120(exp) (__MW_INSTRUM_RECORD_HIT_120DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_122FLTZ_xXNlfrpG87IfhhrFjmWOnE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_122(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_122FLTZ_xXNlfrpG87IfhhrFjmWOnE(lhs, rhs))

#define __MW_INSTRUM_NODE_124() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_125XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_125() __MW_INSTRUM_RECORD_HIT_125XZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_126() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_127DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_127(...) (__MW_INSTRUM_RECORD_HIT_127DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_127(exp) (__MW_INSTRUM_RECORD_HIT_127DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_129DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_129(...) (__MW_INSTRUM_RECORD_HIT_129DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_129(exp) (__MW_INSTRUM_RECORD_HIT_129DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_131() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_132XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_132() __MW_INSTRUM_RECORD_HIT_132XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_133EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_133() __MW_INSTRUM_RECORD_HIT_133EZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_134() ((void)0)


#define __MW_INSTRUM_NODE_135() ((void)0)


#define __MW_INSTRUM_NODE_136() ((void)0)


#define __MW_INSTRUM_NODE_137() ((void)0)


#define __MW_INSTRUM_NODE_138() ((void)0)


#define __MW_INSTRUM_NODE_139() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_140DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_140(...) (__MW_INSTRUM_RECORD_HIT_140DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_140(exp) (__MW_INSTRUM_RECORD_HIT_140DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_142IZ_xXNlfrpG87IfhhrFjmWOnE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_142(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_142IZ_xXNlfrpG87IfhhrFjmWOnE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_145XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_145() __MW_INSTRUM_RECORD_HIT_145XZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_146() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_147DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_147(...) (__MW_INSTRUM_RECORD_HIT_147DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_147(exp) (__MW_INSTRUM_RECORD_HIT_147DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_149() ((void)0)


#define __MW_INSTRUM_NODE_150() ((void)0)


#define __MW_INSTRUM_NODE_151() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_152XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_152() __MW_INSTRUM_RECORD_HIT_152XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_153EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_153() __MW_INSTRUM_RECORD_HIT_153EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_154DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) (__MW_INSTRUM_RECORD_HIT_154DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_154(exp) (__MW_INSTRUM_RECORD_HIT_154DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_156DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) (__MW_INSTRUM_RECORD_HIT_156DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_156(exp) (__MW_INSTRUM_RECORD_HIT_156DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_158DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_158(...) (__MW_INSTRUM_RECORD_HIT_158DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_158(exp) (__MW_INSTRUM_RECORD_HIT_158DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_160DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_160(...) (__MW_INSTRUM_RECORD_HIT_160DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_160(exp) (__MW_INSTRUM_RECORD_HIT_160DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_162XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_162() __MW_INSTRUM_RECORD_HIT_162XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_163EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_163() __MW_INSTRUM_RECORD_HIT_163EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_164DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_164(...) (__MW_INSTRUM_RECORD_HIT_164DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_164(exp) (__MW_INSTRUM_RECORD_HIT_164DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_166XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_166() __MW_INSTRUM_RECORD_HIT_166XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_167EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_167() __MW_INSTRUM_RECORD_HIT_167EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_168XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_168() __MW_INSTRUM_RECORD_HIT_168XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_169EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_169() __MW_INSTRUM_RECORD_HIT_169EZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_170() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_171XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_171() __MW_INSTRUM_RECORD_HIT_171XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_172EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_172() __MW_INSTRUM_RECORD_HIT_172EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_173DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_173(...) (__MW_INSTRUM_RECORD_HIT_173DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_173(exp) (__MW_INSTRUM_RECORD_HIT_173DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_175IZ_xXNlfrpG87IfhhrFjmWOnE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_175(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_175IZ_xXNlfrpG87IfhhrFjmWOnE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_178XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_178() __MW_INSTRUM_RECORD_HIT_178XZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_179() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_180DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_180(...) (__MW_INSTRUM_RECORD_HIT_180DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_180(exp) (__MW_INSTRUM_RECORD_HIT_180DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_182CZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_182(...) (__MW_INSTRUM_RECORD_HIT_182CZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_182(exp) (__MW_INSTRUM_RECORD_HIT_182CZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_184DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_184(...) (__MW_INSTRUM_RECORD_HIT_184DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_184(exp) (__MW_INSTRUM_RECORD_HIT_184DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_186() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_187DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_187(...) (__MW_INSTRUM_RECORD_HIT_187DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_187(exp) (__MW_INSTRUM_RECORD_HIT_187DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_189() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_190DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_190(...) (__MW_INSTRUM_RECORD_HIT_190DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_190(exp) (__MW_INSTRUM_RECORD_HIT_190DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_192() ((void)0)


#define __MW_INSTRUM_NODE_193() ((void)0)


#define __MW_INSTRUM_NODE_194() ((void)0)


#define __MW_INSTRUM_NODE_195() ((void)0)


#define __MW_INSTRUM_NODE_196() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_197XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_197() __MW_INSTRUM_RECORD_HIT_197XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_198EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_198() __MW_INSTRUM_RECORD_HIT_198EZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_199() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_200XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_200() __MW_INSTRUM_RECORD_HIT_200XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_201EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_201() __MW_INSTRUM_RECORD_HIT_201EZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_208IZ_xXNlfrpG87IfhhrFjmWOnE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_208(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_208IZ_xXNlfrpG87IfhhrFjmWOnE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_211DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_211(...) (__MW_INSTRUM_RECORD_HIT_211DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_211(exp) (__MW_INSTRUM_RECORD_HIT_211DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_213CZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_213(...) (__MW_INSTRUM_RECORD_HIT_213CZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_213(exp) (__MW_INSTRUM_RECORD_HIT_213CZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_203() ((void)0)


#define __MW_INSTRUM_NODE_215() ((void)0)


#define __MW_INSTRUM_NODE_216() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_217DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_217(...) (__MW_INSTRUM_RECORD_HIT_217DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_217(exp) (__MW_INSTRUM_RECORD_HIT_217DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_219FGEZ_xXNlfrpG87IfhhrFjmWOnE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_219(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_219FGEZ_xXNlfrpG87IfhhrFjmWOnE(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_221DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_221(...) (__MW_INSTRUM_RECORD_HIT_221DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_221(exp) (__MW_INSTRUM_RECORD_HIT_221DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_223FGEZ_xXNlfrpG87IfhhrFjmWOnE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_223(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_223FGEZ_xXNlfrpG87IfhhrFjmWOnE(lhs, rhs))

#define __MW_INSTRUM_NODE_225() ((void)0)


#define __MW_INSTRUM_NODE_226() ((void)0)


#define __MW_INSTRUM_NODE_227() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_228DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_228(...) (__MW_INSTRUM_RECORD_HIT_228DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_228(exp) (__MW_INSTRUM_RECORD_HIT_228DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_230DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_230(...) (__MW_INSTRUM_RECORD_HIT_230DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_230(exp) (__MW_INSTRUM_RECORD_HIT_230DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_232() ((void)0)


#define __MW_INSTRUM_NODE_233() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_234DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_234(...) (__MW_INSTRUM_RECORD_HIT_234DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_234(exp) (__MW_INSTRUM_RECORD_HIT_234DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_236() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_237DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_237(...) (__MW_INSTRUM_RECORD_HIT_237DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_237(exp) (__MW_INSTRUM_RECORD_HIT_237DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_239() ((void)0)


#define __MW_INSTRUM_NODE_240() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_241DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_241(...) (__MW_INSTRUM_RECORD_HIT_241DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_241(exp) (__MW_INSTRUM_RECORD_HIT_241DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_243DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_243(...) (__MW_INSTRUM_RECORD_HIT_243DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_243(exp) (__MW_INSTRUM_RECORD_HIT_243DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_245() ((void)0)


#define __MW_INSTRUM_NODE_246() ((void)0)


#define __MW_INSTRUM_NODE_247() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_248DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_248(...) (__MW_INSTRUM_RECORD_HIT_248DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_248(exp) (__MW_INSTRUM_RECORD_HIT_248DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_250DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_250(...) (__MW_INSTRUM_RECORD_HIT_250DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_250(exp) (__MW_INSTRUM_RECORD_HIT_250DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_252() ((void)0)


#define __MW_INSTRUM_NODE_253() ((void)0)


#define __MW_INSTRUM_NODE_254() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_255DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_255(...) (__MW_INSTRUM_RECORD_HIT_255DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_255(exp) (__MW_INSTRUM_RECORD_HIT_255DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_257() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_258DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_258(...) (__MW_INSTRUM_RECORD_HIT_258DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_258(exp) (__MW_INSTRUM_RECORD_HIT_258DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_260() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_261DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_261(...) (__MW_INSTRUM_RECORD_HIT_261DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_261(exp) (__MW_INSTRUM_RECORD_HIT_261DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#define __MW_INSTRUM_NODE_263() ((void)0)


#define __MW_INSTRUM_NODE_264() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_265DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_265(...) (__MW_INSTRUM_RECORD_HIT_265DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_265(exp) (__MW_INSTRUM_RECORD_HIT_265DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_267DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_267(...) (__MW_INSTRUM_RECORD_HIT_267DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_267(exp) (__MW_INSTRUM_RECORD_HIT_267DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_269XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_269() __MW_INSTRUM_RECORD_HIT_269XZ_xXNlfrpG87IfhhrFjmWOnE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_270EZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_270() __MW_INSTRUM_RECORD_HIT_270EZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_271() ((void)0)


#define __MW_INSTRUM_NODE_272() ((void)0)


#define __MW_INSTRUM_NODE_273() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_274DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_274(...) (__MW_INSTRUM_RECORD_HIT_274DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_274(exp) (__MW_INSTRUM_RECORD_HIT_274DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_276IZ_xXNlfrpG87IfhhrFjmWOnE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_276(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_276IZ_xXNlfrpG87IfhhrFjmWOnE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_279XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_279() __MW_INSTRUM_RECORD_HIT_279XZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_280() ((void)0)


#define __MW_INSTRUM_NODE_281() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_282DZ_xXNlfrpG87IfhhrFjmWOnE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_282(...) (__MW_INSTRUM_RECORD_HIT_282DZ_xXNlfrpG87IfhhrFjmWOnE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_282(exp) (__MW_INSTRUM_RECORD_HIT_282DZ_xXNlfrpG87IfhhrFjmWOnE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_284IZ_xXNlfrpG87IfhhrFjmWOnE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_284(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_284IZ_xXNlfrpG87IfhhrFjmWOnE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_287XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_287() __MW_INSTRUM_RECORD_HIT_287XZ_xXNlfrpG87IfhhrFjmWOnE()

#define __MW_INSTRUM_NODE_288() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_289XZ_xXNlfrpG87IfhhrFjmWOnE(void) { }
#define __MW_INSTRUM_NODE_289() __MW_INSTRUM_RECORD_HIT_289XZ_xXNlfrpG87IfhhrFjmWOnE()


#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#line 1 "C:\\Users\\mahus\\Desktop\\WARG_NEW\\ZP3-Simulator\\sensor_fusion\\Src\\sensor_fusion.cpp"
#line 8 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\ccontrol_functions.h"
#ifndef CCONTROLFUNCTIONS_H
#define CCONTROLFUNCTIONS_H
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\string.h"
#ifndef _INC_STRING
#define _INC_STRING
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H
#line 36
#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2358
#ifndef __nothrow
#define __nothrow __declspec(nothrow)
#endif /* __nothrow */
#line 708
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 16 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 293
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 394
#endif /* CONCURRENCYSAL_H */
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vadefs.h"
#ifndef _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#define _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_EXTRA_DISABLED_WARNINGS */



#ifndef _VCRUNTIME_DISABLED_WARNINGS
#define _VCRUNTIME_DISABLED_WARNINGS _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_DISABLED_WARNINGS */
#line 15
#pragma pack ( push, 8 )
#line 47
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 58
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED

extern "C" { typedef unsigned __int64 uintptr_t; }



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



extern "C" { typedef char *va_list; }

#endif /* _VA_LIST_DEFINED */
#line 155
extern "C" { void __cdecl __va_start(va_list *, ...); } 
#line 173
template < typename _Ty >
        struct __vcrt_va_list_is_reference
        {
            enum : bool { __the_value = false };
        };

template < typename _Ty >
        struct __vcrt_va_list_is_reference < _Ty & >
        {
            enum : bool { __the_value = true };
        };

template < typename _Ty >
        struct __vcrt_va_list_is_reference < _Ty && >
        {
            enum : bool { __the_value = true };
        };

template < typename _Ty >
        struct __vcrt_assert_va_start_is_not_reference
        {
            static_assert ( ! __vcrt_va_list_is_reference < _Ty > :: __the_value,
                "va_start argument must not have reference type and must not be parenthesized" );
        };
#line 207
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 96
__pragma( pack ( push, 8 )) 
#line 193
typedef unsigned __int64 size_t; 
extern "C" { typedef __int64 ptrdiff_t; }
extern "C" { typedef __int64 intptr_t; }
#line 203
extern "C" { typedef bool __vcrt_bool; }
#line 213
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */
#line 252
template < typename _CountofType, size_t _SizeOfArray >
        char ( * __countof_helper ( __unaligned _CountofType ( & _Array ) [ _SizeOfArray ] ) ) [ _SizeOfArray ];
#line 342
extern "C" { void __cdecl __security_init_cookie(); } 
#line 351
extern "C" { void __cdecl __security_check_cookie(uintptr_t _StackCookie); } 
extern "C" { __declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); } 



extern "C" uintptr_t __security_cookie; 
#line 368
#endif /* _VCRUNTIME_H */
#line 29 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt.h"
#ifndef _UCRT_EXTRA_DISABLED_WARNINGS
#define _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_EXTRA_DISABLED_WARNINGS */
#line 44
#ifndef _UCRT_DISABLED_WARNINGS
#define _UCRT_DISABLED_WARNINGS 4324 _UCRT_DISABLED_WARNING_4412 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_DISABLED_WARNINGS */
#line 364 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 96
#ifndef _ACRTIMP_ALT
#define _ACRTIMP_ALT _ACRTIMP
#endif /* _ACRTIMP_ALT */
#line 201
template < bool _Enable, typename _Ty >
    struct _CrtEnableIf;

template < typename _Ty >
    struct _CrtEnableIf < true, _Ty >
    {
        typedef _Ty _Type;
    };




extern "C" { typedef bool __crt_bool; }
#line 231
#ifndef _STATIC_ASSERT
#define _STATIC_ASSERT(expr) static_assert((expr), #expr)
#endif /* _STATIC_ASSERT */
#line 273
#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
#line 321
#ifndef _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#endif /* _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE */
#line 357
extern "C" { __declspec(dllimport) void __cdecl _invalid_parameter_noinfo(); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); } 


extern "C" { 
#line 360
__declspec(noreturn) 
__declspec(dllimport) void __cdecl _invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); } 
#line 484
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif /* __STDC_WANT_SECURE_LIB__ */
#line 579
#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
#line 590
extern "C" { typedef int errno_t; }
extern "C" { typedef unsigned short wint_t; }
extern "C" { typedef unsigned short wctype_t; }
extern "C" { typedef long __time32_t; }
extern "C" { typedef __int64 __time64_t; }
#line 601
extern "C" { typedef 
#line 596
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; }
#line 607
extern "C" { typedef 
#line 603
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; }

extern "C" { typedef __crt_locale_pointers *_locale_t; }
#line 615
extern "C" { typedef 
#line 611
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; }

extern "C" { typedef _Mbstatet mbstate_t; }
#line 631
extern "C" { typedef __time64_t time_t; }




#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#endif /* _TIME_T_DEFINED */


extern "C" { typedef size_t rsize_t; }
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\errno.h"
#ifndef _INC_ERRNO
#define _INC_ERRNO
#line 2058 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt.h"
__pragma( pack ( pop )) 


#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\errno.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




extern "C" { __declspec(dllimport) int *__cdecl _errno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_errno(int _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); } 

extern "C" { __declspec(dllimport) unsigned long *__cdecl __doserrno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); } 
#line 137
#endif /* _INC_ERRNO */
#line 134
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime_string.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)



__pragma( pack ( push, 8 )) 




extern "C" { 
#line 21
[[nodiscard]] const void *__cdecl 
memchr(const void * _Buf, int _Val, size_t _MaxCount); } 
#line 29
extern "C" { 
#line 28
[[nodiscard]] int __cdecl 
memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); } 
#line 43
extern "C" { void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); } 
#line 50
extern "C" { void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); } 
#line 63
extern "C" { void *__cdecl memset(void * _Dst, int _Val, size_t _Size); } 
#line 70
extern "C" { 
#line 69
[[nodiscard]] const char *__cdecl 
strchr(const char * _Str, int _Val); } 
#line 76
extern "C" { 
#line 75
[[nodiscard]] const char *__cdecl 
strrchr(const char * _Str, int _Ch); } 
#line 82
extern "C" { 
#line 81
[[nodiscard]] const char *__cdecl 
strstr(const char * _Str, const char * _SubStr); } 
#line 89
extern "C" { 
#line 87
[[nodiscard]] const __wchar_t *__cdecl 

wcschr(const __wchar_t * _Str, __wchar_t _Ch); } 
#line 95
extern "C" { 
#line 94
[[nodiscard]] const __wchar_t *__cdecl 
wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); } 
#line 102
extern "C" { 
#line 100
[[nodiscard]] const __wchar_t *__cdecl 

wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); } 
#line 109
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_memcpy_s.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 

#ifndef _CRT_MEMCPY_S_INLINE
#define _CRT_MEMCPY_S_INLINE static __inline
#endif /* _CRT_MEMCPY_S_INLINE */
#line 39
extern "C" { static __inline errno_t __cdecl memcpy_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ 
if (_SourceSize == (0)) 
{ 
return 0; 
}  

{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
{ 
memset(_Destination, 0, _DestinationSize); 

{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } ; 


return 22; 
}  
memcpy(_Destination, _Source, _SourceSize); 
return 0; 
} } 


extern "C" { static __inline errno_t __cdecl memmove_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ 
if (_SourceSize == (0)) 
{ 
return 0; 
}  

{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } ; 

memmove(_Destination, _Source, _SourceSize); 
return 0; 
} } 
#line 92
#pragma warning(pop)
__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_memory.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 




extern "C" { __declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); } 
#line 35
extern "C" { __declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); } 
#line 83
extern "C" { 
#line 82
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); } 
#line 91
extern "C" { 
#line 90
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); } 
#line 104
inline void *__cdecl memchr(void *
_Pv, int 
_C, size_t 
_N) 

{ 
const void *const _Pvc = _Pv; 
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
} 
#line 118
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 
#line 32
extern "C" { __declspec(dllimport) errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); } 
#line 39
extern "C" { __declspec(dllimport) errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); } 
#line 46
extern "C" { __declspec(dllimport) errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); } 
#line 54
extern "C" { __declspec(dllimport) errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); } 
#line 62
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); } 
#line 83
extern "C" { __declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); } 
#line 93
template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }
#line 100
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); } 
#line 108
extern "C" { __declspec(dllimport) int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); } 




template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }
#line 119
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); } 
#line 126
extern "C" { __declspec(dllimport) size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); } 
#line 132
extern "C" { __declspec(dllimport) size_t __cdecl wcslen(const __wchar_t * _String); } 
#line 145
extern "C" { __declspec(dllimport) size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); } 
#line 161
extern "C" { static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
_Source, size_t 
_MaxCount) 

{ 
return (_Source == (0)) ? (0) : wcsnlen(_Source, _MaxCount); 
} } 



template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }
#line 178
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); } 
#line 187
extern "C" { __declspec(dllimport) int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 193
template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }
#line 200
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); } 
#line 209
extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); } 
#line 215
extern "C" { __declspec(dllimport) size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); } 
#line 221
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); } 
#line 239
extern "C" { static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
_String, const __wchar_t *const 
_Delimiter) 

{ 
return wcstok(_String, _Delimiter, 0); 
} } 
#line 252
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
wcstok(__wchar_t *
_String, const __wchar_t *
_Delimiter) throw() 

{ 
return wcstok(_String, _Delimiter, 0); 
} 
#line 268
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcserror(int _ErrorNumber); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); } 
#line 279
template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }
#line 288
extern "C" { __declspec(dllimport) __wchar_t *__cdecl __wcserror(const __wchar_t * _String); } 



extern "C" { __declspec(dllimport) errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); } 
#line 298
template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 304
extern "C" { __declspec(dllimport) int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); } 




extern "C" { __declspec(dllimport) int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); } 
#line 315
extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 321
extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 328
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); } 
#line 335
template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }
#line 342
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); } 
#line 350
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsrev(__wchar_t * _String); } 



extern "C" { __declspec(dllimport) errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); } 
#line 360
template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }
#line 366
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); } 
#line 373
extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); } 




template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcslwr(__wchar_t * _String); } 
#line 389
extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); } 
#line 395
template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }
#line 401
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); } 
#line 409
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); } 




template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsupr(__wchar_t * _String); } 
#line 425
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); } 
#line 431
template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }
#line 437
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); } 
#line 446
extern "C" { __declspec(dllimport) size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); } 
#line 454
extern "C" { __declspec(dllimport) size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 462
extern "C" { __declspec(dllimport) int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 468
extern "C" { __declspec(dllimport) int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); } 
#line 475
extern "C" { __declspec(dllimport) int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 481
extern "C" { __declspec(dllimport) int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); } 
#line 488
extern "C" { __declspec(dllimport) int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 495
extern "C" { __declspec(dllimport) int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 503
extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 510
extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 529
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
{ 
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
} 


inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
{ 
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
} 


inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
{ 
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
} 



inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
{ 
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
} 
#line 570
extern "C" { 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details" ".")) 
__declspec(dllimport) __wchar_t *__cdecl wcsdup(const __wchar_t * _String); } 
#line 582
extern "C" { 
#line 581
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 588
extern "C" { 
#line 587
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 596
extern "C" { 
#line 594
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for detail" "s.")) 

__declspec(dllimport) __wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); } 
#line 604
extern "C" { 
#line 602
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcsrev(__wchar_t * _String); } 
#line 610
extern "C" { 
#line 608
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); } 
#line 617
extern "C" { 
#line 615
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcslwr(__wchar_t * _String); } 
#line 623
extern "C" { 
#line 621
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcsupr(__wchar_t * _String); } 




extern "C" { 
#line 627
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 637
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 32
extern "C" { __declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); } 
#line 39
extern "C" { __declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); } 
#line 46
extern "C" { __declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); } 
#line 52
extern "C" { __declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); } 
#line 60
extern "C" { __declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); } 
#line 68
extern "C" { __declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); } 
#line 76
extern "C" { __declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); } 
#line 83
template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }
#line 91
extern "C" { char *__cdecl strcat(char * _Destination, const char * _Source); } 
#line 100
extern "C" { int __cdecl strcmp(const char * _Str1, const char * _Str2); } 
#line 106
extern "C" { __declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); } 
#line 112
extern "C" { __declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); } 
#line 118
extern "C" { __declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); } 
#line 124
template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }
#line 130
extern "C" { char *__cdecl strcpy(char * _Destination, const char * _Source); } 
#line 137
extern "C" { __declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); } 
#line 148
extern "C" { __declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); } 
#line 159
extern "C" { __declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); } 
#line 170
template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 178
extern "C" { __declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); } 



template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 189
extern "C" { __declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); } 
#line 195
extern "C" { __declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); } 
#line 201
extern "C" { __declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); } 
#line 208
extern "C" { __declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); } 
#line 215
extern "C" { size_t __cdecl strlen(const char * _Str); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); } 




template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) char *__cdecl _strlwr(char * _String); } 
#line 236
extern "C" { __declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); } 
#line 242
template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }
#line 248
extern "C" { __declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); } 
#line 255
template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }
#line 262
extern "C" { __declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); } 
#line 271
extern "C" { __declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); } 
#line 278
extern "C" { __declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 285
extern "C" { __declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 293
extern "C" { __declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 300
extern "C" { __declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 308
extern "C" { __declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 315
extern "C" { __declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 322
extern "C" { __declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); } 




template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }
#line 334
extern "C" { __declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); } 
#line 351
extern "C" { __declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); } 
#line 367
extern "C" { static __inline size_t __cdecl strnlen_s(const char *
_String, size_t 
_MaxCount) 

{ 
return (_String == (0)) ? (0) : strnlen(_String, _MaxCount); 
} } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); } 
#line 385
template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }
#line 392
extern "C" { __declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); } 
#line 401
extern "C" { __declspec(dllimport) const char *__cdecl strpbrk(const char * _Str, const char * _Control); } 




extern "C" { __declspec(dllimport) char *__cdecl _strrev(char * _Str); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); } 
#line 417
template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }
#line 423
extern "C" { char *__cdecl _strset(char * _Destination, int _Value); } 
#line 430
extern "C" { __declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); } 
#line 436
extern "C" { __declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); } 
#line 442
extern "C" { __declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); } 




template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) char *__cdecl _strupr(char * _String); } 
#line 458
extern "C" { __declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); } 
#line 464
template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }
#line 470
extern "C" { __declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); } 
#line 479
extern "C" { __declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); } 
#line 487
extern "C" { __declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 500
inline char *__cdecl strchr(char *const _String, const int _Ch) 
{ 
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
} 


inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
{ 
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
} 


inline char *__cdecl strrchr(char *const _String, const int _Ch) 
{ 
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
} 


inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
{ 
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
} 
#line 532
extern "C" { 
#line 531
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strdup(const char * _String); } 
#line 539
extern "C" { 
#line 538
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); } 
#line 545
extern "C" { 
#line 544
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); } 
#line 551
extern "C" { 
#line 550
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strlwr(char * _String); } 




extern "C" { 
#line 555
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 563
extern "C" { 
#line 562
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); } 
#line 570
extern "C" { 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strrev(char * _String); } 




extern "C" { 
#line 574
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details" ".")) char *__cdecl 
strset(char * _String, int _Value); } 




extern "C" { 
#line 579
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strupr(char * _String); } 
#line 592
#endif /* _INC_STRING */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdio.h"
#ifndef _INC_STDIO
#define _INC_STDIO
#line 588 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\string.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_stdio_config.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 72
#pragma detect_mismatch("_CRT_STDIO_ISO_WIDE_SPECIFIERS", "0")
#line 89
extern "C" { __declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options() 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} } 
#line 99
extern "C" { __declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options() 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} } 
#line 129
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 26
#ifndef _FILE_DEFINED
#define _FILE_DEFINED



extern "C" { typedef 
#line 28
struct _iobuf { 

void *_Placeholder; 
} FILE; }
#endif /* _FILE_DEFINED */

extern "C" { __declspec(dllimport) FILE *__cdecl __acrt_iob_func(unsigned _Ix); } 
#line 51
extern "C" { __declspec(dllimport) wint_t __cdecl fgetwc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwchar(); } 


extern "C" { __declspec(dllimport) wint_t __cdecl fputwc(__wchar_t _Character, FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _fputwchar(__wchar_t _Character); } 




extern "C" { __declspec(dllimport) wint_t __cdecl getwc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl getwchar(); } 




extern "C" { __declspec(dllimport) __wchar_t *__cdecl fgetws(__wchar_t * _Buffer, int _BufferCount, FILE * _Stream); } 
#line 86
extern "C" { __declspec(dllimport) int __cdecl fputws(const __wchar_t * _Buffer, FILE * _Stream); } 
#line 93
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _getws_s(__wchar_t * _Buffer, size_t _BufferCount); } 




template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _getws_s ( _Buffer, _Size ); }
#line 105
extern "C" { __declspec(dllimport) wint_t __cdecl putwc(__wchar_t _Character, FILE * _Stream); } 
#line 111
extern "C" { __declspec(dllimport) wint_t __cdecl putwchar(__wchar_t _Character); } 




extern "C" { __declspec(dllimport) int __cdecl _putws(const __wchar_t * _Buffer); } 




extern "C" { __declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); } 
#line 127
extern "C" { __declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const __wchar_t * _Mode); } 
#line 133
extern "C" { __declspec(dllimport) FILE *__cdecl _wfopen(const __wchar_t * _FileName, const __wchar_t * _Mode); } 
#line 139
extern "C" { __declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode); } 
#line 147
extern "C" { __declspec(dllimport) FILE *__cdecl _wfreopen(const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); } 
#line 154
extern "C" { __declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); } 
#line 162
extern "C" { __declspec(dllimport) FILE *__cdecl _wfsopen(const __wchar_t * _FileName, const __wchar_t * _Mode, int _ShFlag); } 
#line 168
extern "C" { __declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); } 
#line 175
extern "C" { __declspec(dllimport) FILE *__cdecl _wpopen(const __wchar_t * _Command, const __wchar_t * _Mode); } 
#line 182
extern "C" { __declspec(dllimport) int __cdecl _wremove(const __wchar_t * _FileName); } 
#line 190
extern "C" { __declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wtempnam(const __wchar_t * _Directory, const __wchar_t * _FilePrefix); } 
#line 199
extern "C" { __declspec(dllimport) errno_t __cdecl _wtmpnam_s(__wchar_t * _Buffer, size_t _BufferCount); } 




template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wtmpnam_s ( _Buffer, _Size ); }
#line 210
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wtmpnam(__wchar_t * _Buffer); } 
#line 224
extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _fputwc_nolock(__wchar_t _Character, FILE * _Stream); } 
#line 235
extern "C" { __declspec(dllimport) wint_t __cdecl _getwc_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _putwc_nolock(__wchar_t _Character, FILE * _Stream); } 
#line 246
extern "C" { __declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); } 
#line 272
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 281
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 290
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 299
extern "C" { __inline int __cdecl _vfwprintf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vfwprintf(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfwprintf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 
#line 345
extern "C" { __inline int __cdecl vfwprintf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
} } 
#line 361
extern "C" { __inline int __cdecl _vfwprintf_p_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfwprintf_p(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vwprintf(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwprintf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 
#line 433
extern "C" { __inline int __cdecl vwprintf_s(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 
#line 448
extern "C" { __inline int __cdecl _vwprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwprintf_p(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _fwprintf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fwprintf(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fwprintf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 533
extern "C" { __inline int __cdecl fwprintf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 553
extern "C" { __inline int __cdecl _fwprintf_p_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fwprintf_p(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl wprintf(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wprintf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 645
extern "C" { __inline int __cdecl wprintf_s(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 664
extern "C" { __inline int __cdecl _wprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wprintf_p(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 705
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 714
extern "C" { __inline int __cdecl _vfwscanf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} } 



extern "C" { __inline int __cdecl vfwscanf(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfwscanf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} } 
#line 764
extern "C" { __inline int __cdecl vfwscanf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vwscanf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vwscanf(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwscanf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 
#line 822
extern "C" { __inline int __cdecl vwscanf_s(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 
#line 837
extern "C" { __inline int __cdecl _fwscanf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fwscanf(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fwscanf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 895
extern "C" { __inline int __cdecl fwscanf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 915
extern "C" { __inline int __cdecl _wscanf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl wscanf(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wscanf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 970
extern "C" { __inline int __cdecl wscanf_s(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1006
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1017
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1028
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1040
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1051
extern "C" { __inline int __cdecl _vsnwprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnwprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnwprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} } 


extern "C" { __inline int __cdecl _snwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, ...); } extern "C" { __inline int __cdecl _vsnwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, va_list _Args); } 
#line 1120
extern "C" { __inline int __cdecl _vsnwprintf(__wchar_t *
_Buffer, size_t 
_BufferCount, const __wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Buffer ) [ _Size ], size_t _BufferCount, wchar_t const * _Format, va_list _ArgList ) throw ( ) { return _vsnwprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1145
extern "C" { __inline int __cdecl _vswprintf_c_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vswprintf_c(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
} } 




extern "C" { __inline int __cdecl __vswprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl vswprintf(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 
#line 1268
extern "C" { __inline int __cdecl vswprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, va_list _ArgList ) throw ( ) { return vswprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1294
extern "C" { __inline int __cdecl _vswprintf_p_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vswprintf_p(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vscwprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vscwprintf(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_l(_Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vscwprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vscwprintf_p(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_p_l(_Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl __swprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl swprintf(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __inline int __cdecl __swprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, ...); } extern "C" { __inline int __cdecl __vswprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, va_list _Args); } 
#line 1484
extern "C" { __inline int __cdecl _swprintf(__wchar_t * _Buffer, const __wchar_t * _Format, ...); } extern "C" { __inline int __cdecl _vswprintf(__wchar_t * _Buffer, const __wchar_t * _Format, va_list _Args); } 
#line 1493
extern "C" { __inline int __cdecl _swprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1515
extern "C" { __inline int __cdecl swprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return vswprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1544
extern "C" { __inline int __cdecl _swprintf_p_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_p(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_c_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_c(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf(__wchar_t *
_Buffer, size_t 
_BufferCount, const __wchar_t *
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Buffer ) [ _Size ], size_t _BufferCount, wchar_t const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return _vsnwprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1721
extern "C" { __inline int __cdecl _scwprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _scwprintf(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _scwprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _scwprintf_p(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1797
#pragma warning(push)
#pragma warning(disable: 4141 6054)



__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
swprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) throw() 

{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 

__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
vswprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, va_list 
_ArgList) throw() 

{ 
return vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
} 

__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
_swprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) throw() 

{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 

__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
_vswprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) throw() 

{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 



#pragma warning(pop)
#line 1871
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1882
extern "C" { __inline int __cdecl _vswscanf_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 




extern "C" { __inline int __cdecl vswscanf(const __wchar_t *
_Buffer, const __wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswscanf_s_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 
#line 1935
extern "C" { __inline int __cdecl vswscanf_s(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} } 




template < size_t _Size > inline int __cdecl vswscanf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, va_list _ArgList ) throw ( ) { return vswscanf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1960
extern "C" { __inline int __cdecl _vsnwscanf_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} } 




extern "C" { __inline int __cdecl _vsnwscanf_s_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} } 




extern "C" { __inline int __cdecl _swscanf_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl swscanf(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swscanf_s_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2059
extern "C" { __inline int __cdecl swscanf_s(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2080
extern "C" { __inline int __cdecl _snwscanf_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwscanf(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwscanf_s_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwscanf_s(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2169
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 73
extern "C" { typedef __int64 fpos_t; }
#line 80
extern "C" { __declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); } 
#line 96
extern "C" { __declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _Stream); } 
#line 102
extern "C" { __declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); } 
#line 110
extern "C" { __declspec(dllimport) size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 119
extern "C" { __declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); } 
#line 127
extern "C" { __declspec(dllimport) char *__cdecl gets_s(char * _Buffer, rsize_t _Size); } 
#line 133
extern "C" { __declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _Stream); } 
#line 139
extern "C" { __declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); } 
#line 146
extern "C" { __declspec(dllimport) void __cdecl clearerr(FILE * _Stream); } 
#line 152
extern "C" { __declspec(dllimport) int __cdecl fclose(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _fcloseall(); } 


extern "C" { __declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); } 
#line 166
extern "C" { __declspec(dllimport) int __cdecl feof(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl ferror(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl fflush(FILE * _Stream); } 
#line 182
extern "C" { __declspec(dllimport) int __cdecl fgetc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _fgetchar(); } 



extern "C" { __declspec(dllimport) int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); } 
#line 198
extern "C" { __declspec(dllimport) char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); } 
#line 205
extern "C" { __declspec(dllimport) int __cdecl _fileno(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _flushall(); } 


extern "C" { __declspec(dllimport) FILE *__cdecl fopen(const char * _FileName, const char * _Mode); } 
#line 221
extern "C" { __declspec(dllimport) int __cdecl fputc(int _Character, FILE * _Stream); } 
#line 227
extern "C" { __declspec(dllimport) int __cdecl _fputchar(int _Character); } 
#line 233
extern "C" { __declspec(dllimport) int __cdecl fputs(const char * _Buffer, FILE * _Stream); } 
#line 239
extern "C" { __declspec(dllimport) size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 248
extern "C" { __declspec(dllimport) FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); } 
#line 255
extern "C" { __declspec(dllimport) FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); } 
#line 263
extern "C" { __declspec(dllimport) int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); } 
#line 270
extern "C" { __declspec(dllimport) int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); } 
#line 278
extern "C" { __declspec(dllimport) int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); } 
#line 286
extern "C" { __declspec(dllimport) long __cdecl ftell(FILE * _Stream); } 
#line 292
extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _Stream); } 




extern "C" { __declspec(dllimport) size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 306
extern "C" { __declspec(dllimport) int __cdecl getc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl getchar(); } 


extern "C" { __declspec(dllimport) int __cdecl _getmaxstdio(); } 

template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return gets_s ( _Buffer, _Size ); }




extern "C" { __declspec(dllimport) int __cdecl _getw(FILE * _Stream); } 



extern "C" { __declspec(dllimport) void __cdecl perror(const char * _ErrorMessage); } 
#line 333
extern "C" { __declspec(dllimport) int __cdecl _pclose(FILE * _Stream); } 




extern "C" { __declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); } 
#line 347
extern "C" { __declspec(dllimport) int __cdecl putc(int _Character, FILE * _Stream); } 
#line 353
extern "C" { __declspec(dllimport) int __cdecl putchar(int _Character); } 




extern "C" { __declspec(dllimport) int __cdecl puts(const char * _Buffer); } 
#line 364
extern "C" { __declspec(dllimport) int __cdecl _putw(int _Word, FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl remove(const char * _FileName); } 




extern "C" { __declspec(dllimport) int __cdecl rename(const char * _OldFileName, const char * _NewFileName); } 




extern "C" { __declspec(dllimport) int __cdecl _unlink(const char * _FileName); } 
#line 386
extern "C" { 
#line 385
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details" ".")) 
__declspec(dllimport) int __cdecl unlink(const char * _FileName); } 
#line 392
extern "C" { __declspec(dllimport) void __cdecl rewind(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _rmtmp(); } 


extern "C" { __declspec(dllimport) void __cdecl setbuf(FILE * _Stream, char * _Buffer); } 
#line 406
extern "C" { __declspec(dllimport) int __cdecl _setmaxstdio(int _Maximum); } 
#line 412
extern "C" { __declspec(dllimport) int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); } 
#line 425
extern "C" { __declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); } 
#line 435
extern "C" { __declspec(dllimport) FILE *__cdecl tmpfile(); } 

template < size_t _Size > inline errno_t __cdecl tmpnam_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return tmpnam_s ( _Buffer, _Size ); }
#line 443
extern "C" { __declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); } 
#line 451
extern "C" { __declspec(dllimport) int __cdecl ungetc(int _Character, FILE * _Stream); } 
#line 463
extern "C" { __declspec(dllimport) void __cdecl _lock_file(FILE * _Stream); } 



extern "C" { __declspec(dllimport) void __cdecl _unlock_file(FILE * _Stream); } 
#line 473
extern "C" { __declspec(dllimport) int __cdecl _fclose_nolock(FILE * _Stream); } 
#line 479
extern "C" { __declspec(dllimport) int __cdecl _fflush_nolock(FILE * _Stream); } 
#line 485
extern "C" { __declspec(dllimport) int __cdecl _fgetc_nolock(FILE * _Stream); } 
#line 491
extern "C" { __declspec(dllimport) int __cdecl _fputc_nolock(int _Character, FILE * _Stream); } 
#line 497
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 506
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 515
extern "C" { __declspec(dllimport) int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); } 
#line 522
extern "C" { __declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); } 
#line 529
extern "C" { __declspec(dllimport) long __cdecl _ftell_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 547
extern "C" { __declspec(dllimport) int __cdecl _getc_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _putc_nolock(int _Character, FILE * _Stream); } 
#line 558
extern "C" { __declspec(dllimport) int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); } 
#line 589
extern "C" { __declspec(dllimport) int *__cdecl __p__commode(); } 
#line 609
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 617
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 626
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 635
extern "C" { __inline int __cdecl _vfprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vfprintf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 
#line 681
extern "C" { __inline int __cdecl vfprintf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
} } 
#line 697
extern "C" { __inline int __cdecl _vfprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfprintf_p(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vprintf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 
#line 769
extern "C" { __inline int __cdecl vprintf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 
#line 784
extern "C" { __inline int __cdecl _vprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _fprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fprintf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); } 



extern "C" { __declspec(dllimport) int __cdecl _get_printf_count_output(); } 


extern "C" { __inline int __cdecl _fprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 875
extern "C" { __inline int __cdecl fprintf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 895
extern "C" { __inline int __cdecl _fprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fprintf_p(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _printf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl printf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _printf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 987
extern "C" { __inline int __cdecl printf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1006
extern "C" { __inline int __cdecl _printf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _printf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1046
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); } 
#line 1055
extern "C" { __inline int __cdecl _vfscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} } 



extern "C" { __inline int __cdecl vfscanf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} } 
#line 1106
extern "C" { __inline int __cdecl vfscanf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
} } 
#line 1122
extern "C" { __inline int __cdecl _vscanf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vscanf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vscanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 
#line 1165
extern "C" { __inline int __cdecl vscanf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 
#line 1180
extern "C" { __inline int __cdecl _fscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fscanf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1238
extern "C" { __inline int __cdecl fscanf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1258
extern "C" { __inline int __cdecl _scanf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl scanf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1313
extern "C" { __inline int __cdecl scanf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1339
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1349
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1359
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1370
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1381
extern "C" { __inline int __cdecl _vsnprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 
#line 1429
extern "C" { __inline int __cdecl vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} } 




extern "C" { __inline int __cdecl vsprintf(char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vsprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 
#line 1503
extern "C" { __inline int __cdecl vsprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Buffer ) [ _Size ], char const * _Format, va_list _ArgList ) throw ( ) { return vsprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1529
extern "C" { __inline int __cdecl _vsprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vsnprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, va_list _ArgList ) throw ( ) { return _vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1616
extern "C" { __inline int __cdecl vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl vsnprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, va_list _ArgList ) throw ( ) { return vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1643
extern "C" { __inline int __cdecl _vscprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 



extern "C" { __inline int __cdecl _vscprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_l(_Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vscprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 



extern "C" { __inline int __cdecl _vscprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_p_l(_Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vsnprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _sprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl sprintf(char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); } extern "C" { __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); } 
#line 1792
extern "C" { __inline int __cdecl _sprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1815
extern "C" { __inline int __cdecl sprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Buffer ) [ _Size ], char const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return vsprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1844
extern "C" { __inline int __cdecl _sprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _sprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1919
extern "C" { __inline int __cdecl snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); } extern "C" { __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); } 
#line 1968
extern "C" { __inline int __cdecl _snprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return _vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 2059
extern "C" { __inline int __cdecl _scprintf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scprintf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scprintf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscprintf_p(_Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2133
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 2143
extern "C" { __inline int __cdecl _vsscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 



extern "C" { __inline int __cdecl vsscanf(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vsscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 




#pragma warning(push)
#pragma warning(disable: 6530)


extern "C" { __inline int __cdecl vsscanf_s(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl vsscanf_s ( char const ( & _Buffer ) [ _Size ], char const * _Format, va_list _ArgList ) throw ( ) { return vsscanf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 2216
#pragma warning(pop)




extern "C" { __inline int __cdecl _sscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl sscanf(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _sscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2279
extern "C" { __inline int __cdecl sscanf_s(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = vsscanf_s(_Buffer, _Format, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




#pragma warning(push)
#pragma warning(disable: 6530)


extern "C" { __inline int __cdecl _snscanf_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _snscanf(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snscanf_s_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _snscanf_s(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


#pragma warning(pop)
#line 2421
extern "C" { 
#line 2420
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); } 
#line 2430
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for deta" "ils.")) __declspec(dllimport) int __cdecl fcloseall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details" ".")) __declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fgetchar(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details" ".")) __declspec(dllimport) int __cdecl fileno(FILE * _Stream); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl flushall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fputchar(int _Ch); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw(FILE * _Stream); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw(int _Ch, FILE * _Stream); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details." "")) __declspec(dllimport) int __cdecl rmtmp(); } 
#line 2448
#endif /* _INC_STDIO */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdlib.h"
#ifndef _INC_STDLIB
#define _INC_STDLIB
#line 2445 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdio.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_malloc.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 59
extern "C" { 
#line 58
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_calloc_base(size_t _Count, size_t _Size); } 
#line 66
extern "C" { 
#line 65
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
calloc(size_t _Count, size_t _Size); } 
#line 72
extern "C" { __declspec(dllimport) int __cdecl _callnewh(size_t _Size); } 
#line 78
extern "C" { 
#line 77
__declspec(dllimport) __declspec(allocator) void *__cdecl 
_expand(void * _Block, size_t _Size); } 
#line 84
extern "C" { 
#line 83
__declspec(dllimport) void __cdecl 
_free_base(void * _Block); } 




extern "C" { 
#line 88
__declspec(dllimport) void __cdecl 
free(void * _Block); } 
#line 95
extern "C" { 
#line 94
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_malloc_base(size_t _Size); } 
#line 101
extern "C" { 
#line 100
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
malloc(size_t _Size); } 
#line 107
extern "C" { 
#line 106
__declspec(dllimport) size_t __cdecl 
_msize_base(void * _Block); } 
#line 113
extern "C" { 
#line 112
__declspec(dllimport) size_t __cdecl 
_msize(void * _Block); } 
#line 119
extern "C" { 
#line 118
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_realloc_base(void * _Block, size_t _Size); } 
#line 126
extern "C" { 
#line 125
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
realloc(void * _Block, size_t _Size); } 
#line 133
extern "C" { 
#line 132
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc_base(void * _Block, size_t _Count, size_t _Size); } 
#line 141
extern "C" { 
#line 140
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc(void * _Block, size_t _Count, size_t _Size); } 
#line 148
extern "C" { 
#line 147
__declspec(dllimport) void __cdecl 
_aligned_free(void * _Block); } 
#line 154
extern "C" { 
#line 153
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_malloc(size_t _Size, size_t _Alignment); } 
#line 161
extern "C" { 
#line 160
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); } 
#line 169
extern "C" { 
#line 168
__declspec(dllimport) size_t __cdecl 
_aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); } 
#line 177
extern "C" { 
#line 176
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); } 
#line 186
extern "C" { 
#line 185
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); } 
#line 196
extern "C" { 
#line 195
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); } 
#line 204
extern "C" { 
#line 203
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); } 
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stddef.h"
#ifndef _INC_STDDEF
#define _INC_STDDEF
#line 232 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stddef.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




namespace std { 

typedef decltype(nullptr) nullptr_t; 
}

using std::nullptr_t;
#line 35
extern "C" { __declspec(dllimport) int *__cdecl _errno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_errno(int _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); } 
#line 55
extern "C" { __declspec(dllimport) extern unsigned long __cdecl __threadid(); } 

extern "C" { __declspec(dllimport) extern uintptr_t __cdecl __threadhandle(); } 
#line 64
#endif /* _INC_STDDEF */
#line 61
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_search.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 


extern "C" { typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); }
extern "C" { typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); }
#line 30
extern "C" { __declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 39
extern "C" { __declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 52
extern "C" { __declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 60
extern "C" { __declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 68
extern "C" { __declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 78
extern "C" { __declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 87
extern "C" { __declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 97
extern "C" { __declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 195
extern "C" { 
#line 194
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details." "")) 
__declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 204
extern "C" { 
#line 203
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 216
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 54
extern "C" { __declspec(dllimport) errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 61
template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Buffer, _Size, _Radix ); }
#line 68
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); } 
#line 77
extern "C" { __declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 84
template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Buffer, _Size, _Radix ); }
#line 91
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); } 
#line 99
extern "C" { __declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 106
template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Buffer, _Size, _Radix ); }
#line 113
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); } 
#line 121
extern "C" { __declspec(dllimport) double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); } 
#line 127
extern "C" { __declspec(dllimport) double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); } 
#line 134
extern "C" { __declspec(dllimport) long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 141
extern "C" { __declspec(dllimport) long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 149
extern "C" { __declspec(dllimport) __int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 156
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 164
extern "C" { __declspec(dllimport) unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 171
extern "C" { __declspec(dllimport) unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 179
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 186
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 194
extern "C" { __declspec(dllimport) long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); } 
#line 200
extern "C" { __declspec(dllimport) long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); } 
#line 207
extern "C" { __declspec(dllimport) float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); } 
#line 213
extern "C" { __declspec(dllimport) float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); } 
#line 220
extern "C" { __declspec(dllimport) double __cdecl _wtof(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 231
extern "C" { __declspec(dllimport) int __cdecl _wtoi(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 242
extern "C" { __declspec(dllimport) long __cdecl _wtol(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 253
extern "C" { __declspec(dllimport) __int64 __cdecl _wtoll(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) __int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 264
extern "C" { __declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 272
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); } 
#line 279
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 287
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); } 
#line 294
extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 305
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 312
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 320
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 327
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 339
extern "C" { __declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); } 
#line 348
extern "C" { __declspec(dllimport) errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); } 
#line 357
template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Drive, wchar_t const * _Dir, wchar_t const * _Filename, wchar_t const * _Ext ) throw ( ) { return _wmakepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 366
extern "C" { __declspec(dllimport) void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); } 
#line 375
extern "C" { __declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); } 




extern "C" { __declspec(dllimport) void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); } 
#line 388
extern "C" { __declspec(dllimport) errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); } 
#line 400
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( wchar_t const * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 409
extern "C" { __declspec(dllimport) errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); } 
#line 418
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); } 
#line 424
extern "C" { __declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); } 
#line 431
template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _RequiredCount, wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _VarName ) throw ( ) { return _wgetenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }
#line 440
extern "C" { __declspec(dllimport) int __cdecl _wputenv(const __wchar_t * _EnvString); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); } 
#line 457
template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( wchar_t const * _Filename, wchar_t const * _VarName, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _VarName, _ResultPath, _Size ); }
#line 464
extern "C" { __declspec(dllimport) void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); } 
#line 471
extern "C" { __declspec(dllimport) int __cdecl _wsystem(const __wchar_t * _Command); } 
#line 479
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

__pragma( pack ( push, 8 )) 
#line 71
#ifndef RSIZE_MAX
#define RSIZE_MAX (SIZE_MAX >> 1)
#endif /* RSIZE_MAX */


__pragma( pack ( pop )) 

#pragma warning(pop)
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 



#ifndef _countof
#define _countof __crt_countof
#endif /* _countof */
#line 38
extern "C" { __declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); } 
#line 56
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl abort(); } 
#line 67
extern "C" { __declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); } 
#line 74
#ifndef _CRT_ONEXIT_T_DEFINED
#define _CRT_ONEXIT_T_DEFINED

extern "C" { typedef int (__cdecl *_onexit_t)(void); }



#endif /* _CRT_ONEXIT_T_DEFINED */
#line 144
extern "C" { int __cdecl atexit(void (__cdecl *)(void)); } 
extern "C" { _onexit_t __cdecl _onexit(_onexit_t _Func); } 


extern "C" { int __cdecl at_quick_exit(void (__cdecl *)(void)); } 
#line 159
extern "C" { typedef void (__cdecl *_purecall_handler)(void); }


extern "C" { typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); }
#line 171
extern "C" { _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); } 



extern "C" { _purecall_handler __cdecl _get_purecall_handler(); } 


extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); } 



extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); } 

extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); } 



extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); } 
#line 212
extern "C" { __declspec(dllimport) int __cdecl _set_error_mode(int _Mode); } 




extern "C" { __declspec(dllimport) int *__cdecl _errno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_errno(int _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); } 

extern "C" { __declspec(dllimport) unsigned long *__cdecl __doserrno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); } 


extern "C" { __declspec(dllimport) char **__cdecl __sys_errlist(); } 


extern "C" { __declspec(dllimport) int *__cdecl __sys_nerr(); } 


extern "C" { __declspec(dllimport) void __cdecl perror(const char * _ErrMsg); } 
#line 242
extern "C" { __declspec(dllimport) char **__cdecl __p__pgmptr(); } 
extern "C" { __declspec(dllimport) __wchar_t **__cdecl __p__wpgmptr(); } 
extern "C" { __declspec(dllimport) int *__cdecl __p__fmode(); } 
#line 259
extern "C" { __declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); } 
#line 279
extern "C" { typedef 
#line 275
struct _div_t { 

int quot; 
int rem; 
} div_t; }
#line 285
extern "C" { typedef 
#line 281
struct _ldiv_t { 

long quot; 
long rem; 
} ldiv_t; }
#line 291
extern "C" { typedef 
#line 287
struct _lldiv_t { 

__int64 quot; 
__int64 rem; 
} lldiv_t; }

extern "C" { int __cdecl abs(int _Number); } 
extern "C" { long __cdecl labs(long _Number); } 
extern "C" { __int64 __cdecl llabs(__int64 _Number); } 
extern "C" { __int64 __cdecl _abs64(__int64 _Number); } 

extern "C" { unsigned short __cdecl _byteswap_ushort(unsigned short _Number); } 
extern "C" { unsigned long __cdecl _byteswap_ulong(unsigned long _Number); } 
extern "C" { unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); } 

extern "C" { __declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); } 
extern "C" { __declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); } 
extern "C" { __declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); } 



#pragma warning(push)
#pragma warning(disable: 6540)

extern "C" { unsigned __cdecl _rotl(unsigned _Value, int _Shift); } 
#line 317
extern "C" { unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); } 




extern "C" { unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); } 




extern "C" { unsigned __cdecl _rotr(unsigned _Value, int _Shift); } 
#line 333
extern "C" { unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); } 




extern "C" { unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); } 




#pragma warning(pop)
#line 350
extern "C" { __declspec(dllimport) void __cdecl srand(unsigned _Seed); } 

extern "C" { __declspec(dllimport) int __cdecl rand(); } 
#line 363
inline long abs(const long _X) throw() 
{ 
return labs(_X); 
} 

inline __int64 abs(const __int64 _X) throw() 
{ 
return llabs(_X); 
} 

inline ldiv_t div(const long _A1, const long _A2) throw() 
{ 
return ldiv(_A1, _A2); 
} 

inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
{ 
return lldiv(_A1, _A2); 
} 
#line 394
#pragma pack ( push, 4 )



extern "C" { typedef 
#line 396
struct { 
unsigned char ld[10]; 
} _LDOUBLE; }
#pragma pack ( pop )
#line 418
extern "C" { typedef 
#line 416
struct { 
double x; 
} _CRT_DOUBLE; }




extern "C" { typedef 
#line 421
struct { 
float f; 
} _CRT_FLOAT; }
#line 432
extern "C" { typedef 
#line 430
struct { 
long double x; 
} _LONGDOUBLE; }



#pragma pack ( push, 4 )



extern "C" { typedef 
#line 438
struct { 
unsigned char ld12[12]; 
} _LDBL12; }
#pragma pack ( pop )
#line 450
extern "C" { __declspec(dllimport) double __cdecl atof(const char * _String); } 
extern "C" { __declspec(dllimport) int __cdecl atoi(const char * _String); } 
extern "C" { __declspec(dllimport) long __cdecl atol(const char * _String); } 
extern "C" { __declspec(dllimport) __int64 __cdecl atoll(const char * _String); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); } 

extern "C" { __declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); } 

extern "C" { __declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); } 


extern "C" { __declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); } 
#line 474
extern "C" { __declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); } 
#line 482
extern "C" { __declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); } 
#line 489
extern "C" { __declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); } 
#line 495
extern "C" { __declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); } 
#line 502
extern "C" { __declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); } 
#line 508
extern "C" { __declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); } 
#line 515
extern "C" { __declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); } 
#line 521
extern "C" { __declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); } 
#line 528
extern "C" { __declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); } 
#line 535
extern "C" { __declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 543
extern "C" { __declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); } 
#line 550
extern "C" { __declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 558
extern "C" { __declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); } 
#line 565
extern "C" { __declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 573
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); } 
#line 580
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 588
extern "C" { __declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); } 
#line 595
extern "C" { __declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 603
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); } 
#line 610
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 626
extern "C" { __declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 633
template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itoa_s ( _Value, _Buffer, _Size, _Radix ); }
#line 641
extern "C" { __declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); } 
#line 650
extern "C" { __declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 657
template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltoa_s ( _Value, _Buffer, _Size, _Radix ); }
#line 664
extern "C" { __declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); } 
#line 673
extern "C" { __declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 680
template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultoa_s ( _Value, _Buffer, _Size, _Radix ); }
#line 687
extern "C" { __declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); } 
#line 696
extern "C" { __declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 705
extern "C" { __declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); } 
#line 713
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 721
extern "C" { __declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); } 
#line 741
extern "C" { __declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); } 
#line 750
template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _ecvt_s ( _Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign ); }
#line 760
extern "C" { __declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); } 
#line 769
extern "C" { __declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); } 
#line 778
template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _fcvt_s ( _Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign ); }
#line 790
extern "C" { __declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); } 
#line 798
extern "C" { __declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); } 
#line 805
template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount ) throw ( ) { return _gcvt_s ( _Buffer, _Size, _Value, _DigitCount ); }
#line 814
extern "C" { __declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); } 
#line 843
extern "C" { __declspec(dllimport) int __cdecl ___mb_cur_max_func(); } 


extern "C" { __declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); } 
#line 852
extern "C" { __declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); } 
#line 858
extern "C" { __declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); } 
#line 866
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); } 
#line 872
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); } 
#line 879
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); } 
#line 886
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); } 
#line 893
extern "C" { __declspec(dllimport) int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); } 
#line 900
extern "C" { __declspec(dllimport) int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); } 
#line 908
extern "C" { __declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); } 
#line 916
template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount ) throw ( ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 924
extern "C" { __declspec(dllimport) size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); } 
#line 932
extern "C" { __declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); } 
#line 941
template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 950
extern "C" { __declspec(dllimport) size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 963
extern "C" { __declspec(dllimport) int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); } 
#line 969
extern "C" { __declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); } 
#line 978
extern "C" { __declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); } 
#line 988
extern "C" { __declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); } 
#line 996
extern "C" { __declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); } 
#line 1004
template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount ) throw ( ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 1012
extern "C" { __declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); } 
#line 1020
extern "C" { __declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); } 
#line 1029
template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 1038
extern "C" { __declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 1068
extern "C" { __declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); } 
#line 1077
extern "C" { __declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); } 
#line 1086
template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Buffer ) [ _Size ], char const * _Drive, char const * _Dir, char const * _Filename, char const * _Ext ) throw ( ) { return _makepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 1095
extern "C" { __declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); } 
#line 1105
extern "C" { __declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); } 
#line 1114
extern "C" { __declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); } 
#line 1126
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( char const * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 1132
extern "C" { __declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); } 
#line 1144
extern "C" { __declspec(dllimport) int *__cdecl __p___argc(); } 
extern "C" { __declspec(dllimport) char ***__cdecl __p___argv(); } 
extern "C" { __declspec(dllimport) __wchar_t ***__cdecl __p___wargv(); } 
#line 1158
extern "C" { __declspec(dllimport) char ***__cdecl __p__environ(); } 
extern "C" { __declspec(dllimport) __wchar_t ***__cdecl __p__wenviron(); } 
#line 1184
extern "C" { __declspec(dllimport) char *__cdecl getenv(const char * _VarName); } 



template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _RequiredCount, char ( & _Buffer ) [ _Size ], char const * _VarName ) throw ( ) { return getenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }
#line 1201
extern "C" { __declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); } 
#line 1211
extern "C" { __declspec(dllimport) int __cdecl system(const char * _Command); } 





#pragma warning(push)
#pragma warning(disable: 6540)


extern "C" { __declspec(dllimport) int __cdecl _putenv(const char * _EnvString); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); } 




#pragma warning(pop)

extern "C" { __declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); } 
#line 1240
template < size_t _Size > inline errno_t __cdecl _searchenv_s ( char const * _Filename, char const * _VarName, char ( & _Buffer ) [ _Size ] ) throw ( ) { return _searchenv_s ( _Filename, _VarName, _Buffer, _Size ); }
#line 1247
extern "C" { __declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); } 
#line 1256
extern "C" { 
#line 1255
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) 
__declspec(dllimport) void __cdecl _seterrormode(int _Mode); } 




extern "C" { 
#line 1260
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) 
__declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); } 
#line 1267
extern "C" { 
#line 1266
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) 
__declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); } 
#line 1289
#pragma warning(push)
#pragma warning(disable: 4141)


extern "C" { 
#line 1292
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); } 
#line 1301
extern "C" { 
#line 1300
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); } 
#line 1309
extern "C" { 
#line 1308
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); } 
#line 1316
extern "C" { 
#line 1315
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); } 
#line 1323
extern "C" { 
#line 1322
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); } 
#line 1331
extern "C" { 
#line 1330
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) 
__declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); } 
#line 1338
extern "C" { 
#line 1337
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details." "")) 
__declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); } 
#line 1347
extern "C" { 
#line 1346
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details" ".")) 
__declspec(dllimport) int __cdecl putenv(const char * _EnvString); } 



#pragma warning(pop)

extern "C" { _onexit_t __cdecl onexit(_onexit_t _Func); } 
#line 1362
#endif /* _INC_STDLIB */
#line 1359
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdint.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

typedef signed char int8_t; 
typedef short int16_t; 
typedef int int32_t; 
typedef __int64 int64_t; 
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t; 
typedef unsigned uint32_t; 
typedef unsigned __int64 uint64_t; 

typedef signed char int_least8_t; 
typedef short int_least16_t; 
typedef int int_least32_t; 
typedef __int64 int_least64_t; 
typedef unsigned char uint_least8_t; 
typedef unsigned short uint_least16_t; 
typedef unsigned uint_least32_t; 
typedef unsigned __int64 uint_least64_t; 

typedef signed char int_fast8_t; 
typedef int int_fast16_t; 
typedef int int_fast32_t; 
typedef __int64 int_fast64_t; 
typedef unsigned char uint_fast8_t; 
typedef unsigned uint_fast16_t; 
typedef unsigned uint_fast32_t; 
typedef unsigned __int64 uint_fast64_t; 

typedef __int64 intmax_t; 
typedef unsigned __int64 uintmax_t; 
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_math.h"
#ifndef _INC_MATH
#define _INC_MATH
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdint.h"
#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_math.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




extern "C" { struct _exception { 

int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
}; }



#ifndef _COMPLEX_DEFINED
#define _COMPLEX_DEFINED

extern "C" { struct _complex { 

double x, y; 
}; }





#endif /* _COMPLEX_DEFINED */
#line 59
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
#line 78
extern "C" const double _HUGE; 





#ifndef _HUGE_ENUF
#define _HUGE_ENUF 1e+300
#endif /* _HUGE_ENUF */
#line 169
extern "C" { void __cdecl _fperrraise(int _Except); } 

extern "C" { __declspec(dllimport) short __cdecl _dclass(double _X); } 
extern "C" { __declspec(dllimport) short __cdecl _ldclass(long double _X); } 
extern "C" { __declspec(dllimport) short __cdecl _fdclass(float _X); } 

extern "C" { __declspec(dllimport) int __cdecl _dsign(double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _ldsign(long double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _fdsign(float _X); } 

extern "C" { __declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); } 

extern "C" { __declspec(dllimport) short __cdecl _dtest(double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _ldtest(long double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _fdtest(float * _Px); } 

extern "C" { __declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); } 
extern "C" { __declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); } 
extern "C" { __declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); } 

extern "C" { __declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); } 
extern "C" { __declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); } 
extern "C" { __declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); } 

extern "C" { __declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); } 

extern "C" { __declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); } 
extern "C" { __declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); } 
extern "C" { __declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); } 

extern "C" { __declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); } 
extern "C" { __declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); } 

extern "C" { __declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); } 
extern "C" { __declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); } 
extern "C" { __declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); } 

extern "C" { __declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); } 
extern "C" { __declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); } 
extern "C" { __declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); } 

extern "C" { __declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); } 
extern "C" { __declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); } 
extern "C" { __declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); } 
#line 223
extern "C" { typedef 
#line 220
union { 
unsigned short _Sh[4]; 
double _Val; 
} _double_val; }
#line 230
extern "C" { typedef 
#line 227
union { 
unsigned short _Sh[2]; 
float _Val; 
} _float_val; }
#line 237
extern "C" { typedef 
#line 234
union { 
unsigned short _Sh[4]; 
long double _Val; 
} _ldouble_val; }
#line 245
extern "C" { typedef 
#line 240
union { 
unsigned short _Word[4]; 
float _Float; 
double _Double; 
long double _Long_double; 
} _float_const; }

extern "C" const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
extern "C" const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
extern "C" const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 

extern "C" const _float_const _Eps_C, _Rteps_C; 
extern "C" const _float_const _FEps_C, _FRteps_C; 
extern "C" const _float_const _LEps_C, _LRteps_C; 

extern "C" const double _Zero_C, _Xbig_C; 
extern "C" const float _FZero_C, _FXbig_C; 
extern "C" const long double _LZero_C, _LXbig_C; 
#line 288
inline int fpclassify(float _X) throw() 
{ 
return _fdtest(&_X); 
} 

inline int fpclassify(double _X) throw() 
{ 
return _dtest(&_X); 
} 

inline int fpclassify(long double _X) throw() 
{ 
return _ldtest(&_X); 
} 

inline bool signbit(float _X) throw() 
{ 
return _fdsign(_X) != 0; 
} 

inline bool signbit(double _X) throw() 
{ 
return _dsign(_X) != 0; 
} 

inline bool signbit(long double _X) throw() 
{ 
return _ldsign(_X) != 0; 
} 

inline int _fpcomp(float _X, float _Y) throw() 
{ 
return _fdpcomp(_X, _Y); 
} 

inline int _fpcomp(double _X, double _Y) throw() 
{ 
return _dpcomp(_X, _Y); 
} 

inline int _fpcomp(long double _X, long double _Y) throw() 
{ 
return _ldpcomp(_X, _Y); 
} 

template < class _Trc, class _Tre > struct _Combined_type
    {
        typedef float _Type;
    };

template<> struct _Combined_type< float, double>  { 

typedef double _Type; 
}; 

template<> struct _Combined_type< float, long double>  { 

typedef long double _Type; 
}; 

template < class _Ty, class _T2 > struct _Real_widened
    {
        typedef long double _Type;
    };

template<> struct _Real_widened< float, float>  { 

typedef float _Type; 
}; 

template<> struct _Real_widened< float, double>  { 

typedef double _Type; 
}; 

template<> struct _Real_widened< double, float>  { 

typedef double _Type; 
}; 

template<> struct _Real_widened< double, double>  { 

typedef double _Type; 
}; 

template < class _Ty > struct _Real_type
    {
        typedef double _Type;
    };

template<> struct _Real_type< float>  { 

typedef float _Type; 
}; 

template<> struct _Real_type< long double>  { 

typedef long double _Type; 
}; 

template < class _T1, class _T2 >
                   inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }

template < class _Ty >
                   inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }

template < class _Ty >
                   inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }

template < class _Ty >
                   inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }

template < class _Ty >
                   inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }

template < class _Ty1, class _Ty2 >
                   inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 464
extern "C" { int __cdecl abs(int _X); } 
extern "C" { long __cdecl labs(long _X); } 
extern "C" { __int64 __cdecl llabs(__int64 _X); } 

extern "C" { double __cdecl acos(double _X); } 
extern "C" { double __cdecl asin(double _X); } 
extern "C" { double __cdecl atan(double _X); } 
extern "C" { double __cdecl atan2(double _Y, double _X); } 

extern "C" { double __cdecl cos(double _X); } 
extern "C" { double __cdecl cosh(double _X); } 
extern "C" { double __cdecl exp(double _X); } 
extern "C" { double __cdecl fabs(double _X); } 
extern "C" { double __cdecl fmod(double _X, double _Y); } 
extern "C" { double __cdecl log(double _X); } 
extern "C" { double __cdecl log10(double _X); } 
extern "C" { double __cdecl pow(double _X, double _Y); } 
extern "C" { double __cdecl sin(double _X); } 
extern "C" { double __cdecl sinh(double _X); } 
extern "C" { double __cdecl sqrt(double _X); } 
extern "C" { double __cdecl tan(double _X); } 
extern "C" { double __cdecl tanh(double _X); } 

extern "C" { __declspec(dllimport) double __cdecl acosh(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl asinh(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl atanh(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl atof(const char * _String); } 
extern "C" { __declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) double __cdecl _cabs(_complex _Complex_value); } 
extern "C" { __declspec(dllimport) double __cdecl cbrt(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl ceil(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _chgsign(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); } 
extern "C" { __declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); } 
extern "C" { __declspec(dllimport) double __cdecl erf(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl erfc(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl exp2(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl expm1(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl fdim(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl floor(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); } 
extern "C" { __declspec(dllimport) double __cdecl fmax(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl fmin(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl frexp(double _X, int * _Y); } 
extern "C" { __declspec(dllimport) double __cdecl hypot(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl _hypot(double _X, double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl ilogb(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl ldexp(double _X, int _Y); } 
extern "C" { __declspec(dllimport) double __cdecl lgamma(double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llrint(double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llround(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl log1p(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl log2(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl logb(double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lrint(double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lround(double _X); } 

extern "C" { int __cdecl _matherr(_exception * _Except); } 

extern "C" { __declspec(dllimport) double __cdecl modf(double _X, double * _Y); } 
extern "C" { __declspec(dllimport) double __cdecl nan(const char * _X); } 
extern "C" { __declspec(dllimport) double __cdecl nearbyint(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl nextafter(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl remainder(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); } 
extern "C" { __declspec(dllimport) double __cdecl rint(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl round(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl scalbln(double _X, long _Y); } 
extern "C" { __declspec(dllimport) double __cdecl scalbn(double _X, int _Y); } 
extern "C" { __declspec(dllimport) double __cdecl tgamma(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl trunc(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _j0(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _j1(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _jn(int _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl _y0(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _y1(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _yn(int _X, double _Y); } 

extern "C" { __declspec(dllimport) float __cdecl acoshf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl asinhf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl atanhf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl cbrtf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl _chgsignf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); } 
extern "C" { __declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); } 
extern "C" { __declspec(dllimport) float __cdecl erff(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl erfcf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl expm1f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl exp2f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl fdimf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); } 
extern "C" { __declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl fminf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) int __cdecl ilogbf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl lgammaf(float _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llrintf(float _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llroundf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl log1pf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl log2f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl logbf(float _X); } 
extern "C" { __declspec(dllimport) long __cdecl lrintf(float _X); } 
extern "C" { __declspec(dllimport) long __cdecl lroundf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl nanf(const char * _X); } 
extern "C" { __declspec(dllimport) float __cdecl nearbyintf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); } 
extern "C" { __declspec(dllimport) float __cdecl remainderf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); } 
extern "C" { __declspec(dllimport) float __cdecl rintf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl roundf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); } 
extern "C" { __declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); } 
extern "C" { __declspec(dllimport) float __cdecl tgammaf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl truncf(float _X); } 
#line 589
extern "C" { __declspec(dllimport) float __cdecl _logbf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl _nextafterf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _finitef(float _X); } 
extern "C" { __declspec(dllimport) int __cdecl _isnanf(float _X); } 
extern "C" { __declspec(dllimport) int __cdecl _fpclassf(float _X); } 

extern "C" { __declspec(dllimport) int __cdecl _set_FMA3_enable(int _Flag); } 
extern "C" { __declspec(dllimport) int __cdecl _get_FMA3_enable(); } 
#line 609
extern "C" { __declspec(dllimport) float __cdecl acosf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl asinf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl atan2f(float _Y, float _X); } 
extern "C" { __declspec(dllimport) float __cdecl atanf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl ceilf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl cosf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl coshf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl expf(float _X); } 
#line 668
extern "C" { __inline float __cdecl fabsf(float _X) 
{ 
return (float)fabs(_X); 
} } 
#line 677
extern "C" { __declspec(dllimport) float __cdecl floorf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl fmodf(float _X, float _Y); } 
#line 694
extern "C" { __inline float __cdecl frexpf(float _X, int *_Y) 
{ 
return (float)frexp(_X, _Y); 
} } 

extern "C" { __inline float __cdecl hypotf(float _X, float _Y) 
{ 
return _hypotf(_X, _Y); 
} } 

extern "C" { __inline float __cdecl ldexpf(float _X, int _Y) 
{ 
return (float)ldexp(_X, _Y); 
} } 



extern "C" { __declspec(dllimport) float __cdecl log10f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl logf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl modff(float _X, float * _Y); } 
extern "C" { __declspec(dllimport) float __cdecl powf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl sinf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl sinhf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl sqrtf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl tanf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl tanhf(float _X); } 
#line 773
extern "C" { __declspec(dllimport) long double __cdecl acoshl(long double _X); } 

extern "C" { __inline long double __cdecl acosl(long double _X) 
{ 
return acos((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl asinhl(long double _X); } 

extern "C" { __inline long double __cdecl asinl(long double _X) 
{ 
return asin((double)_X); 
} } 

extern "C" { __inline long double __cdecl atan2l(long double _Y, long double _X) 
{ 
return atan2((double)_Y, (double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl atanhl(long double _X); } 

extern "C" { __inline long double __cdecl atanl(long double _X) 
{ 
return atan((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl cbrtl(long double _X); } 

extern "C" { __inline long double __cdecl ceill(long double _X) 
{ 
return ceil((double)_X); 
} } 

extern "C" { __inline long double __cdecl _chgsignl(long double _X) 
{ 
return _chgsign((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); } 

extern "C" { __inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
{ 
return _copysign((double)_Number, (double)_Sign); 
} } 

extern "C" { __inline long double __cdecl coshl(long double _X) 
{ 
return cosh((double)_X); 
} } 

extern "C" { __inline long double __cdecl cosl(long double _X) 
{ 
return cos((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl erfl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl erfcl(long double _X); } 

extern "C" { __inline long double __cdecl expl(long double _X) 
{ 
return exp((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl exp2l(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl expm1l(long double _X); } 

extern "C" { __inline long double __cdecl fabsl(long double _X) 
{ 
return fabs((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); } 

extern "C" { __inline long double __cdecl floorl(long double _X) 
{ 
return floor((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); } 
extern "C" { __declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); } 

extern "C" { __inline long double __cdecl fmodl(long double _X, long double _Y) 
{ 
return fmod((double)_X, (double)_Y); 
} } 

extern "C" { __inline long double __cdecl frexpl(long double _X, int *_Y) 
{ 
return frexp((double)_X, _Y); 
} } 

extern "C" { __declspec(dllimport) int __cdecl ilogbl(long double _X); } 

extern "C" { __inline long double __cdecl _hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} } 

extern "C" { __inline long double __cdecl hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} } 

extern "C" { __inline long double __cdecl ldexpl(long double _X, int _Y) 
{ 
return ldexp((double)_X, _Y); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl lgammal(long double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llrintl(long double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llroundl(long double _X); } 

extern "C" { __inline long double __cdecl logl(long double _X) 
{ 
return log((double)_X); 
} } 

extern "C" { __inline long double __cdecl log10l(long double _X) 
{ 
return log10((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl log1pl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl log2l(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl logbl(long double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lrintl(long double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lroundl(long double _X); } 

extern "C" { __inline long double __cdecl modfl(long double _X, long double *_Y) 
{ 
double _F, _I; 
_F = modf((double)_X, &_I); 
*_Y = _I; 
return _F; 
} } 

extern "C" { __declspec(dllimport) long double __cdecl nanl(const char * _X); } 
extern "C" { __declspec(dllimport) long double __cdecl nearbyintl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); } 

extern "C" { __inline long double __cdecl powl(long double _X, long double _Y) 
{ 
return pow((double)_X, (double)_Y); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); } 
extern "C" { __declspec(dllimport) long double __cdecl rintl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl roundl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); } 

extern "C" { __inline long double __cdecl sinhl(long double _X) 
{ 
return sinh((double)_X); 
} } 

extern "C" { __inline long double __cdecl sinl(long double _X) 
{ 
return sin((double)_X); 
} } 

extern "C" { __inline long double __cdecl sqrtl(long double _X) 
{ 
return sqrt((double)_X); 
} } 

extern "C" { __inline long double __cdecl tanhl(long double _X) 
{ 
return tanh((double)_X); 
} } 

extern "C" { __inline long double __cdecl tanl(long double _X) 
{ 
return tan((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl tgammal(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl truncl(long double _X); } 
#line 974
extern "C" double HUGE; 




extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details.")) __declspec(dllimport) double __cdecl j0(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details.")) __declspec(dllimport) double __cdecl j1(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details.")) __declspec(dllimport) double __cdecl jn(int _X, double _Y); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details.")) __declspec(dllimport) double __cdecl y0(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details.")) __declspec(dllimport) double __cdecl y1(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details.")) __declspec(dllimport) double __cdecl yn(int _X, double _Y); } 
#line 992
#endif /* _INC_MATH */
#line 10 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\float.h"
#ifndef _INC_FLOAT
#define _INC_FLOAT
#line 989 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_math.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\float.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 231
extern "C" { __declspec(dllimport) unsigned __cdecl _clearfp(); } 

#pragma warning(push)
#pragma warning(disable: 4141)


extern "C" { __declspec(dllimport) unsigned __cdecl _controlfp(unsigned _NewValue, unsigned _Mask); } 




#pragma warning(pop)


extern "C" { __declspec(dllimport) void __cdecl _set_controlfp(unsigned _NewValue, unsigned _Mask); } 
#line 251
extern "C" { __declspec(dllimport) errno_t __cdecl _controlfp_s(unsigned * _CurrentState, unsigned _NewValue, unsigned _Mask); } 
#line 258
extern "C" { __declspec(dllimport) unsigned __cdecl _statusfp(); } 


extern "C" { __declspec(dllimport) void __cdecl _fpreset(); } 
#line 277
extern "C" { __declspec(dllimport) unsigned __cdecl _control87(unsigned _NewValue, unsigned _Mask); } 
#line 294
extern "C" { __declspec(dllimport) int *__cdecl __fpecode(); } 




extern "C" { __declspec(dllimport) int __cdecl __fpe_flt_rounds(); } 
#line 312
extern "C" { __declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); } 
extern "C" { __declspec(dllimport) double __cdecl _chgsign(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _scalb(double _X, long _Y); } 
extern "C" { __declspec(dllimport) double __cdecl _logb(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _nextafter(double _X, double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _finite(double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _isnan(double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _fpclass(double _X); } 


extern "C" { __declspec(dllimport) float __cdecl _scalbf(float _X, long _Y); } 
#line 339
extern "C" { __declspec(dllimport) void __cdecl fpreset(); } 
#line 409
#endif /* _INC_FLOAT */
#line 8 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdbool.h"
#ifndef _STDBOOL
#define _STDBOOL
#line 21
#endif /* _STDBOOL */
#line 406 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\float.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 26 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\ccontrol_functions.h"
void mpc(float * A, float * B, float * C, float * x, float * u, float * r, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM, uint8_t HORIZON, uint8_t ITERATION_LIMIT, bool has_integration); 
void kalman(float * A, float * B, float * C, float * K, float * u, float * x, float * y, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM); 
void lqi(float * y, float * u, float qi, float * r, float * L, float * Li, float * x, float * xi, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM, uint8_t ANTI_WINDUP); 
void mrac(float limit, float gain, float * y, float * u, float * r, float * I1, float * I2, uint8_t RDIM); 
void theta2ss(float * A, float * B, float * C, float * theta, float * K, uint8_t ADIM, uint8_t NP, uint8_t NZ, uint8_t NZE, bool integral_action); 
bool stability(float * A, uint8_t ADIM); 
void c2d(float  A[], float  B[], uint8_t ADIM, uint8_t RDIM, float sampleTime); 




float saturation(float input, float lower_limit, float upper_limit); 
void cut(float * A, int row, int column, float * B, int start_row, int stop_row, int start_column, int stop_column); 
void insert(float * A, float * B, int row_a, int column_a, int column_b, int startRow_b, int startColumn_b); 
void print(float * A, int row, int column); 
float sign(float number); 
void filtfilt(float * y, float * t, uint16_t l, float K); 




int inv(float * A, int row); 
void linsolve_upper_triangular(float * A, float * x, float * b, int column); 
void tran(float * A, int row, int column); 
void mul(float * A, float * B, float * C, int row_a, int column_a, int column_b); 
void svd_jacobi_one_sided(float * A, uint16_t row, uint8_t max_iterations, float * U, float * S, float * V); 
void dlyap(float * A, float * P, float * Q, int row); 
uint8_t svd_golub_reinsch(float * A, uint16_t row, uint16_t column, float * U, float * singular_values, float * V); 
void qr(float * A, float * Q, float * R, int row_a, int column_a); 
void triu(float * A, float * b, int row); 
void linsolve_lower_triangular(float * A, float * x, float * b, int row); 
void tikhonov(float * A, float * b, float * ATA, float * ATb, int row_a, int column_a, float alpha); 
uint8_t lup(float * A, float * LU, int * P, int row); 
float det(float * A, int row); 
uint8_t linsolve_lup(float * A, float * x, float * b, int row); 
void chol(float * A, float * L, int row); 
void pinv(float * A, int row, int column); 
void hankel(float * V, float * H, uint16_t row_v, uint16_t column_v, uint16_t row_h, uint16_t column_h, uint16_t shift); 
void balance(float * A, uint16_t row); 
void eig(float * A, float * wr, float * wi, uint16_t row); 
void eig_sym(float * A, uint16_t row, float * d); 
void sum(float  A[], uint32_t row, uint32_t column, uint8_t l); 
float norm(float  A[], uint32_t row, uint32_t column, uint8_t l); 
void expm(float  A[], uint32_t row); 




void linprog(float * c, float * A, float * b, float * x, int row_a, int column_a, uint8_t max_or_min, int iteration_limit); 




void Astar(int * map, int * path_x, int * path_y, int x_start, int y_start, int x_stop, int y_stop, int height, int width, int norm_mode, int * steps); 




void rls(uint8_t NP, uint8_t NZ, uint8_t NZE, float * theta, float u, float y, uint8_t * count, float * past_e, float * past_y, float * past_u, float * phi, float * P, float Pq, float forgetting); 
void okid(float * u, float * y, float * g, uint16_t row, uint16_t column); 
void era(float * u, float * y, uint16_t row, uint16_t column, float * A, float * B, float * C, uint8_t row_a, uint8_t inputs_outputs); 

#endif /* CCONTROLFUNCTIONS_H */
#line 17 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\sensor_fusion.hpp"
#ifndef SENSORFUSION_HPP
#define SENSORFUSION_HPP
#line 1 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\common_data_types.hpp"
#ifndef COMMON_DATA_TYPES_HPP
#define COMMON_DATA_TYPES_HPP

enum SensorErrorCodes_e { SENSOR_SUCCESS, SENSOR_FAIL}; 


#endif /* COMMON_DATA_TYPES_HPP */
#line 26 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\sensor_fusion.hpp"
const int SF_FREQ = 200; 


struct SFIterationData_t { 
float prevX[6]; 
float prevP[6 * 6]; 
}; 
#line 39
typedef 
#line 37
struct { 
int errorCode; 
} SFError_t; 
#line 53
typedef 
#line 41
struct { 
float roll, pitch, yaw; 
float rollRate, pitchRate, yawRate; 
float airspeed; 
float altitude; 
float rateOfClimb; 
float latitude; 
float latitudeSpeed; 
float longitude; 
float longitudeSpeed; 
float track; 
float heading; 
} SFOutput_t; 
#line 66
typedef 
#line 57
struct { 
float magx, magy, magz; 
float accx, accy, accz; 
float gyrx, gyry, gyrz; 
float temp; 

bool isDataNew; 
SensorErrorCodes_e sensorStatus; 
float utcTime; 
} IMU_Data_t; 
#line 75
typedef 
#line 69
struct { 
double airspeed; 

SensorErrorCodes_e sensorStatus; 
bool isDataNew; 
float utcTime; 
} Airspeed_Data_t; 
#line 95
typedef 
#line 78
struct { 
float latitude; 
float longitude; 
float utcTime; 
float groundSpeed; 
int altitude; 
int heading; 
int numSatellites; 
int fixStatus; 

SensorErrorCodes_e sensorStatus; 
bool dataIsNew; 
bool timeIsNew; 


bool ggaDataIsNew; 
bool vtgDataIsNew; 
} Gps_Data_t; 
#line 104
typedef 
#line 97
struct { 

float pressure, altitude, temp; 

bool isDataNew; 
SensorErrorCodes_e status; 
int utcTime; 
} Altimeter_Data_t; 
#line 110
SFError_t SF_Init(SFIterationData_t * iterData); 




SFError_t SF_GenerateNewResult(IMU_Data_t * imuData, Gps_Data_t * GpsData, Altimeter_Data_t * altimeterData, SFIterationData_t * iterData, SFOutput_t * SFoutput); 
#line 136
IMU_Data_t SF_GetRawIMU(); 
#line 142
Airspeed_Data_t SF_GetRawAirspeed(); 




Gps_Data_t SF_GetRawGPS(); 
#line 153
Altimeter_Data_t SF_GetRawAltimeter(); 

#endif /* SENSORFUSION_HPP */
#line 13 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\manhony_ahrs.h"
#ifndef MahonyAHRS_h
#define MahonyAHRS_h




extern volatile float twoKp; 
extern volatile float twoKi; 
extern volatile float q0, q1, q2, q3; 




void MahonyAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz); 
void MahonyAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az); 

#endif /* MahonyAHRS_h */
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\cmath"
#ifndef _CMATH_
#define _CMATH_
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\yvals.h"
#ifndef _YVALS
#define _YVALS
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\yvals_core.h"
#ifndef _YVALS_CORE_H_
#define _YVALS_CORE_H_
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\xkeycheck.h"
#ifndef _XKEYCHECK_H
#define _XKEYCHECK_H
#line 590
#endif /* _XKEYCHECK_H */
#line 461 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\yvals_core.h"
#ifndef _STL_EXTRA_DISABLED_WARNINGS
#define _STL_EXTRA_DISABLED_WARNINGS
#endif /* _STL_EXTRA_DISABLED_WARNINGS */
#line 491
#ifndef _STL_DISABLED_WARNINGS
#define _STL_DISABLED_WARNINGS 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 _STL_DISABLED_WARNING_C4577 _STL_DISABLED_WARNING_C4984 _STL_DISABLED_WARNING_C5053 _STL_EXTRA_DISABLED_WARNINGS
#line 502
#endif /* _STL_DISABLED_WARNINGS */
#line 582
#ifndef _HAS_STATIC_RTTI
#define _HAS_STATIC_RTTI 1
#endif /* _HAS_STATIC_RTTI */
#line 615
#ifndef _HAS_AUTO_PTR_ETC
#define _HAS_AUTO_PTR_ETC (!_HAS_CXX17)
#endif /* _HAS_AUTO_PTR_ETC */


#ifndef _HAS_UNEXPECTED
#define _HAS_UNEXPECTED (!_HAS_CXX17)
#endif /* _HAS_UNEXPECTED */


#ifndef _HAS_OLD_IOSTREAMS_MEMBERS
#define _HAS_OLD_IOSTREAMS_MEMBERS (!_HAS_CXX17)
#endif /* _HAS_OLD_IOSTREAMS_MEMBERS */


#ifndef _HAS_STD_BYTE
#define _HAS_STD_BYTE _HAS_CXX17
#endif /* _HAS_STD_BYTE */





#ifndef _HAS_FUNCTION_ALLOCATOR_SUPPORT
#define _HAS_FUNCTION_ALLOCATOR_SUPPORT (!_HAS_CXX17)
#endif /* _HAS_FUNCTION_ALLOCATOR_SUPPORT */


#ifndef _HAS_TR1_NAMESPACE
#define _HAS_TR1_NAMESPACE (!_HAS_CXX17)
#endif /* _HAS_TR1_NAMESPACE */
#line 665
#ifndef _ENFORCE_MATCHING_ALLOCATORS
#define _ENFORCE_MATCHING_ALLOCATORS _HAS_CXX17
#endif /* _ENFORCE_MATCHING_ALLOCATORS */
#line 676
#ifndef _ENFORCE_FACET_SPECIALIZATIONS
#define _ENFORCE_FACET_SPECIALIZATIONS 0
#endif /* _ENFORCE_FACET_SPECIALIZATIONS */
#line 687
#ifndef _STL_OPTIMIZE_SYSTEM_ERROR_OPERATORS
#define _STL_OPTIMIZE_SYSTEM_ERROR_OPERATORS 1
#endif /* _STL_OPTIMIZE_SYSTEM_ERROR_OPERATORS */
#line 1071
#ifndef _HAS_FEATURES_REMOVED_IN_CXX20
#define _HAS_FEATURES_REMOVED_IN_CXX20 (!_HAS_CXX20)
#endif /* _HAS_FEATURES_REMOVED_IN_CXX20 */

#ifndef _HAS_DEPRECATED_ADAPTOR_TYPEDEFS
#define _HAS_DEPRECATED_ADAPTOR_TYPEDEFS (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_ADAPTOR_TYPEDEFS */

#ifndef _HAS_DEPRECATED_ALLOCATOR_MEMBERS
#define _HAS_DEPRECATED_ALLOCATOR_MEMBERS (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_ALLOCATOR_MEMBERS */

#ifndef _HAS_DEPRECATED_IS_LITERAL_TYPE
#define _HAS_DEPRECATED_IS_LITERAL_TYPE (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_IS_LITERAL_TYPE */

#ifndef _HAS_DEPRECATED_NEGATORS
#define _HAS_DEPRECATED_NEGATORS (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_NEGATORS */

#ifndef _HAS_DEPRECATED_RAW_STORAGE_ITERATOR
#define _HAS_DEPRECATED_RAW_STORAGE_ITERATOR (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_RAW_STORAGE_ITERATOR */

#ifndef _HAS_DEPRECATED_RESULT_OF
#define _HAS_DEPRECATED_RESULT_OF (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_RESULT_OF */

#ifndef _HAS_DEPRECATED_SHARED_PTR_UNIQUE
#define _HAS_DEPRECATED_SHARED_PTR_UNIQUE (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_SHARED_PTR_UNIQUE */

#ifndef _HAS_DEPRECATED_TEMPORARY_BUFFER
#define _HAS_DEPRECATED_TEMPORARY_BUFFER (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_TEMPORARY_BUFFER */

#ifndef _HAS_DEPRECATED_UNCAUGHT_EXCEPTION
#define _HAS_DEPRECATED_UNCAUGHT_EXCEPTION (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_DEPRECATED_UNCAUGHT_EXCEPTION */
#line 1125
#ifndef _HAS_STREAM_INSERTION_OPERATORS_DELETED_IN_CXX20
#define _HAS_STREAM_INSERTION_OPERATORS_DELETED_IN_CXX20 (_HAS_FEATURES_REMOVED_IN_CXX20)
#endif /* _HAS_STREAM_INSERTION_OPERATORS_DELETED_IN_CXX20 */
#line 1461
#endif /* _YVALS_CORE_H_ */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\crtdbg.h"
#ifndef _INC_CRTDBG
#define _INC_CRTDBG
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime_new.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#pragma warning(disable: 4985)
#line 31
#ifndef __NOTHROW_T_DEFINED
#define __NOTHROW_T_DEFINED
#line 19
#pragma pack ( push, 8 )
#line 33
namespace std { 

struct nothrow_t { 
explicit nothrow_t() = default;
}; 




extern const nothrow_t nothrow; 

}
#endif /* __NOTHROW_T_DEFINED */

[[nodiscard]] __declspec(allocator) void *__cdecl 
operator new(size_t _Size); 



[[nodiscard]] __declspec(allocator) void *__cdecl 
operator new(size_t _Size, const std::nothrow_t &) noexcept; 




[[nodiscard]] __declspec(allocator) void *__cdecl 
operator new[](size_t _Size); 



[[nodiscard]] __declspec(allocator) void *__cdecl 
operator new[](size_t _Size, const std::nothrow_t &) noexcept; 




void __cdecl operator delete(void * _Block) noexcept; 



void __cdecl operator delete(void * _Block, const std::nothrow_t &) noexcept; 




void __cdecl operator delete[](void * _Block) noexcept; 



void __cdecl operator delete[](void * _Block, const std::nothrow_t &) noexcept; 




void __cdecl operator delete(void * _Block, size_t _Size) noexcept; 




void __cdecl operator delete[](void * _Block, size_t _Size) noexcept; 
#line 163
#ifndef __PLACEMENT_NEW_INLINE
#define __PLACEMENT_NEW_INLINE
#line 160
#pragma warning(push)
#pragma warning(disable: 4577)
#pragma warning(disable: 4514)


[[nodiscard]] inline void *__cdecl 
operator new(size_t _Size, void *_Where) noexcept 
{ 
(void)_Size; 
return _Where; 
} 

inline void __cdecl operator delete(void *, void *) noexcept 
{ 

} 
#endif /* __PLACEMENT_NEW_INLINE */

#ifndef __PLACEMENT_VEC_NEW_INLINE
#define __PLACEMENT_VEC_NEW_INLINE
[[nodiscard]] inline void *__cdecl 
operator new[](size_t _Size, void *
_Where) noexcept 
{ 
(void)_Size; 
return _Where; 
} 

inline void __cdecl operator delete[](void *, void *) noexcept 
{ 
} 
#endif /* __PLACEMENT_VEC_NEW_INLINE */
#pragma warning(pop)



#pragma pack ( pop )




#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime_new_debug.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)




#pragma pack ( push, 8 )
#line 25
[[nodiscard]] 
__declspec(allocator) void *__cdecl operator new(size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 33
[[nodiscard]] 
__declspec(allocator) void *__cdecl operator new[](size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 41
void __cdecl operator delete(void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 48
void __cdecl operator delete[](void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 59
#pragma pack ( pop )




#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\crtdbg.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 



extern "C" { typedef void *_HFILE; }
#line 49
extern "C" { typedef int (__cdecl *_CRT_REPORT_HOOK)(int, char *, int *); }
extern "C" { typedef int (__cdecl *_CRT_REPORT_HOOKW)(int, __wchar_t *, int *); }
#line 56
extern "C" { typedef int (__cdecl *_CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int); }
#line 112
extern "C" { typedef void (__cdecl *_CRT_DUMP_CLIENT)(void *, size_t); }
#line 118
struct _CrtMemBlockHeader; 
#line 127
extern "C" { typedef 
#line 120
struct _CrtMemState { 

_CrtMemBlockHeader *pBlockHeader; 
size_t lCounts[5]; 
size_t lSizes[5]; 
size_t lHighWaterCount; 
size_t lTotalCount; 
} _CrtMemState; }
#line 703
#ifndef _ASSERT_EXPR
#define _ASSERT_EXPR(expr,msg) ((void)0)
#endif /* _ASSERT_EXPR */

#ifndef _ASSERT
#define _ASSERT(expr) ((void)0)
#endif /* _ASSERT */

#ifndef _ASSERTE
#define _ASSERTE(expr) ((void)0)
#endif /* _ASSERTE */
#line 783
#ifndef _ASSERT_BASE
#define _ASSERT_BASE _ASSERT_EXPR
#endif /* _ASSERT_BASE */
#line 816
#endif /* _INC_CRTDBG */
#line 8 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\use_ansi.h"
#ifndef _USE_ANSI_CPP
#define _USE_ANSI_CPP
#line 60
#endif /* _USE_ANSI_CPP */
#line 813 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\crtdbg.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\yvals.h"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053)
#line 134
#pragma detect_mismatch("_MSC_VER", "1900")



#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "0")
#line 147
#pragma detect_mismatch("RuntimeLibrary", "MD_DynamicRelease")
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\use_ansi.h"
#pragma comment(lib, "msvcprt")
#line 344 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\yvals.h"
namespace std { 
enum _Uninitialized { 
_Noinit
}; 

class __declspec(dllimport) _Lockit { 
#line 365
public: __thiscall _Lockit() noexcept; 
explicit __thiscall _Lockit(int) noexcept; 
__thiscall ~_Lockit() noexcept; 


static void __cdecl _Lockit_ctor(int) noexcept; 
static void __cdecl _Lockit_dtor(int) noexcept; 


private: static void __cdecl _Lockit_ctor(_Lockit *) noexcept; 
static void __cdecl _Lockit_ctor(_Lockit *, int) noexcept; 
static void __cdecl _Lockit_dtor(_Lockit *) noexcept; 


public: _Lockit(const _Lockit &) = delete;
_Lockit &operator=(const _Lockit &) = delete;


private: int _Locktype; 
}; 
#line 459
class __declspec(dllimport) _Init_locks { 
#line 471
public: __thiscall _Init_locks() noexcept; 
__thiscall ~_Init_locks() noexcept; 



private: static void __cdecl _Init_locks_ctor(_Init_locks *) noexcept; 
static void __cdecl _Init_locks_dtor(_Init_locks *) noexcept; 
}; 
#line 516
}
#line 528
#endif /* _YVALS */
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\cstdlib"
#ifndef _CSTDLIB_
#define _CSTDLIB_
#line 525 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\yvals.h"
#pragma warning(pop)
#pragma pack ( pop )
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\cstdlib"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053)





[[nodiscard]] inline double abs(double _Xx) noexcept { 
return ::fabs(_Xx); 
} 

[[nodiscard]] inline float abs(float _Xx) noexcept { 
return ::fabsf(_Xx); 
} 

[[nodiscard]] inline long double abs(long double _Xx) noexcept { 
return ::fabsl(_Xx); 
} 

namespace std { 
using ::size_t;
using ::div_t;
using ::ldiv_t;
using ::abort;
using ::abs;
using ::atexit;
using ::atof;
using ::atoi;
using ::atol;
using ::bsearch;
using ::calloc;
using ::div;
using ::exit;
using ::free;
using ::labs;
using ::ldiv;
using ::malloc;
using ::mblen;
using ::mbstowcs;
using ::mbtowc;
using ::qsort;
using ::rand;
using ::realloc;
using ::srand;
using ::strtod;
using ::strtol;
using ::strtoul;
using ::wcstombs;
using ::wctomb;

using ::lldiv_t;


using ::getenv;
using ::system;


using ::atoll;
using ::llabs;
using ::lldiv;
using ::strtof;
using ::strtold;
using ::strtoll;
using ::strtoull;

using ::_Exit;
using ::at_quick_exit;
using ::quick_exit;
}
#line 92
#endif /* _CSTDLIB_ */
#line 7 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\xtr1common"
#ifndef _XTR1COMMON_
#define _XTR1COMMON_
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\cstdlib"
#pragma warning(pop)
#pragma pack ( pop )
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\xtr1common"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053)




namespace std { 
template < class _Ty, _Ty _Val >
struct integral_constant {
    static constexpr _Ty value = _Val;

    using value_type = _Ty;
    using type = integral_constant;

    constexpr operator value_type ( ) const noexcept {
        return value;
    }

    [ [ nodiscard ] ] constexpr value_type operator ( ) ( ) const noexcept {
        return value;
    }
};

template < bool _Val >
using bool_constant = integral_constant < bool, _Val >;

using true_type = bool_constant< true> ; 
using false_type = bool_constant< false> ; 

template < bool _Test, class _Ty = void >
struct enable_if { };

template < class _Ty >
struct enable_if < true, _Ty > {
    using type = _Ty;
};

template < bool _Test, class _Ty = void >
using enable_if_t = typename enable_if < _Test, _Ty > :: type;

template < bool _Test, class _Ty1, class _Ty2 >
struct conditional {
    using type = _Ty1;
};

template < class _Ty1, class _Ty2 >
struct conditional < false, _Ty1, _Ty2 > {
    using type = _Ty2;
};

template < bool _Test, class _Ty1, class _Ty2 >
using conditional_t = typename conditional < _Test, _Ty1, _Ty2 > :: type;
#line 73
template < class, class >
            constexpr bool is_same_v = false;
template < class _Ty >
            constexpr bool is_same_v < _Ty, _Ty > = true;

template < class _Ty1, class _Ty2 >
struct is_same : bool_constant < is_same_v < _Ty1, _Ty2 > > { };


template < class _Ty >
struct remove_const {
    using type = _Ty;
};

template < class _Ty >
struct remove_const < const _Ty > {
    using type = _Ty;
};

template < class _Ty >
using remove_const_t = typename remove_const < _Ty > :: type;

template < class _Ty >
struct remove_volatile {
    using type = _Ty;
};

template < class _Ty >
struct remove_volatile < volatile _Ty > {
    using type = _Ty;
};

template < class _Ty >
using remove_volatile_t = typename remove_volatile < _Ty > :: type;

template < class _Ty >
struct remove_cv {
    using type = _Ty;

    template < template < class > class _Fn >
    using _Apply = _Fn < _Ty >;
};

template < class _Ty >
struct remove_cv < const _Ty > {
    using type = _Ty;

    template < template < class > class _Fn >
    using _Apply = const _Fn < _Ty >;
};

template < class _Ty >
struct remove_cv < volatile _Ty > {
    using type = _Ty;

    template < template < class > class _Fn >
    using _Apply = volatile _Fn < _Ty >;
};

template < class _Ty >
struct remove_cv < const volatile _Ty > {
    using type = _Ty;

    template < template < class > class _Fn >
    using _Apply = const volatile _Fn < _Ty >;
};

template < class _Ty >
using remove_cv_t = typename remove_cv < _Ty > :: type;

template < bool _First_value, class _First, class ... _Rest >
struct _Disjunction {
    using type = _First;
};

template < class _False, class _Next, class ... _Rest >
struct _Disjunction < false, _False, _Next, _Rest ... > {
    using type = typename _Disjunction < _Next :: value, _Next, _Rest ... > :: type;
};

template < class ... _Traits >
struct disjunction : false_type { };

template < class _First, class ... _Rest >
struct disjunction < _First, _Rest ... > : _Disjunction < _First :: value, _First, _Rest ... > :: type {

};

template < class ... _Traits >
            constexpr bool disjunction_v = disjunction < _Traits ... > :: value;

template < class _Ty, class ... _Types >
            constexpr bool _Is_any_of_v =
    disjunction_v < is_same < _Ty, _Types > ... >;
#line 174
template < class _Ty >
            constexpr bool is_integral_v = _Is_any_of_v < remove_cv_t < _Ty >, bool, char, signed char, unsigned char,
    wchar_t,



    char16_t, char32_t, short, unsigned short, int, unsigned int, long, unsigned long, long long, unsigned long long >;

template < class _Ty >
struct is_integral : bool_constant < is_integral_v < _Ty > > { };

template < class _Ty >
            constexpr bool is_floating_point_v = _Is_any_of_v < remove_cv_t < _Ty >, float, double, long double >;

template < class _Ty >
struct is_floating_point : bool_constant < is_floating_point_v < _Ty > > { };

template < class _Ty >
            constexpr bool is_arithmetic_v =
    is_integral_v < _Ty > || is_floating_point_v < _Ty >;

template < class _Ty >
struct is_arithmetic : bool_constant < is_arithmetic_v < _Ty > > { };

template < class _Ty >
struct remove_reference {
    using type = _Ty;
    using _Const_thru_ref_type = const _Ty;
};

template < class _Ty >
struct remove_reference < _Ty & > {
    using type = _Ty;
    using _Const_thru_ref_type = const _Ty &;
};

template < class _Ty >
struct remove_reference < _Ty && > {
    using type = _Ty;
    using _Const_thru_ref_type = const _Ty &&;
};

template < class _Ty >
using remove_reference_t = typename remove_reference < _Ty > :: type;

template < class _Ty >
using _Const_thru_ref = typename remove_reference < _Ty > :: _Const_thru_ref_type;

template < class _Ty >
using _Remove_cvref_t = remove_cv_t < remove_reference_t < _Ty >>;
#line 235
}





#endif /* _XTR1COMMON_ */
#line 238
#pragma warning(pop)
#pragma pack ( pop )
#line 20 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\intrin0.inl.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 123
extern "C" { unsigned char _BitScanForward(unsigned long * _Index, unsigned long _Mask); } 
extern "C" { unsigned char _BitScanForward64(unsigned long * _Index, unsigned __int64 _Mask); } 

extern "C" { unsigned char _BitScanReverse(unsigned long * _Index, unsigned long _Mask); } 
extern "C" { unsigned char _BitScanReverse64(unsigned long * _Index, unsigned __int64 _Mask); } 

extern "C" { unsigned char _bittest(const long *, long); } 


extern "C" { long _InterlockedAnd(volatile long * _Value, long _Mask); } 
extern "C" { short _InterlockedAnd16(volatile short * _Value, short _Mask); } 



extern "C" { __int64 _InterlockedAnd64(volatile __int64 * _Value, __int64 _Mask); } 
extern "C" { __int64 _interlockedand64(volatile __int64 * _Value, __int64 _Mask); } 



extern "C" { char _InterlockedAnd8(volatile char * _Value, char _Mask); } 
#line 149
extern "C" { long _InterlockedCompareExchange(volatile long * _Destination, long _Exchange, long _Comparand); } 

extern "C" { short _InterlockedCompareExchange16(volatile short * _Destination, short _Exchange, short _Comparand); } 



extern "C" { __int64 _InterlockedCompareExchange64(volatile __int64 * _Destination, __int64 _Exchange, __int64 _Comparand); } 



extern "C" { char _InterlockedCompareExchange8(volatile char * _Destination, char _Exchange, char _Comparand); } 
#line 166
extern "C" { unsigned char _InterlockedCompareExchange128(volatile __int64 * _Destination, __int64 _ExchangeHigh, __int64 _ExchangeLow, __int64 * _ComparandResult); } 



extern "C" { long _InterlockedDecrement(volatile long * _Addend); } 

extern "C" { short _InterlockedDecrement16(volatile short * _Addend); } 
extern "C" { __int64 _InterlockedDecrement64(volatile __int64 * _Addend); } 
extern "C" { __int64 _interlockeddecrement64(volatile __int64 * _Addend); } 
extern "C" { long _InterlockedExchange(volatile long * _Target, long _Value); } 

extern "C" { short _InterlockedExchange16(volatile short * _Target, short _Value); } 



extern "C" { __int64 _InterlockedExchange64(volatile __int64 * _Target, __int64 _Value); } 
extern "C" { __int64 _interlockedexchange64(volatile __int64 * _Target, __int64 _Value); } 



extern "C" { char _InterlockedExchange8(volatile char * _Target, char _Value); } 



extern "C" { long _InterlockedExchangeAdd(volatile long * _Addend, long _Value); } 
extern "C" { short _InterlockedExchangeAdd16(volatile short * _Addend, short _Value); } 



extern "C" { __int64 _InterlockedExchangeAdd64(volatile __int64 * _Addend, __int64 _Value); } 
extern "C" { __int64 _interlockedexchangeadd64(volatile __int64 * _Addend, __int64 _Value); } 



extern "C" { char _InterlockedExchangeAdd8(volatile char * _Addend, char _Value); } 
#line 210
extern "C" { long _InterlockedIncrement(volatile long * _Addend); } 

extern "C" { short _InterlockedIncrement16(volatile short * _Addend); } 
extern "C" { __int64 _InterlockedIncrement64(volatile __int64 * _Addend); } 
extern "C" { __int64 _interlockedincrement64(volatile __int64 * _Addend); } 

extern "C" { long _InterlockedOr(volatile long * _Value, long _Mask); } 
extern "C" { short _InterlockedOr16(volatile short * _Value, short _Mask); } 



extern "C" { __int64 _InterlockedOr64(volatile __int64 * _Value, __int64 _Mask); } 
extern "C" { __int64 _interlockedor64(volatile __int64 * _Value, __int64 _Mask); } 



extern "C" { char _InterlockedOr8(volatile char * _Value, char _Mask); } 
#line 233
extern "C" { long _InterlockedXor(volatile long * _Value, long _Mask); } 
extern "C" { short _InterlockedXor16(volatile short * _Value, short _Mask); } 



extern "C" { __int64 _InterlockedXor64(volatile __int64 * _Value, __int64 _Mask); } 
extern "C" { __int64 _interlockedxor64(volatile __int64 * _Value, __int64 _Mask); } 



extern "C" { char _InterlockedXor8(volatile char * _Value, char _Mask); } 
#line 250
extern "C" { void _ReadWriteBarrier(); } 
extern "C" { short __iso_volatile_load16(const volatile short *); } 
extern "C" { int __iso_volatile_load32(const volatile int *); } 
extern "C" { __int64 __iso_volatile_load64(const volatile __int64 *); } 
extern "C" { char __iso_volatile_load8(const volatile char *); } 
extern "C" { void __iso_volatile_store16(volatile short *, short); } 
extern "C" { void __iso_volatile_store32(volatile int *, int); } 
extern "C" { void __iso_volatile_store64(volatile __int64 *, __int64); } 
extern "C" { void __iso_volatile_store8(volatile char *, char); } 


extern "C" { unsigned char _interlockedbittestandset(volatile long *, long); } 



extern "C" { void _mm_pause(); } 
extern "C" { unsigned __lzcnt(unsigned); } 
extern "C" { unsigned short __lzcnt16(unsigned short); } 
extern "C" { unsigned __int64 __lzcnt64(unsigned __int64); } 
extern "C" { unsigned __popcnt(unsigned); } 
extern "C" { unsigned short __popcnt16(unsigned short); } 
extern "C" { unsigned __int64 __popcnt64(unsigned __int64); } 
extern "C" { unsigned __int64 __shiftright128(unsigned __int64 _LowPart, unsigned __int64 _HighPart, unsigned char _Shift); } 

extern "C" { unsigned _tzcnt_u32(unsigned); } 
extern "C" { unsigned __int64 _tzcnt_u64(unsigned __int64); } 

extern "C" { unsigned __int64 _umul128(unsigned __int64 _Multiplier, unsigned __int64 _Multiplicand, unsigned __int64 * _HighProduct); } 
extern "C" { double __ceil(double); } 
extern "C" { float __ceilf(float); } 
extern "C" { double __floor(double); } 
extern "C" { float __floorf(float); } 
extern "C" { double __round(double); } 
extern "C" { float __roundf(float); } 
extern "C" { double __trunc(double); } 
extern "C" { float __truncf(float); } 
extern "C" { double __copysign(double, double); } 
extern "C" { float __copysignf(float, float); } 
extern "C" { unsigned __signbitvalue(double); } 
extern "C" { unsigned __signbitvaluef(float); } 
extern "C" { int _cvt_ftoi_sat(float a); } 
extern "C" { unsigned _cvt_ftoui_sat(float a); } 
extern "C" { __int64 _cvt_ftoll_sat(float a); } 
extern "C" { unsigned __int64 _cvt_ftoull_sat(float a); } 
extern "C" { int _cvt_ftoi_sent(float a); } 
extern "C" { unsigned _cvt_ftoui_sent(float a); } 
extern "C" { __int64 _cvt_ftoll_sent(float a); } 
extern "C" { unsigned __int64 _cvt_ftoull_sent(float a); } 
extern "C" { int _cvt_dtoi_sat(double a); } 
extern "C" { unsigned _cvt_dtoui_sat(double a); } 
extern "C" { __int64 _cvt_dtoll_sat(double a); } 
extern "C" { unsigned __int64 _cvt_dtoull_sat(double a); } 
extern "C" { int _cvt_dtoi_sent(double a); } 
extern "C" { unsigned _cvt_dtoui_sent(double a); } 
extern "C" { __int64 _cvt_dtoll_sent(double a); } 
extern "C" { unsigned __int64 _cvt_dtoull_sent(double a); } 




extern "C" { void *__cdecl __builtin_assume_aligned(const void *, size_t, ...) noexcept; } 
#line 323
#pragma warning(pop)
#line 29 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\cmath"
#pragma pack ( push, 8 )
#pragma warning(push, 3)
#pragma warning(disable : 4180 4412 4455 4494 4514 4574 4582 4583 4587 4588 4619 4623 4625 4626 4643 4648 4702 4793 4820 4988 5026 5027 5045 6294 4984 5053)




[[nodiscard]] inline float acos(float _Xx) noexcept { 
return ::acosf(_Xx); 
} 

[[nodiscard]] inline float acosh(float _Xx) noexcept { 
return ::acoshf(_Xx); 
} 

[[nodiscard]] inline float asin(float _Xx) noexcept { 
return ::asinf(_Xx); 
} 

[[nodiscard]] inline float asinh(float _Xx) noexcept { 
return ::asinhf(_Xx); 
} 

[[nodiscard]] inline float atan(float _Xx) noexcept { 
return ::atanf(_Xx); 
} 

[[nodiscard]] inline float atanh(float _Xx) noexcept { 
return ::atanhf(_Xx); 
} 

[[nodiscard]] inline float atan2(float _Yx, float _Xx) noexcept { 
return ::atan2f(_Yx, _Xx); 
} 

[[nodiscard]] inline float cbrt(float _Xx) noexcept { 
return ::cbrtf(_Xx); 
} 

[[nodiscard]] inline float ceil(float _Xx) noexcept { 

return __ceilf(_Xx); 
#line 76
} 

[[nodiscard]] inline float copysign(float _Number, float _Sign) noexcept { 

return __copysignf(_Number, _Sign); 
#line 86
} 

[[nodiscard]] inline float cos(float _Xx) noexcept { 
return ::cosf(_Xx); 
} 

[[nodiscard]] inline float cosh(float _Xx) noexcept { 
return ::coshf(_Xx); 
} 

[[nodiscard]] inline float erf(float _Xx) noexcept { 
return ::erff(_Xx); 
} 

[[nodiscard]] inline float erfc(float _Xx) noexcept { 
return ::erfcf(_Xx); 
} 

[[nodiscard]] inline float exp(float _Xx) noexcept { 
return ::expf(_Xx); 
} 

[[nodiscard]] inline float exp2(float _Xx) noexcept { 
return ::exp2f(_Xx); 
} 

[[nodiscard]] inline float expm1(float _Xx) noexcept { 
return ::expm1f(_Xx); 
} 

[[nodiscard]] inline float fabs(float _Xx) noexcept { 
return ::fabsf(_Xx); 
} 

[[nodiscard]] inline float fdim(float _Xx, float _Yx) noexcept { 
return ::fdimf(_Xx, _Yx); 
} 

[[nodiscard]] inline float floor(float _Xx) noexcept { 

return __floorf(_Xx); 
#line 132
} 

[[nodiscard]] inline float fma(float _Xx, float _Yx, float _Zx) noexcept { 
return ::fmaf(_Xx, _Yx, _Zx); 
} 

[[nodiscard]] inline float fmax(float _Xx, float _Yx) noexcept { 
return ::fmaxf(_Xx, _Yx); 
} 

[[nodiscard]] inline float fmin(float _Xx, float _Yx) noexcept { 
return ::fminf(_Xx, _Yx); 
} 

[[nodiscard]] inline float fmod(float _Xx, float _Yx) noexcept { 
return ::fmodf(_Xx, _Yx); 
} 

inline float frexp(float _Xx, int *_Yx) noexcept { 
return ::frexpf(_Xx, _Yx); 
} 

[[nodiscard]] inline float hypot(float _Xx, float _Yx) noexcept { 
return ::hypotf(_Xx, _Yx); 
} 

[[nodiscard]] inline int ilogb(float _Xx) noexcept { 
return ::ilogbf(_Xx); 
} 

[[nodiscard]] inline float ldexp(float _Xx, int _Yx) noexcept { 
return ::ldexpf(_Xx, _Yx); 
} 

[[nodiscard]] inline float lgamma(float _Xx) noexcept { 
return ::lgammaf(_Xx); 
} 

[[nodiscard]] inline __int64 llrint(float _Xx) noexcept { 
return ::llrintf(_Xx); 
} 

[[nodiscard]] inline __int64 llround(float _Xx) noexcept { 
return ::llroundf(_Xx); 
} 

[[nodiscard]] inline float log(float _Xx) noexcept { 
return ::logf(_Xx); 
} 

[[nodiscard]] inline float log10(float _Xx) noexcept { 
return ::log10f(_Xx); 
} 

[[nodiscard]] inline float log1p(float _Xx) noexcept { 
return ::log1pf(_Xx); 
} 

[[nodiscard]] inline float log2(float _Xx) noexcept { 
return ::log2f(_Xx); 
} 

[[nodiscard]] inline float logb(float _Xx) noexcept { 
return ::logbf(_Xx); 
} 

[[nodiscard]] inline long lrint(float _Xx) noexcept { 
return ::lrintf(_Xx); 
} 

[[nodiscard]] inline long lround(float _Xx) noexcept { 
return ::lroundf(_Xx); 
} 

inline float modf(float _Xx, float *_Yx) noexcept { 
return ::modff(_Xx, _Yx); 
} 

[[nodiscard]] inline float nearbyint(float _Xx) noexcept { 
return ::nearbyintf(_Xx); 
} 

[[nodiscard]] inline float nextafter(float _Xx, float _Yx) noexcept { 
return ::nextafterf(_Xx, _Yx); 
} 

[[nodiscard]] inline float nexttoward(float _Xx, long double _Yx) noexcept { 
return ::nexttowardf(_Xx, _Yx); 
} 

[[nodiscard]] inline float pow(float _Xx, float _Yx) noexcept { 
return ::powf(_Xx, _Yx); 
} 

[[nodiscard]] inline float remainder(float _Xx, float _Yx) noexcept { 
return ::remainderf(_Xx, _Yx); 
} 

inline float remquo(float _Xx, float _Yx, int *_Zx) noexcept { 
return ::remquof(_Xx, _Yx, _Zx); 
} 

[[nodiscard]] inline float rint(float _Xx) noexcept { 
return ::rintf(_Xx); 
} 

[[nodiscard]] inline float round(float _Xx) noexcept { 

return __roundf(_Xx); 
#line 246
} 

[[nodiscard]] inline float scalbln(float _Xx, long _Yx) noexcept { 
return ::scalblnf(_Xx, _Yx); 
} 

[[nodiscard]] inline float scalbn(float _Xx, int _Yx) noexcept { 
return ::scalbnf(_Xx, _Yx); 
} 

[[nodiscard]] inline float sin(float _Xx) noexcept { 
return ::sinf(_Xx); 
} 

[[nodiscard]] inline float sinh(float _Xx) noexcept { 
return ::sinhf(_Xx); 
} 

[[nodiscard]] inline float sqrt(float _Xx) noexcept { 
return ::sqrtf(_Xx); 
} 

[[nodiscard]] inline float tan(float _Xx) noexcept { 
return ::tanf(_Xx); 
} 

[[nodiscard]] inline float tanh(float _Xx) noexcept { 
return ::tanhf(_Xx); 
} 

[[nodiscard]] inline float tgamma(float _Xx) noexcept { 
return ::tgammaf(_Xx); 
} 

[[nodiscard]] inline float trunc(float _Xx) noexcept { 

return __truncf(_Xx); 
#line 288
} 

[[nodiscard]] inline long double acos(long double _Xx) noexcept { 
return ::acosl(_Xx); 
} 

[[nodiscard]] inline long double acosh(long double _Xx) noexcept { 
return ::acoshl(_Xx); 
} 

[[nodiscard]] inline long double asin(long double _Xx) noexcept { 
return ::asinl(_Xx); 
} 

[[nodiscard]] inline long double asinh(long double _Xx) noexcept { 
return ::asinhl(_Xx); 
} 

[[nodiscard]] inline long double atan(long double _Xx) noexcept { 
return ::atanl(_Xx); 
} 

[[nodiscard]] inline long double atanh(long double _Xx) noexcept { 
return ::atanhl(_Xx); 
} 

[[nodiscard]] inline long double atan2(long double _Yx, long double _Xx) noexcept 
{ 
return ::atan2l(_Yx, _Xx); 
} 

[[nodiscard]] inline long double cbrt(long double _Xx) noexcept { 
return ::cbrtl(_Xx); 
} 

[[nodiscard]] inline long double ceil(long double _Xx) noexcept { 

return __ceil(static_cast< double>(_Xx)); 
#line 331
} 

[[nodiscard]] inline long double copysign(long double _Number, long double _Sign) noexcept 
{ 

return __copysign(static_cast< double>(_Number), static_cast< double>(_Sign)); 
#line 342
} 

[[nodiscard]] inline long double cos(long double _Xx) noexcept { 
return ::cosl(_Xx); 
} 

[[nodiscard]] inline long double cosh(long double _Xx) noexcept { 
return ::coshl(_Xx); 
} 

[[nodiscard]] inline long double erf(long double _Xx) noexcept { 
return ::erfl(_Xx); 
} 

[[nodiscard]] inline long double erfc(long double _Xx) noexcept { 
return ::erfcl(_Xx); 
} 

[[nodiscard]] inline long double exp(long double _Xx) noexcept { 
return ::expl(_Xx); 
} 

[[nodiscard]] inline long double exp2(long double _Xx) noexcept { 
return ::exp2l(_Xx); 
} 

[[nodiscard]] inline long double expm1(long double _Xx) noexcept { 
return ::expm1l(_Xx); 
} 

[[nodiscard]] inline long double fabs(long double _Xx) noexcept { 
return ::fabsl(_Xx); 
} 

[[nodiscard]] inline long double fdim(long double _Xx, long double _Yx) noexcept 
{ 
return ::fdiml(_Xx, _Yx); 
} 

[[nodiscard]] inline long double floor(long double _Xx) noexcept { 

return __floor(static_cast< double>(_Xx)); 
#line 389
} 

[[nodiscard]] inline long double fma(long double 
_Xx, long double _Yx, long double _Zx) noexcept { 
return ::fmal(_Xx, _Yx, _Zx); 
} 

[[nodiscard]] inline long double fmax(long double _Xx, long double _Yx) noexcept 
{ 
return ::fmaxl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double fmin(long double _Xx, long double _Yx) noexcept 
{ 
return ::fminl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double fmod(long double _Xx, long double _Yx) noexcept 
{ 
return ::fmodl(_Xx, _Yx); 
} 

inline long double frexp(long double _Xx, int *_Yx) noexcept { 
return ::frexpl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double hypot(long double _Xx, long double _Yx) noexcept 
{ 
return ::hypotl(_Xx, _Yx); 
} 

[[nodiscard]] inline int ilogb(long double _Xx) noexcept { 
return ::ilogbl(_Xx); 
} 

[[nodiscard]] inline long double ldexp(long double _Xx, int _Yx) noexcept { 
return ::ldexpl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double lgamma(long double _Xx) noexcept { 
return ::lgammal(_Xx); 
} 

[[nodiscard]] inline __int64 llrint(long double _Xx) noexcept { 
return ::llrintl(_Xx); 
} 

[[nodiscard]] inline __int64 llround(long double _Xx) noexcept { 
return ::llroundl(_Xx); 
} 

[[nodiscard]] inline long double log(long double _Xx) noexcept { 
return ::logl(_Xx); 
} 

[[nodiscard]] inline long double log10(long double _Xx) noexcept { 
return ::log10l(_Xx); 
} 

[[nodiscard]] inline long double log1p(long double _Xx) noexcept { 
return ::log1pl(_Xx); 
} 

[[nodiscard]] inline long double log2(long double _Xx) noexcept { 
return ::log2l(_Xx); 
} 

[[nodiscard]] inline long double logb(long double _Xx) noexcept { 
return ::logbl(_Xx); 
} 

[[nodiscard]] inline long lrint(long double _Xx) noexcept { 
return ::lrintl(_Xx); 
} 

[[nodiscard]] inline long lround(long double _Xx) noexcept { 
return ::lroundl(_Xx); 
} 

inline long double modf(long double _Xx, long double *_Yx) noexcept { 
return ::modfl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double nearbyint(long double _Xx) noexcept { 
return ::nearbyintl(_Xx); 
} 

[[nodiscard]] inline long double nextafter(long double _Xx, long double _Yx) noexcept 
{ 
return ::nextafterl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double nexttoward(long double _Xx, long double _Yx) noexcept 
{ 
return ::nexttowardl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double pow(long double _Xx, long double _Yx) noexcept 
{ 
return ::powl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double remainder(long double _Xx, long double _Yx) noexcept 
{ 
return ::remainderl(_Xx, _Yx); 
} 

inline long double remquo(long double _Xx, long double _Yx, int *_Zx) noexcept { 
return ::remquol(_Xx, _Yx, _Zx); 
} 

[[nodiscard]] inline long double rint(long double _Xx) noexcept { 
return ::rintl(_Xx); 
} 

[[nodiscard]] inline long double round(long double _Xx) noexcept { 

return __round(static_cast< double>(_Xx)); 
#line 512
} 

[[nodiscard]] inline long double scalbln(long double _Xx, long _Yx) noexcept { 
return ::scalblnl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double scalbn(long double _Xx, int _Yx) noexcept { 
return ::scalbnl(_Xx, _Yx); 
} 

[[nodiscard]] inline long double sin(long double _Xx) noexcept { 
return ::sinl(_Xx); 
} 

[[nodiscard]] inline long double sinh(long double _Xx) noexcept { 
return ::sinhl(_Xx); 
} 

[[nodiscard]] inline long double sqrt(long double _Xx) noexcept { 
return ::sqrtl(_Xx); 
} 

[[nodiscard]] inline long double tan(long double _Xx) noexcept { 
return ::tanl(_Xx); 
} 

[[nodiscard]] inline long double tanh(long double _Xx) noexcept { 
return ::tanhl(_Xx); 
} 

[[nodiscard]] inline long double tgamma(long double _Xx) noexcept { 
return ::tgammal(_Xx); 
} 

[[nodiscard]] inline long double trunc(long double _Xx) noexcept { 

return __trunc(static_cast< double>(_Xx)); 
#line 554
} 


namespace std { 
template < class _Ty1, class _Ty2 >
using _Common_float_type_t = conditional_t < is_same_v < _Ty1, long double > || is_same_v < _Ty2, long double >, long double,
    conditional_t < is_same_v < _Ty1, float > && is_same_v < _Ty2, float >, float,
        double >>;
}

template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 >
double frexp ( _Ty _Value, int * const _Exp ) noexcept {
    return :: frexp ( static_cast < double > ( _Value ), _Exp );
}

template < class _Ty1, class _Ty2, class _Ty3,
    :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > && :: std :: is_arithmetic_v < _Ty3 >, int > = 0 >
[ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 > > fma (
    _Ty1 _Left, _Ty2 _Middle, _Ty3 _Right ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 >>;
    if constexpr ( :: std :: is_same_v < _Common, float > ) {
        return :: fmaf ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );
    } else if constexpr ( :: std :: is_same_v < _Common, double > ) {
        return :: fma ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );
    } else {
        return :: fmal ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) );
    }
}

template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 >
:: std :: _Common_float_type_t < _Ty1, _Ty2 > remquo ( _Ty1 _Left, _Ty2 _Right, int * _Pquo ) noexcept {
    using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;
    if constexpr ( :: std :: is_same_v < _Common, float > ) {
        return :: remquof ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );
    } else if constexpr ( :: std :: is_same_v < _Common, double > ) {
        return :: remquo ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );
    } else {
        return :: remquol ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo );
    }
}
#line 637
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double acos ( _Ty _Left ) noexcept { return :: acos ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double asin ( _Ty _Left ) noexcept { return :: asin ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double atan ( _Ty _Left ) noexcept { return :: atan ( static_cast < double > ( _Left ) ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > atan2 ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: atan2 ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cos ( _Ty _Left ) noexcept { return :: cos ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sin ( _Ty _Left ) noexcept { return :: sin ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tan ( _Ty _Left ) noexcept { return :: tan ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double acosh ( _Ty _Left ) noexcept { return :: acosh ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double asinh ( _Ty _Left ) noexcept { return :: asinh ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double atanh ( _Ty _Left ) noexcept { return :: atanh ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cosh ( _Ty _Left ) noexcept { return :: cosh ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sinh ( _Ty _Left ) noexcept { return :: sinh ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tanh ( _Ty _Left ) noexcept { return :: tanh ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double exp ( _Ty _Left ) noexcept { return :: exp ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double exp2 ( _Ty _Left ) noexcept { return :: exp2 ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double expm1 ( _Ty _Left ) noexcept { return :: expm1 ( static_cast < double > ( _Left ) ); }

template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] int ilogb ( _Ty _Left ) noexcept { return :: ilogb ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double ldexp ( _Ty _Left, int _Arg2 ) noexcept { return :: ldexp ( static_cast < double > ( _Left ), _Arg2 ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log ( _Ty _Left ) noexcept { return :: log ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log10 ( _Ty _Left ) noexcept { return :: log10 ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log1p ( _Ty _Left ) noexcept { return :: log1p ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double log2 ( _Ty _Left ) noexcept { return :: log2 ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double logb ( _Ty _Left ) noexcept { return :: logb ( static_cast < double > ( _Left ) ); }

template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double scalbn ( _Ty _Left, int _Arg2 ) noexcept { return :: scalbn ( static_cast < double > ( _Left ), _Arg2 ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double scalbln ( _Ty _Left, long _Arg2 ) noexcept { return :: scalbln ( static_cast < double > ( _Left ), _Arg2 ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double cbrt ( _Ty _Left ) noexcept { return :: cbrt ( static_cast < double > ( _Left ) ); }

template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double fabs ( _Ty _Left ) noexcept { return :: fabs ( static_cast < double > ( _Left ) ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > hypot ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: hypot ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }

template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > pow ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: pow ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double sqrt ( _Ty _Left ) noexcept { return :: sqrt ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double erf ( _Ty _Left ) noexcept { return :: erf ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double erfc ( _Ty _Left ) noexcept { return :: erfc ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double lgamma ( _Ty _Left ) noexcept { return :: lgamma ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double tgamma ( _Ty _Left ) noexcept { return :: tgamma ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double ceil ( _Ty _Left ) noexcept { return __ceil ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double floor ( _Ty _Left ) noexcept { return __floor ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double nearbyint ( _Ty _Left ) noexcept { return :: nearbyint ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double rint ( _Ty _Left ) noexcept { return :: rint ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long lrint ( _Ty _Left ) noexcept { return :: lrint ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long long llrint ( _Ty _Left ) noexcept { return :: llrint ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double round ( _Ty _Left ) noexcept { return __round ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long lround ( _Ty _Left ) noexcept { return :: lround ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] long long llround ( _Ty _Left ) noexcept { return :: llround ( static_cast < double > ( _Left ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double trunc ( _Ty _Left ) noexcept { return __trunc ( static_cast < double > ( _Left ) ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmod ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmod ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > remainder ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: remainder ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }

template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > copysign ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return __copysign ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }

template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > nextafter ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: nextafter ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
template < class _Ty, :: std :: enable_if_t < :: std :: is_integral_v < _Ty >, int > = 0 > [ [ nodiscard ] ] double nexttoward ( _Ty _Left, long double _Arg2 ) noexcept { return :: nexttoward ( static_cast < double > ( _Left ), _Arg2 ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fdim ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fdim ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmax ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmax ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
template < class _Ty1, class _Ty2, :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >, int > = 0 > [ [ nodiscard ] ] :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmin ( _Ty1 _Left, _Ty2 _Right ) noexcept { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return :: fmin ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ); }
#line 711
namespace std { 
using ::abs;
using ::acos;
using ::asin;
using ::atan;
using ::atan2;
using ::ceil;
using ::cos;
using ::cosh;
using ::exp;
using ::fabs;
using ::floor;
using ::fmod;
using ::frexp;
using ::ldexp;
using ::log;
using ::log10;
using ::modf;
using ::pow;
using ::sin;
using ::sinh;
using ::sqrt;
using ::tan;
using ::tanh;

using ::acosf;
using ::asinf;
using ::atanf;
using ::atan2f;
using ::ceilf;
using ::cosf;
using ::coshf;
using ::expf;
using ::fabsf;
using ::floorf;
using ::fmodf;
using ::frexpf;
using ::ldexpf;
using ::logf;
using ::log10f;
using ::modff;
using ::powf;
using ::sinf;
using ::sinhf;
using ::sqrtf;
using ::tanf;
using ::tanhf;

using ::acosl;
using ::asinl;
using ::atanl;
using ::atan2l;
using ::ceill;
using ::cosl;
using ::coshl;
using ::expl;
using ::fabsl;
using ::floorl;
using ::fmodl;
using ::frexpl;
using ::ldexpl;
using ::logl;
using ::log10l;
using ::modfl;
using ::powl;
using ::sinl;
using ::sinhl;
using ::sqrtl;
using ::tanl;
using ::tanhl;

using ::float_t;
using ::double_t;

using ::acosh;
using ::asinh;
using ::atanh;
using ::cbrt;
using ::erf;
using ::erfc;
using ::expm1;
using ::exp2;
using ::hypot;
using ::ilogb;
using ::lgamma;
using ::log1p;
using ::log2;
using ::logb;
using ::llrint;
using ::lrint;
using ::nearbyint;
using ::rint;
using ::llround;
using ::lround;
using ::fdim;
using ::fma;
using ::fmax;
using ::fmin;
using ::round;
using ::trunc;
using ::remainder;
using ::remquo;
using ::copysign;
using ::nan;
using ::nextafter;
using ::scalbn;
using ::scalbln;
using ::nexttoward;
using ::tgamma;

using ::acoshf;
using ::asinhf;
using ::atanhf;
using ::cbrtf;
using ::erff;
using ::erfcf;
using ::expm1f;
using ::exp2f;
using ::hypotf;
using ::ilogbf;
using ::lgammaf;
using ::log1pf;
using ::log2f;
using ::logbf;
using ::llrintf;
using ::lrintf;
using ::nearbyintf;
using ::rintf;
using ::llroundf;
using ::lroundf;
using ::fdimf;
using ::fmaf;
using ::fmaxf;
using ::fminf;
using ::roundf;
using ::truncf;
using ::remainderf;
using ::remquof;
using ::copysignf;
using ::nanf;
using ::nextafterf;
using ::scalbnf;
using ::scalblnf;
using ::nexttowardf;
using ::tgammaf;

using ::acoshl;
using ::asinhl;
using ::atanhl;
using ::cbrtl;
using ::erfl;
using ::erfcl;
using ::expm1l;
using ::exp2l;
using ::hypotl;
using ::ilogbl;
using ::lgammal;
using ::log1pl;
using ::log2l;
using ::logbl;
using ::llrintl;
using ::lrintl;
using ::nearbyintl;
using ::rintl;
using ::llroundl;
using ::lroundl;
using ::fdiml;
using ::fmal;
using ::fmaxl;
using ::fminl;
using ::roundl;
using ::truncl;
using ::remainderl;
using ::remquol;
using ::copysignl;
using ::nanl;
using ::nextafterl;
using ::scalbnl;
using ::scalblnl;
using ::nexttowardl;
using ::tgammal;

using ::fpclassify;
using ::signbit;
using ::isfinite;
using ::isinf;
using ::isnan;
using ::isnormal;
using ::isgreater;
using ::isgreaterequal;
using ::isless;
using ::islessequal;
using ::islessgreater;
using ::isunordered;
}
#line 1336
#endif /* _CMATH_ */
#line 1332
#pragma warning(pop)
#pragma pack ( pop )
#line 15 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\math_constants.hpp"
constexpr double ZP_PI = (3.14159265358979311599796346854); 



constexpr double ZP_E = (2.71828182845904523536028747135); 
#line 26
#ifndef DEG_TO_RAD
#define DEG_TO_RAD(angleInDegrees) ((angleInDegrees) * ZP_PI / 180.0)
#endif /* DEG_TO_RAD */

#ifndef RAD_TO_DEG
#define RAD_TO_DEG(angleInRadians) ((angleInRadians) * 180.0 / ZP_PI)
#endif /* RAD_TO_DEG */
#line 1 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\sf_config.h"
#ifndef SF_CONFIG_H_
#define SF_CONFIG_H_





#endif /* SF_CONFIG_H_ */
#line 52 "C:\\Users\\mahus\\Desktop\\WARG_NEW\\ZP3-Simulator\\sensor_fusion\\Src\\sensor_fusion.cpp"
typedef 
#line 48
struct { 
float roll, pitch, yaw; 
float rollRate, pitchRate, yawRate; 
float airspeed; 
} SFAttitudeOutput_t; 

struct SFPathOutput_t { 
float altitude; 
float rateOfClimb; 
long double latitude; 
float latitudeSpeed; 
long double longitude; 
float longitudeSpeed; 
}; 

void mul(float *A, float *B, float *C, int row_a, int column_a, int column_b) { __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_88(); 


float *data_a; 
float *data_b; 

for (int i = 0; __MW_INSTRUM_NODE_89(i < row_a); i++) { 

for (int j = 0; __MW_INSTRUM_NODE_91(j < column_b); j++) { 
data_a = &(A[i * column_a]); 
data_b = &(B[j]); 

*C = (0); 

for (int k = 0; __MW_INSTRUM_NODE_93(k < column_a); k++) { 
*C += *data_a * *data_b; 
data_a++; 
data_b += column_b; 
}  
C++; 
}  
}  __MW_INSTRUM_NODE_95(); 
} 

void tran(float *A, int row, int column) { __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_96(); 

float *B = (float *)(__MW_INSTRUM_NODE_97(), malloc((row * column) * sizeof(float))); 
float *transpose; 
float *ptr_A = A; 

for (int i = 0; __MW_INSTRUM_NODE_98(i < row); i++) { 
transpose = &(B[i]); 
for (int j = 0; __MW_INSTRUM_NODE_100(j < column); j++) { 
*transpose = *ptr_A; 
ptr_A++; 
transpose += row; 
}  
}  


__MW_INSTRUM_NODE_102(), memcpy(A, B, (row * column) * sizeof(float)); __MW_INSTRUM_NODE_103(); 
} 

uint8_t lup(float *A, float *LU, int *P, int row) { __MW_INSTRUM_FCN_ENTER_6(); float __mw_tmp_for_expr_3; float __mw_tmp_for_expr_2; float __mw_tmp_for_expr_1; __MW_INSTRUM_NODE_104(); 


if (__MW_INSTRUM_NODE_105(A != LU)) { __MW_INSTRUM_NODE_107(), memcpy(LU, A, (row * row) * sizeof(float)); }  


for (int i = 0; __MW_INSTRUM_NODE_108(i < row); ++i) 
{ *(P + i) = i; }  

for (int i = 0; __MW_INSTRUM_NODE_110(i < row - 1); ++i) { 
int ind_max, tmp_int; 

ind_max = i; 
for (int j = i + 1; __MW_INSTRUM_NODE_112(j < row); ++j) 
{ if (__MW_INSTRUM_NODE_114(((__mw_tmp_for_expr_1 = (__MW_INSTRUM_NODE_118(), fabsf(*((LU + row * *(P + j)) + i)))), ((__mw_tmp_for_expr_2 = (__MW_INSTRUM_NODE_119(), fabsf(*((LU + row * *(P + ind_max)) + i)))), (__MW_INSTRUM_NODE_116(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 > __mw_tmp_for_expr_2)))))) 
{ ind_max = j; }  }  

tmp_int = *(P + i); 
*(P + i) = P[ind_max]; 
*(P + ind_max) = tmp_int; 

if (__MW_INSTRUM_NODE_120(((__mw_tmp_for_expr_3 = (__MW_INSTRUM_NODE_124(), fabsf(*((LU + row * *(P + i)) + i)))), (__MW_INSTRUM_NODE_122(__mw_tmp_for_expr_3, (1.192092896e-07F)), (__mw_tmp_for_expr_3 < (1.192092896e-07F)))))) 
{ __MW_INSTRUM_NODE_125(); return 0; }  __MW_INSTRUM_NODE_126(); 

for (int j = i + 1; __MW_INSTRUM_NODE_127(j < row); ++j) { 
*((LU + row * *(P + j)) + i) = *((LU + row * *(P + j)) + i) / *((LU + row * *(P + i)) + i); 

for (int k = i + 1; __MW_INSTRUM_NODE_129(k < row); ++k) 
{ *((LU + row * *(P + j)) + k) = *((LU + row * *(P + j)) + k) - *((LU + row * *(P + i)) + k) * *((LU + row * *(P + j)) + i); }  
}  
}  __MW_INSTRUM_NODE_131(); __MW_INSTRUM_NODE_132(); 

return 1; 
} 

static void solve(float * A, float * x, float * b, int * P, float * LU, uint16_t row); 

int inv(float *A, int row) { __MW_INSTRUM_FCN_ENTER_7(); __MW_INSTRUM_NODE_133(); 


float *iA = (float *)(__MW_INSTRUM_NODE_134(), malloc((row * row) * sizeof(float))); 


float *tmpvec = (float *)(__MW_INSTRUM_NODE_135(), malloc(row * sizeof(float))); 
__MW_INSTRUM_NODE_136(), memset(tmpvec, 0, row * sizeof(float)); 
int status = 0; 


float *LU = (float *)(__MW_INSTRUM_NODE_137(), malloc((row * row) * sizeof(float))); 
int *P = (int *)(__MW_INSTRUM_NODE_138(), malloc(row * sizeof(int))); 
status = (__MW_INSTRUM_NODE_139(), lup(A, LU, P, row)); 
if (__MW_INSTRUM_NODE_140((__MW_INSTRUM_NODE_142(status, -1), (status == (-1))))) 
{ __MW_INSTRUM_NODE_145(); return -1; }  __MW_INSTRUM_NODE_146(); 

for (int i = 0; __MW_INSTRUM_NODE_147(i < row); ++i) { 
tmpvec[i] = ((1.0)); 
__MW_INSTRUM_NODE_149(), solve(A, &(iA[row * i]), tmpvec, P, LU, row); 
tmpvec[i] = ((0.0)); 
}  


__MW_INSTRUM_NODE_150(), tran(iA, row, row); 


__MW_INSTRUM_NODE_151(), memcpy(A, iA, (row * row) * sizeof(float)); 

{ int __mw_tmp_for_return = status; __MW_INSTRUM_NODE_152(); return __mw_tmp_for_return; } 
} 


static void solve(float *A, float *x, float *b, int *P, float *LU, uint16_t row) { __MW_INSTRUM_FCN_ENTER_8(); __MW_INSTRUM_NODE_153(); 

for (uint16_t i = (0); __MW_INSTRUM_NODE_154(i < row); ++i) { 
*(x + i) = *(b + *(P + i)); 

for (uint16_t j = (0); __MW_INSTRUM_NODE_156(j < i); ++j) 
{ *(x + i) = *(x + i) - *((LU + row * *(P + i)) + j) * *(x + j); }  
}  


for (int16_t i = row - 1; __MW_INSTRUM_NODE_158(i >= 0); --i) { 
for (int16_t j = i + 1; __MW_INSTRUM_NODE_160(j < row); ++j) 
{ *(x + i) = *(x + i) - *((LU + row * *(P + i)) + j) * *(x + j); }  

*(x + i) = *(x + i) / *((LU + row * *(P + i)) + i); 
}  __MW_INSTRUM_NODE_162(); 
} 
#line 214
static double REF_LAT = (0); 
static double REF_LONG = (0); 
static bool gpsRefIsSet = false; 
constexpr int EARTH_RAD = 6367449; 
constexpr int LAT_DIST = 111133; 


const int HIGH_COVAR = 10000; 


SFError_t SFError; 

SFError_t SF_Init(SFIterationData_t *iterData) 
{ __MW_INSTRUM_FCN_ENTER_9(); __MW_INSTRUM_NODE_163(); 

SFError.errorCode = 0; 
#line 254
for (int i = 0; __MW_INSTRUM_NODE_164(i < 6); i++) { iterData->prevX[0] = (0); }  
iterData->prevP[0] = (100000); 
iterData->prevP[1] = (0); 
iterData->prevP[2 * 6 + 2] = (100000); 
iterData->prevP[3] = (0); 
iterData->prevP[4 * 6 + 4] = (100000); 
iterData->prevP[5] = (0); __MW_INSTRUM_NODE_166(); 




return SFError; 
} 


void localToGlobalAccel(IMU_Data_t *imudata, float *u) 
{ __MW_INSTRUM_FCN_ENTER_10(); __MW_INSTRUM_NODE_167(); 
u[0] = imudata->accy; 
u[1] = imudata->accx; 
u[2] = imudata->accz; __MW_INSTRUM_NODE_168(); 
} 



double *gpsToCartesian(double lat, double lng) { __MW_INSTRUM_FCN_ENTER_11(); __MW_INSTRUM_NODE_169(); 
const double RAD_LAT = (REF_LAT * ZP_PI) / (180.0); 
static double xy[2] = {(0)}; 


xy[0] = (lat - REF_LAT) * LAT_DIST; 


xy[1] = (lng - REF_LONG) * (((EARTH_RAD * (__MW_INSTRUM_NODE_170(), cos(RAD_LAT))) * ZP_PI) / (180.0)); __MW_INSTRUM_NODE_171(); 


return xy; 
} 


SFError_t SF_GetAttitude(SFAttitudeOutput_t *Output, IMU_Data_t *imudata) { __MW_INSTRUM_FCN_ENTER_12(); int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_NODE_172(); 


SFError_t SFError; 

SFError.errorCode = 0; 

float imu_RollAngle = (0); 
float imu_PitchAngle = (0); 
float imu_YawAngle = (0); 

float imu_RollRate = (0); 
float imu_PitchRate = (0); 
float imu_YawRate = (0); 




if (__MW_INSTRUM_NODE_173(((__mw_tmp_for_expr_1 = imudata->sensorStatus), ((__mw_tmp_for_expr_2 = (SENSOR_SUCCESS)), (__MW_INSTRUM_NODE_175(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 != __mw_tmp_for_expr_2)))))) 
{ 
#line 319
SFError.errorCode = (-1); __MW_INSTRUM_NODE_178(); 
return SFError; 
}  __MW_INSTRUM_NODE_179(); 


if (__MW_INSTRUM_NODE_180(!__MW_INSTRUM_NODE_182(imudata->isDataNew))) { 
SFError.errorCode = 1; 
}  




if (__MW_INSTRUM_NODE_184((__MW_INSTRUM_NODE_186(), std::isnan(imudata->magx)))) { 
imudata->magx = (0.0F); 
}  
if (__MW_INSTRUM_NODE_187((__MW_INSTRUM_NODE_189(), std::isnan(imudata->magy)))) { 
imudata->magy = (0.0F); 
}  
if (__MW_INSTRUM_NODE_190((__MW_INSTRUM_NODE_192(), std::isnan(imudata->magz)))) { 
imudata->magz = (0.0F); 
}  

__MW_INSTRUM_NODE_193(), MahonyAHRSupdate(imudata->gyrx, imudata->gyry, imudata->gyrz, imudata->accx, imudata->accy, imudata->accz, imudata->magx, imudata->magy, imudata->magz); 


imu_RollAngle = (__MW_INSTRUM_NODE_194(), atan2f(q0 * q1 + q2 * q3, ((0.5F) - q1 * q1) - q2 * q2)) * (57.29578F); 
imu_PitchAngle = (__MW_INSTRUM_NODE_195(), asinf(-(2.0F) * (q1 * q3 - q0 * q2))) * (57.29578F); 
imu_YawAngle = (__MW_INSTRUM_NODE_196(), atan2f(q1 * q2 + q0 * q3, ((0.5F) - q2 * q2) - q3 * q3)) * (57.29578F) + (180.0F); 
#line 354
Output->pitch = imu_PitchAngle; 
Output->roll = imu_RollAngle; 
Output->yaw = imu_YawAngle; 

Output->pitchRate = imu_PitchRate; 
Output->rollRate = imu_RollRate; 
Output->yawRate = imu_YawRate; __MW_INSTRUM_NODE_197(); 

return SFError; 
} 


double *cartesianToGPS(double x, double y) { __MW_INSTRUM_FCN_ENTER_13(); __MW_INSTRUM_NODE_198(); 
const double RAD_LAT = (REF_LAT * ZP_PI) / (180.0); 
static double latLong[2] = {(0)}; 


latLong[0] = x / LAT_DIST + REF_LAT; 


latLong[1] = y / (((EARTH_RAD * (__MW_INSTRUM_NODE_199(), cos(RAD_LAT))) * ZP_PI) / (180.0)) + REF_LONG; __MW_INSTRUM_NODE_200(); 


return latLong; 
} 


SFError_t SF_GetPosition(SFPathOutput_t *Output, Altimeter_Data_t *altimeterdata, Gps_Data_t *gpsdata, IMU_Data_t *imudata, SFAttitudeOutput_t *attitudedata, SFIterationData_t *iterData) 
{ __MW_INSTRUM_FCN_ENTER_14(); float __mw_tmp_for_expr_3; float __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_NODE_201(); 

SFError_t SFError; 
SFError.errorCode = 0; 

float freq = (SF_FREQ); 
float dt = (1) / freq; 


altimeterdata->altitude = (0); 
imudata->accx = (0); 
imudata->accy = (0); 
imudata->accz = (0); 


float baroCovar = (HIGH_COVAR + 1); 
float gpsCovar; 
if (__MW_INSTRUM_NODE_202((__MW_INSTRUM_NODE_204(gpsdata->dataIsNew)) && (__MW_INSTRUM_NODE_206(((__mw_tmp_for_expr_1 = gpsdata->numSatellites), (__MW_INSTRUM_NODE_208(__mw_tmp_for_expr_1, 3), (__mw_tmp_for_expr_1 >= 3))))))) 
{ 
gpsCovar = (2); 
if (__MW_INSTRUM_NODE_211(!__MW_INSTRUM_NODE_213(gpsRefIsSet))) 
{ 

REF_LAT = gpsdata->latitude; 
REF_LONG = gpsdata->longitude; 
gpsRefIsSet = true; 
}  
} else 

{ 
gpsCovar = HIGH_COVAR + 1; 
}  




const int16_t DIM = (6); 


float f[(DIM * DIM)] = {(1), dt, (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (1), dt, (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (1), dt, (0), (0), (0), (0), (0), (1)}; 
#line 431
const int16_t U_DIM = (3); 


float u[(U_DIM)] = {(0), (0), (0)}; 
#line 440
__MW_INSTRUM_NODE_215(), localToGlobalAccel(imudata, u); 


float ddt = (__MW_INSTRUM_NODE_216(), pow(dt, 2)) / (2); 


float b[(DIM * U_DIM)] = {ddt, (0), (0), dt, (0), (0), (0), ddt, (0), (0), dt, (0), (0), (0), ddt, (0), (0), dt}; 
#line 457
float q[(DIM * DIM)] = {((5.0)), (0), (0), (0), (0), (0), (0), ((5.0)), (0), (0), (0), (0), (0), (0), ((5.0)), (0), (0), (0), (0), (0), (0), ((5.0)), (0), (0), (0), (0), (0), (0), ((5.0)), (0), (0), (0), (0), (0), (0), ((5.0))}; 
#line 467
const int16_t NUM_MEASUREMENTS = (7); 


float h[(NUM_MEASUREMENTS * DIM)] = {(1), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (0), (1), (0), (0), (1), (0), (0), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (0), (1)}; 
#line 481
if (__MW_INSTRUM_NODE_217(((__mw_tmp_for_expr_2 = HIGH_COVAR), (__MW_INSTRUM_NODE_219(baroCovar, __mw_tmp_for_expr_2), (baroCovar >= __mw_tmp_for_expr_2))))) { 
h[0] = (0); 
}  
if (__MW_INSTRUM_NODE_221(((__mw_tmp_for_expr_3 = HIGH_COVAR), (__MW_INSTRUM_NODE_223(gpsCovar, __mw_tmp_for_expr_3), (gpsCovar >= __mw_tmp_for_expr_3))))) 
{ 
h[DIM] = (0); 
h[2 * DIM + 2] = (0); 
h[3 * DIM + 4] = (0); 
h[4 * DIM + 1] = (0); 
h[5 * DIM + 3] = (0); 
h[6 * DIM + 5] = (0); 
}  

double *xyPos = ((__MW_INSTRUM_NODE_225(), gpsToCartesian(gpsdata->latitude, gpsdata->longitude))); 


float z[(NUM_MEASUREMENTS)] = {altimeterdata->altitude, (float)(gpsdata->altitude), xyPos[0], xyPos[1], (0), gpsdata->groundSpeed * (__MW_INSTRUM_NODE_226(), cos((gpsdata->heading * ZP_PI) / (180.0))), gpsdata->groundSpeed * (__MW_INSTRUM_NODE_227(), sin((gpsdata->heading * ZP_PI) / (180.0)))}; 
#line 509
float r[(NUM_MEASUREMENTS * NUM_MEASUREMENTS)]{baroCovar, (0), (0), (0), (0), (0), (0), (0), gpsCovar * (100), (0), (0), (0), (0), (0), (0), (0), gpsCovar * (100), (0), (0), (0), (0), (0), (0), (0), gpsCovar * (100), (0), (0), (0), (0), (0), (0), (0), (HIGH_COVAR), (0), (0), (0), (0), (0), (0), (0), gpsCovar, (0), (0), (0), (0), (0), (0), (0), gpsCovar}; 
#line 528
float x[(DIM)]; 

float prevX[(DIM)]; 
for (int i = 0; __MW_INSTRUM_NODE_228(i < DIM); i++) { prevX[i] = iterData->prevX[i]; }  


float p[(DIM * DIM)]; 

float prevP[(DIM * DIM)]; 
for (int i = 0; __MW_INSTRUM_NODE_230(i < DIM * DIM); i++) 
{ 
prevP[i] = iterData->prevP[i]; 
}  

float fMultPrevX[(DIM * 1)]; 
__MW_INSTRUM_NODE_232(), mul(f, prevX, fMultPrevX, DIM, DIM, 1); 

float bMultU[(DIM * 1)]; 
__MW_INSTRUM_NODE_233(), mul(b, u, bMultU, DIM, U_DIM, 1); 

for (int i = 0; __MW_INSTRUM_NODE_234(i < DIM * 1); i++) { x[i] = fMultPrevX[i] + bMultU[i]; }  



float fMultPrevP[(DIM * DIM)]; 
__MW_INSTRUM_NODE_236(), mul(f, prevP, fMultPrevP, DIM, DIM, DIM); 

float transF[(DIM * DIM)]; 
for (int i = 0; __MW_INSTRUM_NODE_237(i < DIM * DIM); i++) { transF[i] = f[i]; }  
__MW_INSTRUM_NODE_239(), tran(transF, DIM, DIM); 

float fMultPrevPMultTransF[(DIM * DIM)]; 
__MW_INSTRUM_NODE_240(), mul(fMultPrevP, transF, fMultPrevPMultTransF, DIM, DIM, DIM); 

for (int i = 0; __MW_INSTRUM_NODE_241(i < DIM * DIM); i++) { p[i] = fMultPrevPMultTransF[i] + q[i]; }  
#line 568
float k[(DIM * NUM_MEASUREMENTS)]; 

float transH[(DIM * NUM_MEASUREMENTS)]; 
for (int i = 0; __MW_INSTRUM_NODE_243(i < NUM_MEASUREMENTS * DIM); i++) { transH[i] = h[i]; }  
__MW_INSTRUM_NODE_245(), tran(transH, NUM_MEASUREMENTS, DIM); 

float pMultTransH[(DIM * NUM_MEASUREMENTS)]; 
__MW_INSTRUM_NODE_246(), mul(p, transH, pMultTransH, DIM, DIM, NUM_MEASUREMENTS); 

float hPMultTransH[(NUM_MEASUREMENTS * NUM_MEASUREMENTS)]; 
__MW_INSTRUM_NODE_247(), mul(h, pMultTransH, hPMultTransH, NUM_MEASUREMENTS, DIM, NUM_MEASUREMENTS); 

float hPMultTransHPlusR[(NUM_MEASUREMENTS * NUM_MEASUREMENTS)]; 
for (int i = 0; __MW_INSTRUM_NODE_248(i < NUM_MEASUREMENTS * NUM_MEASUREMENTS); i++) { hPMultTransHPlusR[i] = hPMultTransH[i] + r[i]; }  

float hPMultTransHPlusRInv[(NUM_MEASUREMENTS * NUM_MEASUREMENTS)]; 
for (int i = 0; __MW_INSTRUM_NODE_250(i < NUM_MEASUREMENTS * NUM_MEASUREMENTS); i++) { hPMultTransHPlusRInv[i] = hPMultTransHPlusR[i]; }  
__MW_INSTRUM_NODE_252(), inv(hPMultTransHPlusRInv, NUM_MEASUREMENTS); 

__MW_INSTRUM_NODE_253(), mul(pMultTransH, hPMultTransHPlusRInv, k, DIM, NUM_MEASUREMENTS, NUM_MEASUREMENTS); 



float hMultX[(NUM_MEASUREMENTS * 1)]; 
__MW_INSTRUM_NODE_254(), mul(h, x, hMultX, NUM_MEASUREMENTS, DIM, 1); 

float zMinHMultX[(NUM_MEASUREMENTS * 1)]; 
for (int i = 0; __MW_INSTRUM_NODE_255(i < NUM_MEASUREMENTS * 1); i++) { zMinHMultX[i] = z[i] - hMultX[i]; }  

float kMultZMinHMultX[(DIM * 1)]; 
__MW_INSTRUM_NODE_257(), mul(k, zMinHMultX, kMultZMinHMultX, DIM, NUM_MEASUREMENTS, 1); 

float newX[(DIM * 1)]; 
for (int i = 0; __MW_INSTRUM_NODE_258(i < DIM * 1); i++) { newX[i] = x[i] + kMultZMinHMultX[i]; }  




float I[(DIM * DIM)] = {(1), (0), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (1), (0), (0), (0), (0), (0), (0), (1)}; 
#line 616
float kMultH[(DIM * DIM)]; 
__MW_INSTRUM_NODE_260(), mul(k, h, kMultH, DIM, NUM_MEASUREMENTS, DIM); 

float IMinKMultH[(DIM * DIM)]; 
for (int i = 0; __MW_INSTRUM_NODE_261(i < DIM * DIM); i++) { IMinKMultH[i] = I[i] - kMultH[i]; }  

float newP[(DIM * DIM)]; 
__MW_INSTRUM_NODE_263(), mul(IMinKMultH, p, newP, DIM, DIM, DIM); 




double *latLongOut = ((__MW_INSTRUM_NODE_264(), cartesianToGPS(x[2], x[4]))); 

Output->altitude = x[0]; 
Output->rateOfClimb = x[1]; 
Output->latitude = latLongOut[0]; 
Output->latitudeSpeed = x[3]; 
Output->longitude = latLongOut[1]; 
Output->longitudeSpeed = x[5]; 

for (int i = 0; __MW_INSTRUM_NODE_265(i < DIM * 1); i++) { iterData->prevX[i] = newX[i]; }  
for (int i = 0; __MW_INSTRUM_NODE_267(i < DIM * DIM); i++) { iterData->prevP[i] = newP[i]; }  __MW_INSTRUM_NODE_269(); 

return SFError; 
} 



SFError_t SF_GenerateNewResult(IMU_Data_t *

imuData, Gps_Data_t *
GpsData, Altimeter_Data_t *
altimeterData, SFIterationData_t *
iterData, SFOutput_t *
SFOutput) 


{ __MW_INSTRUM_FCN_ENTER_15(); int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_NODE_270(); 
SFError_t SFError; 
SFError.errorCode = 0; 
SFAttitudeOutput_t attitudeOutput; 
__MW_INSTRUM_NODE_271(), memset(&attitudeOutput, 0, sizeof attitudeOutput); 
SFPathOutput_t pathOutput; 
__MW_INSTRUM_NODE_272(), memset(&pathOutput, 0, sizeof pathOutput); 
#line 685
SFError = (__MW_INSTRUM_NODE_273(), SF_GetAttitude(&attitudeOutput, imuData)); 
if (__MW_INSTRUM_NODE_274(((__mw_tmp_for_expr_1 = SFError.errorCode), (__MW_INSTRUM_NODE_276(__mw_tmp_for_expr_1, 0), (__mw_tmp_for_expr_1 != 0))))) { __MW_INSTRUM_NODE_279(); return SFError; }  __MW_INSTRUM_NODE_280(); 


SFError = (__MW_INSTRUM_NODE_281(), SF_GetPosition(&pathOutput, altimeterData, GpsData, imuData, &attitudeOutput, iterData)); 
if (__MW_INSTRUM_NODE_282(((__mw_tmp_for_expr_2 = SFError.errorCode), (__MW_INSTRUM_NODE_284(__mw_tmp_for_expr_2, 0), (__mw_tmp_for_expr_2 != 0))))) { __MW_INSTRUM_NODE_287(); return SFError; }  __MW_INSTRUM_NODE_288(); 
#line 697
SFOutput->pitch = attitudeOutput.pitch; 
SFOutput->roll = attitudeOutput.roll; 
SFOutput->yaw = attitudeOutput.yaw; 
SFOutput->altitude = pathOutput.altitude; 
SFOutput->rateOfClimb = pathOutput.rateOfClimb; 
SFOutput->latitude = pathOutput.latitude; 
SFOutput->latitudeSpeed = pathOutput.latitudeSpeed; 
SFOutput->longitude = pathOutput.longitude; 
SFOutput->longitudeSpeed = pathOutput.longitudeSpeed; __MW_INSTRUM_NODE_289(); 




return SFError; 
} 
