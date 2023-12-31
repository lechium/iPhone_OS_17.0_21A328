//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PSAttribute : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c0f75
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c0ec8
- (unsigned long long)hash;	// IMP=0x00100000000c0e7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c0dc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c0d25
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c0cc2
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c0c65
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c0c58
- (id)dictionaryRepresentation;	// IMP=0x00100000000c0a6b
- (id)description;	// IMP=0x00100000000c09bc
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

