//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHBaseSceneHostEnvironment.h"

@class BLSBacklightSceneVisualState, NSDate;
@protocol BLSBacklightSceneEnvironment_Private;

__attribute__((visibility("hidden")))
@interface BLSHLocalHostSceneEnvironment : BLSHBaseSceneHostEnvironment
{
    id <BLSBacklightSceneEnvironment_Private> _clientEnvironment;	// 8 = 0x8
    BLSBacklightSceneVisualState *_lock_visualState;	// 16 = 0x10
    NSDate *_lock_presentationDate;	// 24 = 0x18
    NSDate *_lock_visualStateMismatchStartTime;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006c5ec
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2 animated:(_Bool)arg3 triggerEvent:(id)arg4 touchTargetable:(_Bool)arg5 sceneContentsUpdated:(CDUnknownBlockType)arg6 performBacklightRamp:(CDUnknownBlockType)arg7 animationComplete:(CDUnknownBlockType)arg8;	// IMP=0x000000000006bb3f
- (void)updateToDateSpecifier:(id)arg1 sceneContentsUpdated:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ae5f
- (void)requestedFidelityForInactiveContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006add1
- (void)requestDateSpecifiersForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006aaff
- (void)clearPresentationDate;	// IMP=0x000000000006aabe
- (id)presentationDate;	// IMP=0x000000000006aa7a
- (void)setUnrestrictedFramerateUpdates:(_Bool)arg1;	// IMP=0x000000000006a94c
- (_Bool)hasUnrestrictedFramerateUpdates;	// IMP=0x000000000006a912
- (void)setLiveUpdating:(_Bool)arg1;	// IMP=0x000000000006a7e4
- (_Bool)isLiveUpdating;	// IMP=0x000000000006a7aa
- (_Bool)clientSupportsAlwaysOn;	// IMP=0x000000000006a770
- (id)visualState;	// IMP=0x000000000006a72c
- (_Bool)isClientActive;	// IMP=0x000000000006a6f2
- (_Bool)clientHasDelegate;	// IMP=0x000000000006a699
- (_Bool)hasVisualStateMistmach;	// IMP=0x000000000006a65f
- (id)initWithBacklightSceneEnvironment:(id)arg1;	// IMP=0x000000000006a548

@end

