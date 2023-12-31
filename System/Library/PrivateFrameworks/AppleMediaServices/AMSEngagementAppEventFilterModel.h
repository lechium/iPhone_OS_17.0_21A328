//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSEngagementAppEventFilterModel : NSObject
{
    NSDictionary *_definition;	// 8 = 0x8
}

+ (_Bool)matchEvent:(id)arg1 toFilter:(id)arg2;	// IMP=0x006000000027b2a5
- (void).cxx_destruct;	// IMP=0x000000000027b855
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
- (_Bool)matchesEvent:(id)arg1;	// IMP=0x000000000027b1d3
- (id)exportObject;	// IMP=0x000000000027b12c
@property(readonly, nonatomic) unsigned long long components;
@property(readonly, nonatomic) _Bool allowsResponse;
- (id)initWithDefinition:(id)arg1;	// IMP=0x000000000027af57
- (id)initWithCacheObject:(id)arg1;	// IMP=0x000000000027aec3
- (id)init;	// IMP=0x000000000027aeaf

@end

