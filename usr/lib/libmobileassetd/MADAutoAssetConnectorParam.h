//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MADAutoAssetConnectorParam : NSObject
{
    _Bool _potentialNetworkFailure;	// 8 = 0x8
    NSString *_paramSafeSummary;	// 16 = 0x10
    long long _paramType;	// 24 = 0x18
    NSArray *_monitorSelectors;	// 32 = 0x20
    NSArray *_selectorsNoRetry;	// 40 = 0x28
    NSArray *_selectorsRequiringRetry;	// 48 = 0x30
    MAAutoAssetSelector *_finishedAssetSelector;	// 56 = 0x38
    NSURL *_observedNetworkPath;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001bd511
- (void).cxx_destruct;	// IMP=0x00000000001bd7e8
@property(retain, nonatomic) NSURL *observedNetworkPath; // @synthesize observedNetworkPath=_observedNetworkPath;
@property(nonatomic) _Bool potentialNetworkFailure; // @synthesize potentialNetworkFailure=_potentialNetworkFailure;
@property(retain, nonatomic) MAAutoAssetSelector *finishedAssetSelector; // @synthesize finishedAssetSelector=_finishedAssetSelector;
@property(retain, nonatomic) NSArray *selectorsRequiringRetry; // @synthesize selectorsRequiringRetry=_selectorsRequiringRetry;
@property(retain, nonatomic) NSArray *selectorsNoRetry; // @synthesize selectorsNoRetry=_selectorsNoRetry;
@property(retain, nonatomic) NSArray *monitorSelectors; // @synthesize monitorSelectors=_monitorSelectors;
@property(readonly, nonatomic) long long paramType; // @synthesize paramType=_paramType;
@property(retain, nonatomic) NSString *paramSafeSummary; // @synthesize paramSafeSummary=_paramSafeSummary;
- (void)updateSafeSummary;	// IMP=0x00000000001bd6e6
- (id)summary;	// IMP=0x00000000001bd6d4
- (id)_newSummary;	// IMP=0x00000000001bd52b
- (id)description;	// IMP=0x00000000001bd519
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bd349
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bcfc9
- (id)initWithParamType:(long long)arg1 withSafeSummary:(id)arg2 withMonitorSelectors:(id)arg3 withSelectorsNoRetry:(id)arg4 withSelectorsRequiringRetry:(id)arg5 withFinishedAssetSelector:(id)arg6 withPotentialNetworkFailure:(_Bool)arg7 withObservedNetworkPath:(id)arg8;	// IMP=0x00000000001bce7a
- (id)initWithObservedNetworkPath:(id)arg1;	// IMP=0x00000000001bce3e
- (id)initWithScheduledSelectorFinished:(id)arg1 withPotentialNetworkFailure:(_Bool)arg2;	// IMP=0x00000000001bce0b
- (id)initWithMonitorSelectors:(id)arg1 withSelectorsNoRetry:(id)arg2 withSelectorsRequiringRetry:(id)arg3;	// IMP=0x00000000001bcdda
- (id)initWithSafeSummary:(id)arg1;	// IMP=0x00000000001bcd9c

@end
