//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTUndeclaredTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001675f4
- (void).cxx_destruct;	// IMP=0x000000000016782e
- (id)identifier;	// IMP=0x0000000000167818
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001677c2
- (id)awakeAfterUsingCoder:(id)arg1;	// IMP=0x00000000001676fd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167656
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001675fc
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x00000000001674fc
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000001674f6
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001674f0
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x0000000000167494
- (id)declaration;	// IMP=0x0000000000167417
- (_Bool)isInPublicDomain;	// IMP=0x00000000001673b8
- (id)version;	// IMP=0x00000000001673b0
- (id)_initWithContext:(struct LSContext *)arg1 identifier:(id)arg2;	// IMP=0x0000000000167316

@end

