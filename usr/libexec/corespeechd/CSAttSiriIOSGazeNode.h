//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, NSArray, NSString;

@interface CSAttSiriIOSGazeNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000119f8e
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)arg1 atMachAbsTime:(unsigned long long)arg2;	// IMP=0x0010000000119f0f
- (void)addAreaOfInterestForSiriOrb:(struct CGRect)arg1;	// IMP=0x0010000000119f09
- (_Bool)hadSignalsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x0010000000119f01
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000119efb
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000119ef5
- (void)stop;	// IMP=0x0010000000119eef
- (void)pause;	// IMP=0x0010000000119ee9
- (void)start;	// IMP=0x0010000000119ee3
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000119ed5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

