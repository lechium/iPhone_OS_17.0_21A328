//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GKIDSRequestManager : NSObject
{
    NSMutableDictionary *_idsRequests;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0040000000170444
- (void).cxx_destruct;	// IMP=0x000000000017109d
@property(retain) NSMutableDictionary *idsRequests; // @synthesize idsRequests=_idsRequests;
- (void)requestGKPlayerIDForiCloudIDs:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000170782
- (id)responseDictionaryQueue;	// IMP=0x00100000001705e2
- (void)dealloc;	// IMP=0x00100000001702f2
- (id)init;	// IMP=0x001000000017029c

@end

