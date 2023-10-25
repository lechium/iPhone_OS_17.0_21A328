//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANIdentifierList : NSObject
{
    NSMutableArray *_identifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000059999d
- (void).cxx_destruct;	// IMP=0x000000000059998d
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005997c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000059975d
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000059943f
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000599121
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x00000000005990b6
- (id)init;	// IMP=0x0000000000599087

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
