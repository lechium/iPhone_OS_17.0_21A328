//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientIdentifierList : NSObject
{
    NSMutableArray *_clientIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004cf107
- (void).cxx_destruct;	// IMP=0x00000000004cf0f7
@property(retain, nonatomic) NSMutableArray *clientIdentifiers; // @synthesize clientIdentifiers=_clientIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cef31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ceec7
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004ceba9
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ce88b
- (id)initWithClientIdentifiers:(id)arg1;	// IMP=0x00000000004ce820
- (id)init;	// IMP=0x00000000004ce7f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

