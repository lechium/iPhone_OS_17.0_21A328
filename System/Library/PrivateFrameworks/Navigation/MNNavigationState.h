//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNLocationProviderCLParameters, MNNavigationStateManager, MNNavigationTraceManager, MNSimulationLocationProvider;

__attribute__((visibility("hidden")))
@interface MNNavigationState : NSObject
{
    double _locationUpdateInterval;	// 8 = 0x8
    double _suggestionUpdateFrequency;	// 16 = 0x10
    MNNavigationStateManager *_stateManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010a0ec
@property(readonly, nonatomic) __weak MNNavigationStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(readonly, nonatomic) double suggestionUpdateFrequency; // @synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency;
@property(readonly, nonatomic) double locationUpdateInterval; // @synthesize locationUpdateInterval=_locationUpdateInterval;
- (_Bool)_isSelectorValidForForwarding:(SEL)arg1;	// IMP=0x000000000010a0ac
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000010a05c
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000109fe3
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000109eb8
- (void)changeUserOptions:(id)arg1;	// IMP=0x0000000000109eb2
- (void)postEnterState;	// IMP=0x0000000000109eac
- (void)preEnterState;	// IMP=0x0000000000109ea6
- (void)leaveState;	// IMP=0x0000000000109ea0
- (void)enterState;	// IMP=0x0000000000109e9a
- (void)dealloc;	// IMP=0x0000000000109e0c
- (id)initWithStateManager:(id)arg1;	// IMP=0x0000000000109d31
- (id)init;	// IMP=0x0000000000109d1d
@property(readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property(readonly, nonatomic) _Bool shouldClearStoredRoutes;
@property(readonly, nonatomic) MNLocationProviderCLParameters *clParameters;
@property(readonly, nonatomic) unsigned long long desiredLocationProviderType;
@property(readonly, nonatomic) _Bool requiresLocationAccess;
@property(readonly, nonatomic) _Bool requiresHighMemoryThreshold;
@property(readonly, nonatomic) unsigned long long type;

@end

