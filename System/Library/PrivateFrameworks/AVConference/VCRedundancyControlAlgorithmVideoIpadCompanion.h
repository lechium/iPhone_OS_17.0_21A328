//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject
{
    unsigned int _redundancyPercentage;	// 8 = 0x8
    double _redundancyInterval;	// 16 = 0x10
    unsigned int _packetLossPercentage;	// 24 = 0x18
    unsigned int _burstyLoss[500];	// 28 = 0x1c
    unsigned int _burstyLossArraySize;	// 2028 = 0x7ec
    unsigned int _burstyLossArrayIndex;	// 2032 = 0x7f0
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (unsigned int)computeRedundancyWithBurstyLoss;	// IMP=0x0000000000061498
- (unsigned int)computeRedundancyWithLossPercentage;	// IMP=0x000000000006146e
- (void)updateBurstyLoss:(unsigned int)arg1;	// IMP=0x0000000000061422
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x0000000000061374

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

