//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITraitCollection.h>

@class ICAppearanceInfo;

@interface UITraitCollection (IC)
+ (void)setIc_alwaysShowLightContent:(_Bool)arg1;	// IMP=0x0020000000135f91
+ (_Bool)ic_alwaysShowLightContent;	// IMP=0x0020000000135f71
- (void)ic_performAsCurrent:(CDUnknownBlockType)arg1;	// IMP=0x0010000000136199
- (id)ic_traitCollectionByAppendingNonNilTraitCollection:(id)arg1;	// IMP=0x00100000001360b0
- (_Bool)ic_hasEqualSizeToTraitCollection:(id)arg1;	// IMP=0x0010000000136028
@property(readonly, nonatomic) ICAppearanceInfo *ic_appearanceInfo;
@property(readonly, nonatomic) _Bool ic_isDark;
@property(readonly, nonatomic) _Bool ic_hasCompactWidth;
@property(readonly, nonatomic) _Bool ic_hasCompactHeight;
@property(readonly, nonatomic) _Bool ic_hasCompactSize;
@end

