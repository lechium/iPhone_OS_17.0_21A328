//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactDayViewController, LargeDayViewController;

@interface DayViewContainerViewController
{
    CompactDayViewController *_compactController;	// 16 = 0x10
    LargeDayViewController *_regularController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d662f
@property(retain, nonatomic) LargeDayViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactDayViewController *compactController; // @synthesize compactController=_compactController;
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x00100000000d65a2
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x00100000000d649b
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x00100000000d6489
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x00100000000d6382
- (id)childViewControllerForUnknownTraits;	// IMP=0x00100000000d6370
- (id)currentChildViewController;	// IMP=0x00100000000d6332

@end

