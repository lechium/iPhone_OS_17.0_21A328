//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarFocusableButton, CarMapTrackingController, ChromeViewController, NSArray, NSMutableDictionary, NSString;

@interface CarCardTestModeController : NSObject
{
    NSMutableDictionary *_cards;	// 8 = 0x8
    NSMutableDictionary *_cardToConfigMap;	// 16 = 0x10
    CarFocusableButton *_pushButton;	// 24 = 0x18
    ChromeViewController *_chromeViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000097bf64
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)_handleCardButtonTag:(unsigned long long)arg1 forStackID:(id)arg2 card:(id)arg3;	// IMP=0x001000000097bb70
- (void)_deleteCardUUID:(id)arg1;	// IMP=0x001000000097b9c8
- (void)_push;	// IMP=0x001000000097b956
- (id)_stackedCardWithConfig:(id)arg1 stackID:(id)arg2;	// IMP=0x001000000097b783
- (void)_addCardWithConfig:(id)arg1;	// IMP=0x001000000097b332
- (void)_addCardNotification:(id)arg1;	// IMP=0x001000000097b0cf
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000097ad44
- (id)desiredCards;	// IMP=0x001000000097ad2e
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000097ad18
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000097a873
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) _Bool showsMapView;
- (id)init;	// IMP=0x001000000097a77c

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldMapControlsModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool wantsMapInsetsToRespectSafeAreaInsets;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

