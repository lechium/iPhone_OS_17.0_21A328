//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface COSLocationOptinViewController
{
}

+ (void)authorizeLocationForWatchFaces;	// IMP=0x002000000000f156
+ (_Bool)controllerNeedsToRun;	// IMP=0x001000000000f125
+ (_Bool)locationRestricted;	// IMP=0x001000000000f0ab
+ (_Bool)locationServicesEnabled;	// IMP=0x001000000000efdd
+ (void)doWorkForSkippedPane;	// IMP=0x001000000000efaa
+ (_Bool)wantsUnifiedFYI;	// IMP=0x001000000000ef98
- (id)privacyBundles;	// IMP=0x002000000000f594
- (id)alternateButtonTitle;	// IMP=0x001000000000f528
- (id)suggestedButtonTitle;	// IMP=0x001000000000f4bc
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x001000000000f3da
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x001000000000f3c6
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000000f3a8
- (id)imageResource;	// IMP=0x001000000000f357
- (id)detailString;	// IMP=0x001000000000f2eb
- (id)titleString;	// IMP=0x001000000000f27f
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x001000000000f277
- (id)init;	// IMP=0x001000000000f226

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

