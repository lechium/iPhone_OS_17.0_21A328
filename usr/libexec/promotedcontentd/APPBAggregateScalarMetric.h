//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBAggregateScalarMetric : PBCodable
{
    NSString *_bundleID;	// 8 = 0x8
    int _count;	// 16 = 0x10
    NSString *_metric;	// 24 = 0x18
    struct {
        unsigned int count:1;
    } _has;	// 32 = 0x20
}

+ (id)options;	// IMP=0x00200000000929e4
- (void).cxx_destruct;	// IMP=0x002000000009323f
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *metric; // @synthesize metric=_metric;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000093162
- (unsigned long long)hash;	// IMP=0x00100000000930ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009300a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000092f4c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000092ec9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000092e46
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000092e39
- (id)dictionaryRepresentation;	// IMP=0x0010000000092b52
- (id)description;	// IMP=0x0010000000092aa3
@property(nonatomic) _Bool hasCount;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasMetric;

@end

