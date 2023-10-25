//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineHeuristics : NSObject
{
    NSString *_localPeerID;	// 8 = 0x8
    NSString *_storeName;	// 16 = 0x10
    PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
    NSString *_modelVersionHash;	// 32 = 0x20
    long long _numRequiredTransactions;	// 40 = 0x28
    long long _storeSize;	// 48 = 0x30
    long long _logSize;	// 56 = 0x38
    long double _logToStoreSizeRatio;	// 64 = 0x40
    long long _minLogBytes;	// 80 = 0x50
    PFUbiquityKnowledgeVector *_currentBaselineKV;	// 88 = 0x58
    PFUbiquityKnowledgeVector *_currentKV;	// 96 = 0x60
}

- (id)description;	// IMP=0x000000000012a4d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a4c0
- (id)copy;	// IMP=0x000000000012a438
- (void)dealloc;	// IMP=0x000000000012a3ab
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;	// IMP=0x000000000012a31d
- (id)init;	// IMP=0x000000000012a2bd

@end
