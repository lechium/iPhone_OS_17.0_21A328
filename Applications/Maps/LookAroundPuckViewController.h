//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class LookAroundPuckView, MISSING_TYPE, MKHapticEngine, NSString;

@interface LookAroundPuckViewController : UIViewController
{
    _Bool _canEnterLookAroundPIP;	// 8 = 0x8
    double _pitch;	// 16 = 0x10
    long long _lookAroundAvailability;	// 24 = 0x18
    MISSING_TYPE *_puckView;	// 32 = 0x20
    MKHapticEngine *_hapticEngine;	// 40 = 0x28
    CDUnknownBlockType _didEnterLookAroundPIP;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000cebecd
@property(copy, nonatomic) CDUnknownBlockType didEnterLookAroundPIP; // @synthesize didEnterLookAroundPIP=_didEnterLookAroundPIP;
@property(nonatomic) _Bool canEnterLookAroundPIP; // @synthesize canEnterLookAroundPIP=_canEnterLookAroundPIP;
@property(retain, nonatomic) MKHapticEngine *hapticEngine; // @synthesize hapticEngine=_hapticEngine;
@property(retain, nonatomic) LookAroundPuckView *puckView; // @synthesize puckView=_puckView;
@property(nonatomic) long long lookAroundAvailability; // @synthesize lookAroundAvailability=_lookAroundAvailability;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
- (void)lookAroundPIPDataCoordinatorDidEndMovingLookAroundView:(id)arg1;	// IMP=0x0010000000cebcd6
- (void)lookAroundPIPDataCoordinatorIsMovingLookAroundView:(id)arg1;	// IMP=0x0010000000cebc17
- (void)lookAroundPIPDataCoordinatorDidSynchronizeMapView:(id)arg1;	// IMP=0x0010000000cebb0b
- (void)lookAroundPIPDataCoordinatorDidPanLookAroundView:(id)arg1;	// IMP=0x0010000000ceba4c
- (void)lookAroundPIPDataCoordinatorIsRotatingMapView:(id)arg1;	// IMP=0x0010000000ceb98d
- (void)lookAroundPIPDataCoordinatorDidEndPanningMapView:(id)arg1;	// IMP=0x0010000000ceb88e
- (void)lookAroundPIPDataCoordinatorIsPanningMapView:(id)arg1;	// IMP=0x0010000000ceb792
- (void)lookAroundPIPDataCoordinatorDidStartPanningMapView:(id)arg1;	// IMP=0x0010000000ceb693
- (void)lookAroundPIPDataCoordinatorDidChangeLookAroundAvailability:(id)arg1;	// IMP=0x0010000000ceb58d
- (void)lookAroundPIPDataCoordinatorWillExitLookAroundPIP:(id)arg1;	// IMP=0x0010000000ceb430
- (void)lookAroundPIPDataCoordinatorFailedToEnterLookArounPIP:(id)arg1;	// IMP=0x0010000000ceb3aa
- (void)lookAroundPIPDataCoordinatorDidEnterLookAroundPIP:(id)arg1;	// IMP=0x0010000000ceb1c1
- (void)lookAroundPIPDataCoordinatorWillEnterLookArounPIP:(id)arg1;	// IMP=0x0010000000ceb140
- (void)setCanEnterLookAroundPIP;	// IMP=0x0010000000ceb0a9
@property(readonly, nonatomic, getter=isDimmed) _Bool dimmed;
- (void)viewDidLoad;	// IMP=0x0010000000ceac1a
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000ceac12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
