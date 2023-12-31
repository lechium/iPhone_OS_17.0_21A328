//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EKCalendarDate, UIFont, UILabel;

@interface YearViewYearHeader : UIView
{
    UILabel *_yearNumber;	// 8 = 0x8
    UIView *_thinLine;	// 16 = 0x10
    _Bool _showingMultiEraYear;	// 24 = 0x18
    _Bool _showingOverlayLegend;	// 25 = 0x19
    UIView *_overlayLegendYearStartLine;	// 32 = 0x20
    UIView *_overlayLegendMonthStartLine;	// 40 = 0x28
    UILabel *_overlayLegendYearStartLabel;	// 48 = 0x30
    UILabel *_overlayLegendMonthStartLabel;	// 56 = 0x38
    _Bool _currentYear;	// 64 = 0x40
    _Bool _layoutWhenJoiningViewHierarchy;	// 65 = 0x41
    EKCalendarDate *_calendarDate;	// 72 = 0x48
    UIFont *_yearNumberFont;	// 80 = 0x50
    double _yearNumberKerning;	// 88 = 0x58
    UIFont *_overlayLegendFont;	// 96 = 0x60
    double _overlayLegendRightInset;	// 104 = 0x68
    double _overlayLegendYearBaseline;	// 112 = 0x70
    double _overlayLegendMonthBaseline;	// 120 = 0x78
    double _overlayLegendSpacing;	// 128 = 0x80
    double _overlayLegendLineLength;	// 136 = 0x88
    double _overlayLegendYearLineThickness;	// 144 = 0x90
    double _overlayLegendMonthLineThickness;	// 152 = 0x98
}

+ (id)_headerBackgroundColor;	// IMP=0x00400000000721f7
+ (double)headerDaySpacingForWindowSize:(struct CGSize)arg1;	// IMP=0x0010000000163b05
+ (double)middleHeightForWindowSize:(struct CGSize)arg1;	// IMP=0x0010000000163add
+ (double)headerYInsetForWindowSize:(struct CGSize)arg1;	// IMP=0x0010000000163ab5
+ (double)heightForWindowSize:(struct CGSize)arg1;	// IMP=0x00100000000720c7
- (void).cxx_destruct;	// IMP=0x0020000000073bdf
@property(readonly, nonatomic) double overlayLegendMonthLineThickness; // @synthesize overlayLegendMonthLineThickness=_overlayLegendMonthLineThickness;
@property(readonly, nonatomic) double overlayLegendYearLineThickness; // @synthesize overlayLegendYearLineThickness=_overlayLegendYearLineThickness;
@property(readonly, nonatomic) double overlayLegendLineLength; // @synthesize overlayLegendLineLength=_overlayLegendLineLength;
@property(readonly, nonatomic) double overlayLegendSpacing; // @synthesize overlayLegendSpacing=_overlayLegendSpacing;
@property(readonly, nonatomic) double overlayLegendMonthBaseline; // @synthesize overlayLegendMonthBaseline=_overlayLegendMonthBaseline;
@property(readonly, nonatomic) double overlayLegendYearBaseline; // @synthesize overlayLegendYearBaseline=_overlayLegendYearBaseline;
@property(readonly, nonatomic) double overlayLegendRightInset; // @synthesize overlayLegendRightInset=_overlayLegendRightInset;
@property(readonly, nonatomic) UIFont *overlayLegendFont; // @synthesize overlayLegendFont=_overlayLegendFont;
@property(readonly, nonatomic) double yearNumberKerning; // @synthesize yearNumberKerning=_yearNumberKerning;
@property(readonly, nonatomic) UIFont *yearNumberFont; // @synthesize yearNumberFont=_yearNumberFont;
@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (void)_layoutOverlayLegend;	// IMP=0x00100000000731b6
- (void)_layoutYearNumber;	// IMP=0x00100000000730aa
- (void)_layoutThinLine;	// IMP=0x0010000000072f98
- (void)_removeOverlayLegend;	// IMP=0x0010000000072ee1
- (void)_updateOverlayLegend;	// IMP=0x0010000000072b04
- (id)_yearString;	// IMP=0x00100000000727c2
- (void)_reloadYearNumberLabel;	// IMP=0x001000000007235e
- (void)_initializeThinLine;	// IMP=0x0010000000072275
- (id)_thinLineColor;	// IMP=0x0010000000072210
@property(readonly, nonatomic) double heightBetweenLineAndNumber;
- (double)yearNumberHeaderFontSize;	// IMP=0x0010000000163b2d
- (void)localeChanged;	// IMP=0x00100000000721c9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000071fa5
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0010000000071f40
- (void)layoutSubviews;	// IMP=0x0010000000071eaa
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000071e66
- (id)initWithCalendarDate:(id)arg1;	// IMP=0x0010000000071d18

@end

