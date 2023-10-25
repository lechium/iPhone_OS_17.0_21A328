//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ADDeviceSyncCommandPullDeltaResponse : NSObject
{
    NSArray *_incrementalChanges;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000ba74f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ba702
- (void).cxx_destruct;	// IMP=0x00200000000ba5e0
@property(readonly, copy, nonatomic) NSArray *incrementalChanges; // @synthesize incrementalChanges=_incrementalChanges;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000ba5b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000ba4e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ba4dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ba43a
- (unsigned long long)hash;	// IMP=0x00100000000ba424
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000ba39e
- (id)description;	// IMP=0x00100000000ba38a
- (id);	// IMP=0x00100000000ba2f4
- (id)init;	// IMP=0x00100000000ba2e0
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ba1ed
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ba757

@end
