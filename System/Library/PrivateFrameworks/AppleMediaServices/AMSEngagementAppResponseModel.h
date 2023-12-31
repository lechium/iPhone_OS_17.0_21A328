//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSEngagementAppResponseModel : NSObject
{
    NSDate *_created;	// 8 = 0x8
    NSDictionary *_definition;	// 16 = 0x10
}

+ (_Bool)_shouldEvictDefinition:(id)arg1 created:(id)arg2;	// IMP=0x006000000027bfba
- (void).cxx_destruct;	// IMP=0x000000000027c0eb
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSDate *created; // @synthesize created=_created;
- (_Bool)matchesEvent:(id)arg1;	// IMP=0x000000000027be83
@property(readonly, nonatomic) NSDictionary *responseData;
- (id)exportObject;	// IMP=0x000000000027bcdf
@property(readonly, nonatomic) NSString *cacheKey;
- (id)initWithData:(id)arg1 cacheInfo:(id)arg2;	// IMP=0x000000000027ba0b
- (id)initWithCacheObject:(id)arg1;	// IMP=0x000000000027b865

@end

