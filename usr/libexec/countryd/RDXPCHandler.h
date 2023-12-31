//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RDCachedData;

@interface RDXPCHandler : NSObject
{
    RDCachedData *_dataCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002d8e
@property(retain) RDCachedData *dataCache; // @synthesize dataCache=_dataCache;
- (void)createCacheDirAtPath:(id)arg1;	// IMP=0x0010000000002c21
- (void)ping;	// IMP=0x0010000000002b7f
- (void)clearStatusSharedWithPeers;	// IMP=0x0010000000002b79
- (void)shareStatusWithPeers;	// IMP=0x0010000000002a48
- (void)updatePeer:(id)arg1 withEstimate:(id)arg2;	// IMP=0x00100000000022ba
- (void)updatePeer:(id)arg1 withCountryCode:(id)arg2 priority:(int)arg3 andTimestamp:(id)arg4;	// IMP=0x0010000000002148
- (void)update:(long long)arg1 withCountryCode:(id)arg2;	// IMP=0x0010000000001c5c
- (void)update:(long long)arg1 withListOfCountryCodes:(id)arg2;	// IMP=0x0010000000001499
- (void)clearDataCache;	// IMP=0x0010000000001487
- (id)init;	// IMP=0x001000000000136c
- (void)createNewDataCache;	// IMP=0x0010000000001320

@end

