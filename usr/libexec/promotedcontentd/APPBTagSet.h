//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBTagSet : PBCodable
{
    NSMutableArray *_tags;	// 8 = 0x8
}

+ (Class)tagsType;	// IMP=0x00200000000a9c33
+ (id)options;	// IMP=0x00100000000a9b22
- (void).cxx_destruct;	// IMP=0x00200000000aa48d
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000aa32f
- (unsigned long long)hash;	// IMP=0x00100000000aa312
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000aa282
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000aa0be
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a9ff9
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a9ec3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a9eb6
- (id)dictionaryRepresentation;	// IMP=0x00100000000a9cf3
- (id)description;	// IMP=0x00100000000a9c44
- (id)tagsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a9c16
- (unsigned long long)tagsCount;	// IMP=0x00100000000a9bf9
- (void)addTags:(id)arg1;	// IMP=0x00100000000a9b8f
- (void)clearTags;	// IMP=0x00100000000a9b72

@end
