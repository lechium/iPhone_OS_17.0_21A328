//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKViewElementStyle.h>

@class TVAppStyle;

@interface IKViewElementStyle (TVMLKitAdditions)
- (id)tv_symbolTextStyle;	// IMP=0x003000000011c4c0
- (long long)tv_symbolScale;	// IMP=0x003000000011c33f
- (long long)tv_symbolWeight;	// IMP=0x003000000011c152
- (double)tv_symbolPointSize;	// IMP=0x003000000011c0fb
- (id)tv_group;	// IMP=0x003000000011c0e2
- (unsigned long long)tv_maxLines;	// IMP=0x003000000011c097
- (long long)tv_indexDisplayMode;	// IMP=0x003000000011c018
- (id)tv_layerFlipMode;	// IMP=0x003000000011bfff
- (struct UIEdgeInsets)tv_scrollableBoundsInset;	// IMP=0x003000000011bf9c
- (id)tv_scrollMode;	// IMP=0x003000000011bf83
- (id)tv_highlightStyle;	// IMP=0x003000000011bf6a
- (_Bool)tv_acceptsFocus;	// IMP=0x003000000011bf16
- (id)tv_overflow;	// IMP=0x003000000011befd
- (id)tv_progressStyle;	// IMP=0x003000000011bee4
- (double)tv_focusSizeIncrease;	// IMP=0x003000000011be8d
- (id)tv_focusAlign;	// IMP=0x003000000011be74
- (id)tv_shadow;	// IMP=0x003000000011be5b
- (double)tv_imageUpscaleFactor;	// IMP=0x003000000011be04
- (id)tv_searchStyle;	// IMP=0x003000000011bdeb
- (long long)tv_contentAlignment;	// IMP=0x003000000011bca0
- (struct UIEdgeInsets)tv_padding;	// IMP=0x003000000011bc3d
- (struct UIEdgeInsets)tv_focusMargin;	// IMP=0x003000000011bbda
- (_Bool)tv_hasFocusMargin;	// IMP=0x003000000011bba0
- (struct UIEdgeInsets)tv_margin;	// IMP=0x003000000011bb3d
- (_Bool)tv_borderContinuous;	// IMP=0x003000000011baeb
- (id)tv_borderRadius;	// IMP=0x003000000011bad2
- (struct UIEdgeInsets)tv_borderWidths;	// IMP=0x003000000011ba6f
- (long long)tv_position;	// IMP=0x003000000011b7ae
- (long long)tv_alignment;	// IMP=0x003000000011b62d
- (unsigned long long)tv_maxTextLines;	// IMP=0x003000000011b5d6
- (unsigned long long)tv_rowCount;	// IMP=0x003000000011b58b
- (unsigned long long)tv_columnCount;	// IMP=0x003000000011b540
- (long long)tv_textAlignment;	// IMP=0x003000000011b3c6
- (id)tv_visualEffect;	// IMP=0x003000000011b3ad
- (id)tv_ratingStyle;	// IMP=0x003000000011b394
- (id)tv_transition;	// IMP=0x003000000011b37b
- (double)tv_textHyphenationFactor;	// IMP=0x003000000011b27f
- (id)tv_textStyle;	// IMP=0x003000000011b266
- (id)tv_textHighlightStyle;	// IMP=0x003000000011b24d
- (id)tv_imageTreatment;	// IMP=0x003000000011b234
- (unsigned int)tv_fontStretch;	// IMP=0x003000000011b193
- (id)tv_fontWeight;	// IMP=0x003000000011b17a
- (id)tv_textTransform;	// IMP=0x003000000011b161
- (id)tv_textShadow;	// IMP=0x003000000011b148
- (double)tv_columnPadding;	// IMP=0x003000000011b0f1
- (id)tv_columnColor;	// IMP=0x003000000011b0d8
- (id)tv_darkTintColor;	// IMP=0x003000000011b0bf
- (id)tv_tintColor;	// IMP=0x003000000011b0a6
- (id)tv_tintColor2;	// IMP=0x003000000011b08d
- (id)tv_highlightColor;	// IMP=0x003000000011b074
- (id)tv_color;	// IMP=0x003000000011b05b
- (id)tv_borderColor;	// IMP=0x003000000011b042
- (id)tv_backgroundHighlightColor;	// IMP=0x003000000011b029
- (id)tv_backgroundHighlightStyle;	// IMP=0x003000000011b010
- (id)tv_backgroundColor;	// IMP=0x003000000011aff7
- (_Bool)tv_hasWidth;	// IMP=0x003000000011afbd
- (double)tv_width;	// IMP=0x003000000011af66
- (double)tv_minimumScaleFactor;	// IMP=0x003000000011af0f
- (_Bool)tv_adjustsFontSizeToFitWidth;	// IMP=0x003000000011aec4
- (double)tv_transitionInterval;	// IMP=0x003000000011ae6d
- (double)tv_minWidth;	// IMP=0x003000000011ae16
- (double)tv_minHeight;	// IMP=0x003000000011adbf
- (double)tv_maxWidth;	// IMP=0x003000000011ad68
- (double)tv_maxHeight;	// IMP=0x003000000011ad11
- (double)tv_lineSpacing;	// IMP=0x003000000011acba
- (double)tv_interitemSpacing;	// IMP=0x003000000011ac63
- (_Bool)tv_hasHeight;	// IMP=0x003000000011ac29
- (double)tv_height;	// IMP=0x003000000011abd2
- (double)tv_fontSize;	// IMP=0x003000000011ab7b
- (id)tv_fontFamily;	// IMP=0x003000000011ab62
- (struct CGAffineTransform)tv_focusTransform;	// IMP=0x003000000011aaec
- (struct CGAffineTransform)tv_transform;	// IMP=0x003000000011aa76
- (unsigned long long)tv_edgeFlagForStyle:(id)arg1;	// IMP=0x003000000011a9b2
- (id)tv_cssValueForStyle:(id)arg1;	// IMP=0x003000000011a9a0
- (id)tv_valueForStyle:(id)arg1;	// IMP=0x003000000011a98e
@property(retain, nonatomic, setter=tv_setStyleMetrics:) TVAppStyle *tv_styleMetrics;
- (id)tv_associatedViewElementStyle;	// IMP=0x003000000011a892
@end

