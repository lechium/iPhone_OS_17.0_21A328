//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PRSRankingConfiguration, SPWorldClockDatastore;

@interface SPWorldClockDatastoreToken : NSObject
{
    SPWorldClockDatastore *_store;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000090491
@property unsigned long long type; // @synthesize type=_type;
@property(readonly) SPWorldClockDatastore *store; // @synthesize store=_store;
- (void)begin:(id)arg1;	// IMP=0x001000000008fad7
- (void)cancel;	// IMP=0x001000000008fad1
- (id)initWithStore:(id)arg1;	// IMP=0x001000000008fa5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) PRSRankingConfiguration *rankingInfo;
@property(readonly) Class superclass;

@end

