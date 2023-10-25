//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlayUIServices/CRSUIWindow.h>

@class NSHashTable, NSString;

@interface CarDisplayWindow : CRSUIWindow
{
    NSHashTable *_eventTaps;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000d03b36
- (void)notificationLayoutGuideDidChange;	// IMP=0x0010000000d03a7b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000d03919
- (void)registerEventTap:(id)arg1;	// IMP=0x0010000000d0389f
- (void)sendEvent:(id)arg1;	// IMP=0x0010000000d036cb
- (void)setRootViewController:(id)arg1;	// IMP=0x0010000000d035dd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000d0350c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
