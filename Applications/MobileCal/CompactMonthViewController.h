//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CompactMonthViewController
{
    _Bool _applicationResuming;	// 16 = 0x10
    double _previousViewWidth;	// 24 = 0x18
}

+ (double)topOfMonthNameLabelToGrayLineDistanceForWindowSize:(struct CGSize)arg1;	// IMP=0x00400000001280e2
+ (id)monthNameFont;	// IMP=0x001000000012804d
+ (id)dividedModeBackgroundColor;	// IMP=0x00100000001276ad
+ (double)scrubbingMinimumPressDuration;	// IMP=0x001000000012769f
- (void)contentSizeCategoryChanged;	// IMP=0x0020000000127ffa
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;	// IMP=0x0010000000127fe6
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;	// IMP=0x0010000000127fd6
- (void)_updateDayHeaderFrames;	// IMP=0x0010000000127b29
- (double)palleteViewXOffset;	// IMP=0x0010000000127b20
- (void)viewDidLayoutSubviews;	// IMP=0x00100000001279dc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000127871
- (void)updatePalette:(id)arg1;	// IMP=0x001000000012779c
- (void)weekNumbersPrefChanged;	// IMP=0x00100000001276c6

@end
