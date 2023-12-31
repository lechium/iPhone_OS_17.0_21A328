//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterWANStatusList : NSObject
{
    NSMutableArray *_statuses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004e9333
- (void).cxx_destruct;	// IMP=0x00000000004e9323
@property(retain, nonatomic) NSMutableArray *statuses; // @synthesize statuses=_statuses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e915d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e90f3
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004e8dd5
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e8ab7
- (id)initWithStatuses:(id)arg1;	// IMP=0x00000000004e8a4c
- (id)init;	// IMP=0x00000000004e8a1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

